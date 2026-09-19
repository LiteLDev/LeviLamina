# 构建指南

本指南涵盖从源代码构建 LeviLamina，包括环境设置、构建命令、依赖项和版本管理。

## 前置要求

### 必需工具

- **XMake 3.0.0+** — 构建系统 ([xmake.io](https://xmake.io))
- **LLVM/Clang** — Windows 构建使用 `clang-cl` 工具链
- **MSVC 2022+** — 提供 `clang-cl` 所依赖的 Windows SDK 与标准库
- **Git** — 用于版本控制和版本号生成
- **Windows 10/11 x64** — 目前仅支持 Windows 构建

具体的工具和依赖版本以 `xmake.lua` 为准；`.github/workflows/build.yml` 中的工作流展示了当前实际
验证过的组合。

### 安装 XMake

```powershell
# 使用 PowerShell
Invoke-Expression (Invoke-Webrequest 'https://xmake.io/psget.text' -UseBasicParsing).Content

# 或使用 Scoop
scoop install xmake
```

### 安装 MSVC

安装 Visual Studio 2022 并选择"使用 C++ 的桌面开发"工作负载，或安装 Visual Studio 2022 生成工具。

### 安装 LLVM

从 [releases.llvm.org](https://releases.llvm.org) 下载安装，或使用 `scoop install llvm`，并确保
`clang-cl` 已加入 `PATH`。

## 构建命令

### 基本构建

```powershell
# 克隆仓库
git clone https://github.com/LiteLDev/LeviLamina.git
cd LeviLamina

# 构建服务端（默认）
xmake

# 或显式指定服务端
xmake f --target_type=server
xmake
```

### 构建客户端

```powershell
xmake f --target_type=client
xmake
```

### 构建并启用测试

```powershell
xmake f --tests=y
xmake
```

### 发布构建

```powershell
xmake f --publish=y
xmake
```

### 清理构建

```powershell
xmake c
xmake
```

## 构建选项

| 选项            | 值                 | 默认值   | 说明                             |
| --------------- | ------------------ | -------- | -------------------------------- |
| `--target_type` | `server`, `client` | `server` | 构建目标类型                     |
| `--tests`       | `y`, `n`           | `n`      | 启用基于 GTest 的测试            |
| `--publish`     | `y`, `n`           | `n`      | 标记为发布版本（影响版本字符串） |
| `--levimc_repo` | URL                | -        | 自定义 xmake-repo URL            |

### 示例

```powershell
# 服务端构建并启用测试
xmake f --target_type=server --tests=y
xmake

# 客户端发布构建
xmake f --target_type=client --publish=y
xmake

# 自定义仓库
xmake f --levimc_repo=https://custom.repo.url
xmake
```

## 依赖项

LeviLamina 依赖 25+ 个外部库，全部通过 `xmake.lua` 中的 `add_requires` 声明，由 XMake 自动下载。
**版本以 `xmake.lua` 为唯一来源**，因此本页只说明各依赖的用途。执行 `xmake require --list` 可查看
当前配置下实际解析到的版本。

### 核心库

| 库              | 用途           |
| --------------- | -------------- |
| `entt`          | 实体组件系统   |
| `fmt`           | 字符串格式化   |
| `nlohmann_json` | JSON 解析      |
| `rapidjson`     | 快速 JSON 解析 |
| `leveldb`       | 键值数据库     |
| `gsl`           | 指南支持库     |

### 性能

| 库                 | 用途             |
| ------------------ | ---------------- |
| `mimalloc`         | 高性能内存分配器 |
| `parallel-hashmap` | 快速哈希表       |
| `concurrentqueue`  | 无锁队列         |

### 工具

| 库              | 用途                 |
| --------------- | -------------------- |
| `ctre`          | 编译期正则表达式     |
| `magic_enum`    | 枚举反射             |
| `type_safe`     | 类型安全工具         |
| `expected-lite` | Expected/Result 类型 |
| `glm`           | 数学库               |
| `cpr`           | HTTP 客户端          |
| `stb`           | 图像与字体解码       |

### LeviLamina 专用

这些依赖来自 `levimc-repo` xmake 仓库，可通过 `--levimc_repo` 覆盖。

| 库                | 用途           |
| ----------------- | -------------- |
| `pcg_cpp`         | 随机数生成     |
| `pfr`             | 反射           |
| `demangler`       | C++ 名称反修饰 |
| `levibuildscript` | 构建脚本       |
| `preloader`       | DLL 预加载     |
| `symbolprovider`  | 符号解析       |
| `trampoline`      | 函数钩子       |

### 平台特定

| 库            | 平台    | 用途                               |
| ------------- | ------- | ---------------------------------- |
| `libhat`      | Windows | 内存操作                           |
| `bedrockdata` | Windows | MC 二进制与数据，按 `--target_type` |
| `gtest`       | -       | 测试框架，仅在 `--tests=y` 时需要   |

`bedrockdata` 与 LeviLamina 当前适配的 Minecraft 版本锁定，其 `-server` / `-client` 变体由
`--target_type` 选择。升级它属于适配新 Minecraft 版本的工作，而非常规依赖更新。

## 版本号生成

LeviLamina 的版本号从 Git 标签自动生成：

### 版本格式

```
v{major}.{minor}.{patch}{-prerelease}+{commit_hash}
```

### 示例

- **正式版**: `v26.51.1`
- **预发布版**: `v26.51.1-rc.2`
- **开发版**: `v26.51.1-rc.2+ce09050f05`（`--publish=n` 时包含提交哈希）

主版本号与次版本号跟随所适配的 Minecraft 版本，当前版本参见 `tooth.json` 与 `CHANGELOG.md`。

### 版本来源优先级

1. **Git 标签** — 如果当前提交有匹配 `v*.*.*` 的标签
2. **tooth.json** — 回退到 `tooth.json` 中的 `version` 字段

### 版本注入

版本在构建期间注入到 `src/ll/core/Version.h.in`：

```cpp
// 生成的 Version.h
#define LL_VERSION_MAJOR 26
#define LL_VERSION_MINOR 1
#define LL_VERSION_PATCH 0
#define LL_VERSION_PRERELEASE "rc.2"
#define LL_VERSION_BUILD "ce09050f05"
```

## 编译器设置

### C++ 标准

- **C++20** 必需
- **C++23** 特性通过 `_HAS_CXX23=1` 启用

### 编译器标志

Windows 构建使用 `clang-cl`，采用兼容 MSVC 的标志。完整列表以 `xmake.lua` 中
`target("LeviLamina")` 块为准。

- **运行时**: `/MD`（动态，非调试）
- **异常**: `/EHa` 与 `/EHs`，并在 xmake 层面关闭异常
- **警告**: `/W4` 及特定升级：
  - `/w44265` — 虚函数无 override
  - `/w44289` — 循环变量在循环外使用
  - `/w44296` — 表达式始终为真/假
  - `/w45263` — 对临时对象调用 std::move
  - `/w44738` — 在内存中存储浮点数

## 构建输出

### 目录结构

```
LeviLamina/
├── build/
│   └── windows/
│       └── x64/
│           └── release/
│               └── LeviLamina.dll
└── bin/
    └── LeviLamina/
        ├── LeviLamina.dll
        └── manifest.json
```

### 产物

- **LeviLamina.dll** — 主加载器 DLL
- **manifest.json** — 包含版本信息的模组元数据

## CI/CD

LeviLamina 使用 GitHub Actions 进行持续集成：

### 自动化构建

- **触发器**: 任意分支的推送，以及改动源码或 `xmake.lua` 的拉取请求
- **平台**: Windows x64
- **构建矩阵**: 服务端与客户端，各含 debug 与 release，测试开关各一份

### 发布流程

1. 为提交打标签: `git tag v26.1.0`
2. 推送标签: `git push origin v26.1.0`
3. CI 使用 `--publish=y` 构建
4. 产物上传到 GitHub Releases

## 故障排除

### XMake 缓存问题

```powershell
xmake c -a  # 清理所有
xmake f -c  # 重新配置
```

### 依赖下载失败

```powershell
# 使用镜像
xmake g --proxy_pac=github_mirror.lua
```

### 找不到工具链

确保已安装 Visual Studio 2022 或生成工具以提供 Windows SDK，已安装 LLVM 使 `clang-cl` 可在
`PATH` 中解析，并从"VS 2022 开发人员命令提示符"运行。

## 相关文档

- [项目架构](architecture.md) — 项目结构和设计
- [测试指南](how_to_guides/testing_guide.md) — 运行和编写测试
