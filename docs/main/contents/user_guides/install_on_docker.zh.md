# 在Docker上安装

## 安装

要在 Linux 容器中启动服务器，请运行第一条命令；如果您的服务器在中国大陆，请运行第二条命令以更快快速地安装：

```sh
docker run -d -it -e EULA=TRUE -p 19132:19132/udp -v levilamina-server-data:/data ghcr.io/liteldev/levilamina-server:latest-wine
```

```sh
docker run -d -it -e EULA=TRUE -e GITHUB_MIRROR_URL=https://github.bibk.top -p 19132:19132/udp -v levilamina-server-data:/data ghcr.nju.edu.cn/liteldev/levilamina-server:latest-wine
```

或者，如果您想使用 Windows 容器，请运行第一条命令；如果您的服务器在中国大陆，请运行第二条命令以更快快速地安装：

```sh
docker run -d -it -e EULA=TRUE -p 19132:19132/udp -v levilamina-server-data:C:\data ghcr.io/liteldev/levilamina-server:latest-windows
```

```sh
docker run -d -it -e EULA=TRUE -e GITHUB_MIRROR_URL=https://github.bibk.top -p 19132:19132/udp -v levilamina-server-data:C:\data ghcr.nju.edu.cn/liteldev/levilamina-server:latest-windows
```

我们还提供了适用于 Linux 和 Windows 容器的 Docker Compose
文件，分别位于 [wine/compose.yaml](https://github.com/LiteLDev/docker-levilamina-server/blob/main/wine/compose.yaml)
和 [windows/compose.yaml](https://github.com/LiteLDev/docker-levilamina-server/blob/main/windows/compose.yaml)。
要使用它们，请将文件下载到一个空目录并运行 `docker compose up -d`。

### 环境变量

- `EULA`: 必须设置为 `TRUE` 以接受 [Minecraft 最终用户许可协议](https://minecraft.net/terms)。

- `GITHUB_MIRROR_URL`：可设置为以逗号(,)分隔的 GitHub 镜像 URL 列表，以加速 LeviLamina 的安装。当您处于防火墙后或在网络较慢的地区时很有用。

- `GO_MODULE_PROXY_URL`：可设置为以逗号(,)分隔的 Go 模块代理 URL 列表，以加速 LeviLamina 的安装。当您处于防火墙后或在网络较慢的地区时很有用。

- `PACKAGES`：可设置为以空格分隔的包列表，用于首次运行时安装。每个包必须是有效的 `lip`
  指定器（参见 `https://lip.levimc.org/zh/user-guide/commands/lip-install/`）。支持本地和远程的 lip 包。对于本地包，可能需要将包挂载到容器中。

- `VERSION`（`LATEST`）：可设置为特定的 LeviLamina 版本（参见 `https://github.com/LiteLDev/LeviLamina/tags`），或设置为 `
  LATEST` 以自动下载最新版本。

- `WINEDEBUG`（`-all`）：可设置以自定义 Wine 的调试输出。欲了解更多信息，请参见 `https://wiki.winehq.org/Debugging`。

- `LANG`：可设置容器中使用的语言环境。默认值为 `en_US.UTF-8`。

- `LC_ALL`：可设置容器中使用的语言环境。默认值为 `en_US.UTF-8`。

- `TZ`：可设置容器使用的时区。默认值为 `UTC`。
