# Install on Docker

The following starts a LeviLamina server running a default version and exposing the default UDP port:

```sh
docker run -d -it -e EULA=TRUE -p 19132:19132/udp -v levilamina-server-data:/data ghcr.io/liteldev/levilamina-server
```

If you plan to use the server in production, it is recommended to use Docker Compose to manage the container. You can use the following `compose.yaml` file as a template:

```yml
services:
  mc-server:
    image: ghcr.io/liteldev/levilamina-server
    environment:
      EULA: TRUE
      VERSION: 0.1.0
      PACKAGES: |
        github.com/tooth-hub/levianticheat@0.1.1
    ports:
      - 19132:19132/udp
    volumes:
      - levilamina-server-data:/data
    stdin_open: true
    tty: true

volumes:
  levilamina-server-data:
```

## Environment variables

- `EULA`(`FALSE`): must be set to `TRUE` to accept the [Minecraft End User License Agreement](https://minecraft.net/terms).
- `VERSION`(`LATEST`): can be set to a specific [LeviLamina](https://github.com/tooth-hub/levilamina/tags) version or `LATEST` to automatically download the latest version.
- `PACKAGES`(``): can be set to a list of packages to install on first run. Each package must be a valid [lip specifier](https://docs.lippkg.com/commands/lip_install.html). Both local and remote lip teeth are supported. For local packages, you may need to mount the packages to the container.
