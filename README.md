# AUTOSAR 车窗控制系统项目 & 实践笔记

## 项目介绍：智能车窗控制系统（BSW + ASW 软件开发）

**项目概述**：这是一个基于 AUTOSAR CP 的车窗控制应用层软件开发项目。项目从需求分析出发——梳理车窗使能、自动升降、手动升降三类功能需求，统计系统输入输出信号并设计 SWC 的 SR Port 接口；随后完成 CAN 底层通信配置，打通从 DBC 报文到 COM / PduR / CanIf / Can 的全链路；接着基于 Simulink / Stateflow 搭建车窗控制逻辑模型，实现使能延迟关闭、遥控长按自动升降、手动长按扩展控制等多种模式，并通过 Truth Table 仲裁避免自动与手动控制冲突；最后经过模型规范检查、MIL 测试与 PIL 联调验证，确保多模式控制功能正确稳定。

**技术栈**：Simulink、Stateflow、DBC、CAN、COM、PduR、CanIf、Can Driver、MIL、TSMaster、AUTOSAR CP

### 主要工作

1. **需求分析与接口设计**：梳理使能/自动/手动三类功能需求，统计系统 IO 信号，设计 SWC 的 SR Port 接口，为通信配置和建模提供输入。
2. **CAN 通信配置**：完成 DBC 收发报文及信号设计，配置 COM / PduR / CanIf / Can 全链路（I-Pdu、发送模式、波特率等），打通 SWC-Port 与 Com-Signal 映射。
3. **控制逻辑建模**：基于 10ms 周期 Runnable + Stateflow 三状态机，通过中间状态、超时转移、边沿触发，实现使能延迟关闭、长按钥匙自动升降、手动长按扩展控制。
4. **控制仲裁设计**：Truth Table 仲裁规则在 Enable/Disable 双工况下筛选有效控制输出，杜绝自动与手动控制冲突。
5. **验证与联调**：Model Advisor 通过 MISRA C:2012 规范检查 → MIL 测试决策覆盖 100% → 生成代码集成 AUTOSAR 工程 → TSMaster + IAR Live Watch 完成 PIL 联调。

## 实践学习文件全览（ AUTOSAR 全栈学习与实践）

从环境搭建、底层 MCAL 到应用层、通信矩阵到诊断的完整学习链路：

### 模块 0：AUTOSAR 基础与规范
- **AutoSAR SWS 接口规范统一**：梳理 SWS（软件规范）中接口的统一定义与命名
- **文件夹路径 & API**：工程目录结构与常用 API 速查

### 模块 1：环境搭建
- **环境安装 / IDE 安装**：开发环境与 IDE 搭建
- **开发实际演示与介绍**：AUTOSAR 开发流程总览
- **S32DS 添加现有工程-创建工程-烧录**：NXP S32DS 工程管理与烧录流程
- **GPIO 模块**：S32 平台 GPIO 基础

### 模块 2：CAN 网络与 COM 通信栈
- **CAN 网络概述**：CAN 总线物理层/数据链路层基础
- **认识 CAN 通讯矩阵**：通讯矩阵（信号/报文/周期/ID）解读
- **DBC 文件制作 / DBC 导出 CAN_STACK**：DBC 设计与导出到通信栈配置
- **DBC 创建发送/接受报文**：DBC 中手动增删收发报文
- **手动增加一条发送报文（版本管理）**：工程版本管理下的报文新增
- **COM STACK 介绍**：COM / PduR / CanIf / Can Driver 四层通信栈
- **发送模式介绍**：周期性/事件/混合等发送模式
- **signalgroup**：信号组（周期内多信号打包）配置
- **TimeOut**：通信超时监控机制
- **COM 发送模拟式练习**：通信栈发送实操
- **Datamapping 和工程编译刷写（TSMaster）**：TSMaster 数据映射与刷写
- **看懂 AUTOSAR 代码**：生成代码的阅读方法

### 模块 3：MCAL 底层驱动
- **MCAL PORT DIO 概述（MCAL 四部分）**：MCAL 分层与 PORT/DIO 驱动
- **PORT 点亮 LED 灯**：PORT 驱动实战
- **MCU 概述与配置（时钟树）**：MCU 模块与时钟树配置
- **ADC 概述 / ADC 练习**：ADC 驱动与采样实战
- **PWM 概述 / PWM 练习**：PWM 输出与实战
- **SPI 通讯概述 / SPI 练习**：SPI 主从通信与实战
- **ICU**：输入捕获单元（脉宽/周期测量）

### 模块 4：Application 应用层
- **Application 概述**：应用层 SWC 架构
- **SWC_SR_Runnable**：Sender-Receiver 接口与 Runnable 映射
- **CS 接口**：Client-Server 接口
- **数值和结构体 / 枚举和数组**：应用层数据类型

### 模块 5：车窗项目实战（完整流程）
- **车窗-课程大纲**：BCM 车窗控制项目整体规划
- **车窗-需求分析**：功能需求梳理、IO 信号统计、SR Port 设计（含 RKE/PEPS、KL 端子、BCM/DDM 概念）
- **Davinci 制作 arxml**：用 Davinci 生成模型输入（接口/SWC 交互）
- **车窗模型搭建**：Simulink/Stateflow 搭建控制模型
- **代码生成（AUTOSAR）**：模型生成 .c/.h 代码
- **模型规范检查**：Model Advisor / MISRA 规范检查
- **MIL 测试**：Test Harness + Test Sequence 用例，验证模型正确性
- **仿真测试**：模型级仿真验证
- **工程编译与 mapping**：代码集成、编译与工程映射

### 模块 6：看门狗
- **看门狗协议栈概念**：WDG 协议栈分层与原理
- **看门狗协议初配置 / 看门狗监控机制**：WDG 配置与监控实现
- **看门狗复位测试**：复位功能验证

### 模块 7：OS
- **OS 概述**：AUTOSAR OS 任务/调度/中断机制
- **OS 配置实战**：OS 配置实操

### 模块 8：网络管理
- **网络管理概述**：AUTOSAR NM（网络管理）机制

### 模块 10：UDS 诊断
- **UDS 和网络层概述**：UDS 诊断服务与分层
- **网络层与 CANTP 传输层**：ISO-TP 分段传输
- **诊断服务介绍**：SID 服务（读取/写入/会话等）与 DID

### 模块 12：BMS 项目（BSW）
- **BMS 项目（BSW）**：综合 BSW 实践项目

### 其他
- **版本管理**：Git 等版本管理实践
