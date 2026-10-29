# 安装服务器

LeviLamina 运行在 Windows 版基岩版专用服务器（BDS）中。你可以用 lip 直接在 Windows 上安装，也可以在 Docker
容器中运行：Linux 容器（通过 Wine 运行 BDS）或 Windows 容器。

## 在 Windows 上通过 lip 安装 <Badge platform="windows" />

### 前提条件

要安装 LeviLamina，你需要以下 Windows 版本之一：

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022
- Windows Server 2025

要运行基岩版专用服务器（BDS），你需要安装以下软件：

- [Microsoft Visual C++ 可再发行程序包（x64）](https://aka.ms/vc14/vc_redist.x64.exe)

### 安装

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

### 升级

如果你想要升级LeviLamina，可以运行以下命令:

```shell
# 升级到最新版本
lip update github.com/LiteLDev/LeviLamina

# 升级到指定版本 (把 x.y.z 替换成想要的版本)
lip update github.com/LiteLDev/LeviLamina@x.y.z
```

!!! warning
    为确保数据安全，跨Minecraft版本升级时，请勿在同一目录内更新 LeviLamina。建议在独立文件夹内安装新版本，然后复制 `worlds` 目录并按需更新配置。

## 通过 Docker 安装

选择容器类型。如果你的服务器在中国大陆，请使用第二条命令以更快地安装。

=== "Linux"

    Linux 容器通过 Wine 运行 BDS：

    ```sh
    docker run -d -it -e EULA=TRUE -p 19132:19132/udp -p 19132:19132/tcp -v levilamina-server-data:/data ghcr.io/liteldev/levilamina-server:latest-wine
    ```

    ```sh
    docker run -d -it -e EULA=TRUE -e GITHUB_MIRROR_URL=https://mirror.ghproxy.com/ -p 19132:19132/udp -p 19132:19132/tcp -v levilamina-server-data:/data ghcr.nju.edu.cn/liteldev/levilamina-server:latest-wine
    ```

    Docker Compose：把 [wine/compose.yaml](https://github.com/LiteLDev/docker-levilamina-server/blob/main/wine/compose.yaml)
    下载到一个空目录并运行 `docker compose up -d`。

=== "Windows"

    Windows 容器：

    ```sh
    docker run -d -it -e EULA=TRUE -p 19132:19132/udp -p 19132:19132/tcp -v levilamina-server-data:C:\data ghcr.io/liteldev/levilamina-server:latest-windows
    ```

    ```sh
    docker run -d -it -e EULA=TRUE -e GITHUB_MIRROR_URL=https://mirror.ghproxy.com/ -p 19132:19132/udp -p 19132:19132/tcp -v levilamina-server-data:C:\data ghcr.nju.edu.cn/liteldev/levilamina-server:latest-windows
    ```

    Docker Compose：把 [windows/compose.yaml](https://github.com/LiteLDev/docker-levilamina-server/blob/main/windows/compose.yaml)
    下载到一个空目录并运行 `docker compose up -d`。

### 环境变量

- `EULA`: 必须设置为`TRUE`以接受[Minecraft最终用户许可协议](https://www.minecraft.net/zh-hans/eula)。

- `GITHUB_MIRROR_URL`：可设置为GitHub镜像URL（例如`https://mirror.ghproxy.com/`），以加速LeviLamina的安装。当您处于防火墙后或在网络较慢的地区时很有用。

- `PACKAGES`：可设置为以空格分隔的包列表，用于首次运行时安装。每个包必须符合
  [lip包名规范](https://docs.levimc.org/lip/zh/cli/commands/install.html)。支持本地和远程的lip包。对于本地包，可能需要将包挂载到容器中。

- `VERSION`(`LATEST`)：可设置为特定的[LeviLamina](https://github.com/LiteLDev/LeviLamina/tags)版本，或设置为
  `LATEST`以自动下载最新版本。

- `WINEDEBUG`(`-all`) <Badge platform="linux" />：可设置以自定义Wine的调试输出。欲了解更多信息，请参见[Wine Debugging](https://gitlab.winehq.org/wine/wine/-/wikis/Debug-Channels)。仅在Wine镜像中可用。

- `LANG`：可设置容器中使用的语言环境。默认值为`en_US.UTF-8`。

- `LC_ALL`：可设置容器中使用的语言环境。默认值为`en_US.UTF-8`。

- `TZ`：可设置容器使用的时区。默认值为`UTC`。

## 搜寻模组

在添加模组之前，请先了解各种选项。最佳资源来源为 [LeviMC 模组](https://levimc.org/mods/)，当然你也可以在其他网站上找到更多资源。

## 安装模组

大多数模组（尤其是 LeviMC 模组 上列出的）都可在服务器目录中运行提供的命令进行安装。例如，要安装 [LeviAntiCheat](https://levimc.org/mods/github.com/LiteLDev/LeviAntiCheat/):

```shell
lip install github.com/LiteLDev/LeviAntiCheat
```

在 Docker 容器中，请改为在 `PACKAGES` 环境变量中列出这些包。

如有需要，请遵循各个模组开发者提供的进一步说明。
