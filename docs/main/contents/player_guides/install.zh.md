# 在Windows上安装

## 前提条件

要安装 LeviLamina，你需要以下 Windows 版本之一：

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022

要运行 Minecraft 的 Bedrock Dedicated Server，你需要安装以下软件：

- [Visual C++ Redistributable for Visual Studio 2015, 2017, 2019, and 2022](https://aka.ms/vs/17/release/vc_redist.x64.exe)

## 安装方法

你可以通过不同的方式安装 LeviLamina，取决于你的需求：

- 你可以[通过 lip 安装](#lip)，以便于安装和升级任务。这是推荐的方法。
- 你可以下载模块并[手动安装](#_3)并完全手动管理升级。这在一些情况下很有用，比如在没有网络访问的隔离系统上安装
  LeviLamina。

### 通过 lip

1. 安装lip，可以参考[lip文档](https://lip.levimc.org/zh/user-guide/installation/)
2. 运行以下命令来安装LeviLamina:

```shell
lip install github.com/LiteLDev/LeviLamina
```

或者指定版本号:

```shell
lip install github.com/LiteLDev/LeviLamina@x.y.z
```

LeviLamina的版本号可以在[releases](https://github.com/LiteLDev/LeviLamina/releases)查看

如果你想要升级LeviLamina，可以运行以下命令:

```shell
lip install -U github.com/LiteLDev/LeviLamina
```

### 手动安装

#### 下载所需文件

1. 下载 [LeviLamina](https://github.com/LiteLDev/LeviLamina/releases)
2. 根据特定版本的 LeviLamina 的 [tooth.json] 文件，下载所需的 [Preloader](https://github.com/LiteLDev/PreLoader/releases)
3. 下载最新版的 [PeEditor](https://github.com/LiteLDev/PeEditor/releases)
4. 根据 [tooth.json] 下载所需的 [bedrock-runtime-data](https://github.com/LiteLDev/bedrock-runtime-data/releases)
5. 下载最新版的 [CrashLogger](https://github.com/LiteLDev/CrashLogger/releases)
6. 根据 [支持的版本](../versions.md)，从 [Minecraft Wiki](https://minecraft.wiki/w/Bedrock_Dedicated_Server#Download)
   下载基岩版服务器
7. （可选）根据 [tooth.json] 下载 [levilamina-loc](https://github.com/LiteLDev/levilamina-loc/releases)

[tooth.json]: https://github.com/LiteLDev/LeviLamina/blob/main/tooth.json

#### 安装 LeviLamina

1. 创建一个用于 Minecraft 服务器的目录，并切换到该目录：
2. 按照以下结构解压已下载的文件（部分文件或文件夹未在此列出）：

   ```
   bedrock_runtime_data
   bedrock_server.exe
   PeEditor.exe
   PreLoader.dll
   plugins/
       LeviLamina/
           CrashLogger.exe
           LeviLamina.dll
           LeviLamina.pdb
           manifest.json
           lang/
               en_US.json
               zh_CN.json
   ```
3. 运行以下命令以生成 `bedrock_server_mod.exe`：

   ```pwsh
   .\PeEditor.exe -mb
   ```
