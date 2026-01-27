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

- 你可以[通过 lip 安装](#通过-lip)，以便于安装和升级任务。这是推荐的方法。
- 你可以下载模块并[手动安装](#手动安装)并完全手动管理升级。这在一些情况下很有用，比如在没有网络访问的隔离系统上安装
  LeviLamina。

### 通过 lip

1. 安装lip，可以参考[lip文档](https://lip.levimc.org/zh/user-guide/installation/)
2. (可选)可以通过`lip config set`命令来设置GitHub镜像，例如:
    ```shell
    lip config set github_proxies=https://github.bibk.top
    ```
3. (可选)可以通过定义`BDSDOWN_MIRROR_URL`环境变量来自定义BDS下载镜像站，例如: `https://mcdl.bibk.top`
   。你也可以手动在Minecraft官网下载BDS，然后把压缩文件丢到`.cache/bdsdown`目录下，如果该目录不存在请手动创建。
   该目录基于您安装BDS的路径，例如`C:\Users\YourName\BDS\.cache\bdsdown`。
4. 为你的 Minecraft 服务器创建一个目录并切换到该目录:
    ```shell
    mkdir myserver
    cd myserver
    ```
5. 使用 lip 安装 LeviLamina:
    ```shell
    # 安装最新版本
    lip install github.com/LiteLDev/LeviLamina
    
    # 安装指定版本 (把 x.y.z 替换成想要的版本)
    lip install github.com/LiteLDev/LeviLamina@x.y.z
    ```
6. 执行以下命令启动服务器:
    ```shell
    ./bedrock_server_mod.exe
    ```

可在 [releases](https://github.com/LiteLDev/LeviLamina/releases) 查看可用版本号。

如果你想要升级LeviLamina，可以运行以下命令:

```shell
# 升级到最新版本
lip update github.com/LiteLDev/LeviLamina

# 升级到指定版本 (把 x.y.z 替换成想要的版本)
lip update github.com/LiteLDev/LeviLamina@x.y.z
```

!!! warning
    为确保数据安全，请勿在同一目录内更新 LeviLamina。建议在独立文件夹内安装新版本，然后复制 `worlds` 目录并按需更新配置。

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

## 搜寻模组

在添加 Mods 之前，请先了解各种选项。最佳资源来源为 [Bedrinth](https://bedrinth.com)，当然你也可以在其他网站上找到更多资源。

## 安装模组

大多数 Mods（尤其是 Bedrinth 上列出的）都可通过运行提供的命令进行安装。例如，要安装 [LeviAntiCheat](https://github.com/LiteLDev/LeviAntiCheat):

```shell
lip install github.com/LiteLDev/LeviAntiCheat
```

如有需要，请遵循各个 Mod 开发者提供的进一步说明。
