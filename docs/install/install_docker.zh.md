#  在Docker上安装

以下命令会启动一个运行默认版本并公开默认UDP端口的 LeviLamina 服务器：

```sh
shCopy code
docker run -d -it -e EULA=TRUE -p 19132:19132/udp -v levilamina-server-data:/data ghcr.io/liteldev/levilamina-server
```

如果您计划在生产环境中使用服务器，建议使用Docker Compose 管理容器。您可以使用以下的 `compose.yaml` 文件作为模板：

```yaml
ymlCopy codeservices:
  mc-server:
    image: ghcr.io/liteldev/levilamina-server
    environment:
      EULA: TRUE
      VERSION: 0.1.0
      PACKAGES: |
        github.com/LiteLDev/LeviAntiCheat@0.1.1
    ports:
      - 19132:19132/udp
    volumes:
      - levilamina-server-data:/data
    stdin_open: true
    tty: true

volumes:
  levilamina-server-data:
```

## 环境变量

- `EULA`(`FALSE`): 必须设置为 `TRUE` 以接受[Minecraft最终用户许可协议](https://minecraft.net/terms)。
- `VERSION`(`LATEST`): 可以设置为特定的[LeviLamina](https://github.com/LiteLDev/LeviLamina/tags)版本或 `LATEST` 以自动下载最新版本。
- `PACKAGES`(``): 可以设置为在第一次运行时安装的软件包列表。每个软件包必须是有效的[lip规范](https://docs.lippkg.com/commands/lip_install.html)。支持本地和远程 lip teeth。对于本地软件包，您可能需要将软件包挂载到容器中。
