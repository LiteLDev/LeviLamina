# 在Docker上安装

## 安装

要在 Linux 容器中启动服务器，请运行第一条命令；如果您的服务器在中国大陆，请运行第二条命令以更快快速地安装：

```sh
docker run -d -it -e EULA=TRUE -p 19132:19132/udp -v levilamina-server-data:/data ghcr.io/liteldev/levilamina-server:latest-wine
```
```sh
docker run -d -it -e EULA=TRUE -e GITHUB_MIRROR_URL=https://github.bibk.top -e GO_MODULE_PROXY_URL=https://goproxy.cn -p 19132:19132/udp -v levilamina-server-data:/data ghcr.nju.edu.cn/liteldev/levilamina-server:latest-wine
```

或者，如果您想使用 Windows 容器，请运行第一条命令；如果您的服务器在中国大陆，请运行第二条命令以更快快速地安装：

```sh
docker run -d -it -e EULA=TRUE -p 19132:19132/udp -v levilamina-server-data:C:\data ghcr.io/liteldev/levilamina-server:latest-windows
```
```sh
docker run -d -it -e EULA=TRUE -e GITHUB_MIRROR_URL=https://github.bibk.top -e GO_MODULE_PROXY_URL=https://goproxy.cn -p 19132:19132/udp -v levilamina-server-data:C:\data ghcr.nju.edu.cn/liteldev/levilamina-server:latest-windows
```

我们还提供了适用于 Linux 和 Windows 容器的 Docker Compose 文件，分别位于 [wine/compose.yaml](wine/compose.yaml) 和 [windows/compose.yaml](windows/compose.yaml)。
要使用它们，请将文件下载到一个空目录并运行 `docker compose up -d`。

### 环境变量

- `EULA`: 必须设置为 `TRUE` 以接受 [Minecraft 最终用户许可协议](https://minecraft.net/terms)。

- `GITHUB_MIRROR_URL`: 可以设置为 GitHub 镜像 URL，以加快 LeviLamina 的安装速度。这在您处于防火墙后面或在网络连接较慢的国家时非常有用。

- `GO_MODULE_PROXY_URL`: 可以设置为 Go 模块代理 URL，以加快 LeviLamina 的安装速度。这在您处于防火墙后面或在网络连接较慢的国家时非常有用。

- `PACKAGES`: 可以设置为首次运行时要安装的软件包列表。每个软件包必须是有效的 [lip 规范](https://docs.lippkg.com/commands/lip_install.html)。支持本地和远程 lip 包。对于本地软件包，您可能需要将软件包挂载到容器中。

- `VERSION` (`LATEST`): 可以设置为特定的 [LeviLamina](https://github.com/LiteLDev/LeviLamina/tags) 版本或 `LATEST` 以自动下载最新版本。
