# 项目架构

本文档概述了 LeviLamina 的项目结构、设计原则和架构决策。

## 项目结构

### 顶层目录

```
LeviLamina/
├── src/              # 通用 + 服务端代码
├── src-client/       # 客户端专用代码
├── src-server/       # 服务端专用代码
├── src-test/         # 测试代码
├── docs/             # 文档
├── scripts/          # 构建和工具脚本
├── builder/          # 头文件生成脚本
└── bin/              # 构建输出
```

### 源代码目录组织

#### `src/` — 通用 + 服务端

包含服务端和客户端共享的代码，以及仅服务端的实现：

```
src/
├── ll/
│   ├── api/          # 公共 API（255 个头文件）
│   │   ├── base/     # 基础类型
│   │   ├── command/  # 命令系统
│   │   ├── event/    # 事件系统
│   │   ├── form/     # UI 表单
│   │   ├── mod/      # 模组管理
│   │   ├── service/  # 服务注册表
│   │   └── ...       # 其他模块
│   └── core/         # 内部实现（34 个文件）
│       ├── mod/      # 模组加载
│       ├── command/  # 内置命令
│       ├── form/     # 表单处理器
│       └── tweak/    # 游戏调整
└── mc/               # Bedrock 头文件（反编译）
    ├── server/
    ├── world/
    ├── network/
    └── ...
```

#### `src-client/` — 仅客户端

客户端特定的扩展和覆盖（28 个文件）：

```
src-client/
├── ll/
│   ├── api/
│   │   ├── KeyRegistry.h      # 输入绑定
│   │   ├── KeyHandle.h
│   │   └── event/
│   │       ├── input/         # 输入事件
│   │       ├── render/        # 渲染事件
│   │       └── client/        # 客户端生命周期
│   └── core/
│       └── (8 个文件)          # 客户端实现
└── mc/
    └── client/                # 客户端专用 BDS 头文件
```

#### `src-server/` — 仅服务端

服务端特定的扩展（5 个文件）：

```
src-server/
├── ll/
│   ├── api/
│   │   ├── event/server/      # 服务端事件
│   │   └── service/           # 服务端服务
│   └── core/
│       └── (10 个文件)         # 服务端实现
└── mc/
    └── server/                # 服务端专用 BDS 头文件
```

## 分层架构

### 第 1 层：`mc/` — Bedrock 引擎头文件

- **来源**: 从 Minecraft 基岩版专用服务器逆向工程
- **目的**: 提供游戏内部的 C++ 接口
- **维护**: 由 `header_generator` 工具从 BedrockAnalyzer 转储生成
- **范围**: 只读，不被 LeviLamina 修改

**关键命名空间:**
- `::Actor`, `::Player`, `::Mob` — 实体系统
- `::Level`, `::Dimension`, `::BlockSource` — 世界管理
- `::ServerInstance`, `::Minecraft` — 服务器生命周期
- `::CommandRegistry`, `::Command` — 命令系统
- `::Packet`, `::NetworkIdentifier` — 网络

### 第 2 层：`ll/core/` — 内部实现

- **目的**: 实现 LeviLamina 的核心功能
- **可见性**: 内部，不暴露给模组
- **依赖**: 使用 `mc/` 头文件和 `ll/api/`

**关键组件:**
- **ModRegistrar** — 模组生命周期管理
- **NativeModManager** — DLL 加载
- **内置命令** — `/version`、`/ll`、`/tpdim`、`/crash`
- **CrashLogger** — 异常处理和 Sentry 集成
- **Tweaks** — 游戏修改（漏洞修复、内存分配器等）

### 第 3 层：`ll/api/` — 公共 API

- **目的**: 为模组开发者提供稳定的 API
- **可见性**: 通过 `LLAPI`/`LLNDAPI` 宏导出
- **版本控制**: 语义化版本，保证兼容性

**设计原则:**
- **类型安全**: 大量使用 C++20 概念和类型萃取
- **错误处理**: `Expected<T>` 用于可恢复错误
- **异步支持**: 协程和执行器
- **反射**: 编译期反射用于序列化
- **事件驱动**: 发布-订阅事件系统

## 模块依赖关系

