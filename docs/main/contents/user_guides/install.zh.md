# 在Windows上安装服务器

## 前提条件

要安装 LeviLamina，你需要以下 Windows 版本之一：

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022
- Windows Server 2025

要运行 Minecraft 的 Bedrock Dedicated Server，你需要安装以下软件：

- [Visual C++ Redistributable](https://aka.ms/vc14/vc_redist.x64.exe)

## 通过lip安装

1. 前往[此处](https://github.com/futrime/lip/releases)，下载以**setup.exe**结尾的安装包，执行以安装
2. (可选)可以通过`lip config set`命令来设置GitHub和GoProxy镜像，例如:
    ```shell
    lip config set go_module_proxy https://goproxy.cn
    lip config set github_proxy https://github.bibk.top
    ```
3. (可选)可以通过定义`BDSDOWN_MIRROR_URL`环境变量来自定义BDS下载镜像站，例如: `https://www.minecraft.net`
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
    为确保数据安全，跨Minecraft版本升级时，请勿在同一目录内更新 LeviLamina。建议在独立文件夹内安装新版本，然后复制 `worlds` 目录并按需更新配置。

## 搜寻模组

在添加 Mods 之前，请先了解各种选项。最佳资源来源为 [Bedrinth](https://pkg.levimc.org)，当然你也可以在其他网站上找到更多资源。

## 安装模组

大多数 Mods（尤其是 Bedrinth 上列出的）都可通过运行提供的命令进行安装。例如，要安装 [LeviAntiCheat](https://github.com/LiteLDev/LeviAntiCheat):

```shell
lip install github.com/LiteLDev/LeviAntiCheat
```

如有需要，请遵循各个 Mod 开发者提供的进一步说明。
