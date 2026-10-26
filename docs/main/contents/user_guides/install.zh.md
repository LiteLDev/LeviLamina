# 在Windows上安装服务器

## 前提条件

要安装 LeviLamina，你需要以下 Windows 版本之一：

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022
- Windows Server 2025

要运行基岩版专用服务器（BDS），你需要安装以下软件：

- [Microsoft Visual C++ 可再发行程序包（x64）](https://aka.ms/vc14/vc_redist.x64.exe)

## 通过lip安装

1. 安装 [lip](https://github.com/LiteLDev/lip)。默认使用 npm 安装，也可以使用 winget，或从 [lip 的 releases](https://github.com/LiteLDev/lip/releases/latest) 下载以 **setup.exe** 结尾的安装包（参见 [lip 安装指南](https://docs.levimc.org/lip/zh/intro/installation)）：
    ```shell
    npm install -g @levimc/lip
    # 或
    winget install levimc.lip
    ```
2. （可选）可以通过`lip config set`命令来设置GitHub镜像，例如:
    ```shell
    lip config set github_proxy https://mirror.ghproxy.com/
    ```
3. （可选）可以通过定义`BDSDOWN_MIRROR_URL`环境变量来自定义BDS下载镜像站，例如: `https://www.minecraft.net`
   。你也可以手动在Minecraft官网下载BDS，然后把压缩文件丢到`.cache/bdsdown`目录下，如果该目录不存在请手动创建。
   该目录基于您安装BDS的路径，例如`C:\Users\YourName\BDS\.cache\bdsdown`。
4. 为你的 Minecraft 服务器创建一个目录并切换到该目录:
    ```shell
    mkdir myserver
    cd myserver
    ```
5. 使用 lip 安装 LeviLamina（已附带基岩版专用服务器）:
    ```shell
    # 安装最新版本
    lip install github.com/LiteLDev/LeviLamina
    
    # 安装指定版本 (把 x.y.z 替换成想要的版本)
    lip install github.com/LiteLDev/LeviLamina@x.y.z
    ```
   安装过程中，PeEditor 会生成 `bedrock_server_mod.exe`（会加载 LeviLamina 的 `bedrock_server.exe` 副本），并把原来的可执行文件保留为 `bedrock_server.exe.bak`。
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
    为确保数据安全，跨Minecraft版本升级时，请勿在同一目录内更新 LeviLamina。建议在独立文件夹内安装新版本，然后复制 `worlds` 目录并按需更新配置。

## 搜寻模组

在添加模组之前，请先了解各种选项。最佳资源来源为 [LeviMC 模组](https://levimc.org/mods/)，当然你也可以在其他网站上找到更多资源。

## 安装模组

大多数模组（尤其是 LeviMC 模组 上列出的）都可通过运行提供的命令进行安装。例如，要安装 [LeviAntiCheat](https://levimc.org/mods/github.com/LiteLDev/LeviAntiCheat/):

```shell
lip install github.com/LiteLDev/LeviAntiCheat
```

如有需要，请遵循各个模组开发者提供的进一步说明。