```
┌─────────────────────────────────────────┐
│         模组代码（用户）                 │
└─────────────────┬───────────────────────┘
                  │ 使用
┌─────────────────▼───────────────────────┐
│        ll/api（公共 API）               │
│  ┌──────────┐  ┌──────────┐  ┌────────┐│
│  │  命令    │  │  事件    │  │  表单  ││
│  └──────────┘  └──────────┘  └────────┘│
│  ┌──────────┐  ┌──────────┐  ┌────────┐│
│  │  模组    │  │  服务    │  │  内存  ││
│  └──────────┘  └──────────┘  └────────┘│
└─────────────────┬───────────────────────┘
                  │ 实现
┌─────────────────▼───────────────────────┐
│        ll/core（实现层）                │
│  ┌──────────────┐  ┌──────────────────┐ │
│  │ ModRegistrar │  │ NativeModManager │ │
│  └──────────────┘  └──────────────────┘ │
│  ┌──────────────┐  ┌──────────────────┐ │
│  │ CrashLogger  │  │   内置命令       │ │
│  └──────────────┘  └──────────────────┘ │
└─────────────────┬───────────────────────┘
                  │ 使用
┌─────────────────▼───────────────────────┐
│      mc/（Bedrock 引擎头文件）          │
│  ┌──────────┐  ┌──────────┐  ┌────────┐│
│  │  Player  │  │  Level   │  │ Packet ││
│  └──────────┘  └──────────┘  └────────┘│
│  ┌──────────┐  ┌──────────┐  ┌────────┐│
│  │ Command  │  │ Server   │  │ Network││
│  └──────────┘  └──────────┘  └────────┘│
└─────────────────────────────────────────┘
```

## 服务端 vs 客户端构建

### 构建配置

由 XMake 中的 `--target_type` 控制：

```lua
-- xmake.lua
option("target_type")
    set_default("server")
    set_values("server", "client")
```

### 编译差异

| 方面 | 服务端构建 | 客户端构建 |
|------|-----------|-----------|
| **源文件** | `src/` + `src-server/` | `src/` + `src-client/` |
| **BDS 头文件** | `bedrockdata:server.8` | `bedrockdata:client.9` |
| **入口点** | `DllMain`（服务端） | `DllMain`（客户端） |
| **API 表面** | 通用 + 服务端 | 通用 + 客户端 |
| **输出** | `LeviLamina.dll`（服务端） | `LeviLamina.dll`（客户端） |

### API 可用性

| 模块 | 服务端 | 客户端 | 备注 |
|------|:------:|:------:|------|
| Base | ✅ | ✅ | 通用 |
| Command | ✅ | ✅ | 通用 |
| Event（玩家/世界） | ✅ | ✅ | 通用 |
| Event（服务器） | ✅ | ❌ | 仅服务端 |
| Event（客户端/输入/渲染） | ❌ | ✅ | 仅客户端 |
| Form | ✅ | ✅ | 通用 |
| Input | ❌ | ✅ | 仅客户端 |
| Service（Bedrock） | ✅ | ✅ | 通用（不同实现） |

### 运行时行为

**服务端:**
- 由 PreLoader 加载到 `bedrock_server_mod.exe`
- 钩子服务器初始化
- 提供服务端事件和服务

**客户端:**
- 由 PreLoader 加载到 `Minecraft.Windows.exe`
- 钩子客户端初始化
- 提供客户端输入、渲染和 UI

## 设计模式

### 单例模式

用于全局注册表：
- `EventBus::getInstance()`
- `CommandRegistrar::getInstance()`
- `ServiceManager::getInstance()`
- `ModManagerRegistry::getInstance()`

### 工厂模式

用于动态对象创建：
- `PacketRegistrar` — 数据包工厂
- `EventBus::setEventEmitter()` — 事件发射器工厂

### 观察者模式

通过事件系统实现：
- `EventBus` — 主题
- `Listener` — 观察者
- `Event` — 通知

### 依赖注入

通过服务系统实现：
- `ServiceManager` — 容器
- `Service` — 可注入组件
- `subscribeService()` — 依赖解析

## 内存管理

### 分配策略

- **mimalloc** — 默认分配器，提升性能
- **智能指针** — `std::shared_ptr`、`std::unique_ptr` 用于所有权
- **optional_ref** — 对 Bedrock 对象的非拥有引用

### 钩子管理

- **MinHook** — 函数钩子库（Windows）
- **HookRegistrar** — 自动钩子注册/清理
- **优先级系统** — 控制钩子执行顺序

## 线程安全

### 线程模型

- **服务器线程** — 主游戏循环（单线程）
- **线程池** — 后台任务
- **网络线程** — 数据包处理

### 同步

- **ServerThreadExecutor** — 在服务器线程上执行
- **ThreadPoolExecutor** — 在后台线程上执行
- **原子操作** — 尽可能无锁
- **互斥锁** — 保护共享状态

## 相关文档

- [构建指南](how_to_guides/build_guide.zh.md) — 从源代码构建
- [API 参考](../api_reference/index.zh.md) — 完整 API 文档
