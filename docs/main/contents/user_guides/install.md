# Install the server

LeviLamina runs inside Bedrock Dedicated Server (BDS) for Windows. Install it directly on Windows with lip, or run it
in a Docker container: a Linux container (BDS under Wine) or a Windows container.

## Install on Windows with lip <Badge platform="windows" />

### Prerequisites

To install LeviLamina, you need one of the following Windows versions:

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022
- Windows Server 2025

To run Bedrock Dedicated Server (BDS), you need to install the following software:

- [Microsoft Visual C++ Redistributable (x64)](https://aka.ms/vc14/vc_redist.x64.exe)

### Installation

1. Install [lip](https://github.com/LiteLDev/lip). The default way is npm; winget and the **setup.exe** installer
   from [lip's releases](https://github.com/LiteLDev/lip/releases/latest) also work (see
   [lip's installation guide](https://docs.levimc.org/lip/intro/installation)):
    ```shell
    npm install -g @levimc/lip
    # or
    winget install levimc.lip
    ```
2. (Optional) Set a GitHub mirror with `lip config set`, for example:
    ```shell
    lip config set github_proxy https://mirror.ghproxy.com/
    ```
3. (Optional) Set the `BDSDOWN_MIRROR_URL` environment variable to choose the site BDS is downloaded from, for example
   `https://www.minecraft.net`. You can also download BDS yourself from the Minecraft website and put the archive in the
   `.cache/bdsdown` directory (create it if it does not exist). This directory is inside the directory you install BDS
   into, for example `C:\Users\YourName\BDS\.cache\bdsdown`.
4. Begin by creating a directory for your Minecraft server and navigating into it:
    ```shell
    mkdir myserver
    cd myserver
    ```
5. Then, install LeviLamina (bundled with Bedrock Dedicated Server) using lip:
    ```shell
    # Install the latest version
    lip install github.com/LiteLDev/LeviLamina
    
    # Install a specific version (replace x.y.z with the desired version)
    lip install github.com/LiteLDev/LeviLamina@x.y.z
    ```
   During installation, PeEditor creates `bedrock_server_mod.exe`, a copy of `bedrock_server.exe` that loads
   LeviLamina, and keeps the original executable as `bedrock_server.exe.bak`.
6. Launch your server by running:
    ```shell
    ./bedrock_server_mod.exe
    ```

Find the available version numbers in the [releases](https://github.com/LiteLDev/LeviLamina/releases).

### Upgrading

If you want to upgrade LeviLamina, run the following command:

```shell
# Update to the latest version
lip update github.com/LiteLDev/LeviLamina

# Update to a specific version (replace x.y.z with the desired version)
lip update github.com/LiteLDev/LeviLamina@x.y.z
```

!!! warning
    To ensure data security, please do not update LeviLamina in the same directory when upgrading between Minecraft versions. We recommend installing the new version in a separate folder, then copying the `worlds` directory and updating the configuration as needed.

## Install with Docker

Choose the container type. If your server is in mainland China, use the second command to install faster.

=== "Linux"

    A Linux container runs BDS under Wine:

    ```sh
    docker run -d -it -e EULA=TRUE -p 19132:19132/udp -p 19132:19132/tcp -v levilamina-server-data:/data ghcr.io/liteldev/levilamina-server:latest-wine
    ```

    ```sh
    docker run -d -it -e EULA=TRUE -e GITHUB_MIRROR_URL=https://mirror.ghproxy.com/ -p 19132:19132/udp -p 19132:19132/tcp -v levilamina-server-data:/data ghcr.nju.edu.cn/liteldev/levilamina-server:latest-wine
    ```

    Docker Compose: download [wine/compose.yaml](https://github.com/LiteLDev/docker-levilamina-server/blob/main/wine/compose.yaml)
    to an empty directory and run `docker compose up -d`.

=== "Windows"

    A Windows container:

    ```sh
    docker run -d -it -e EULA=TRUE -p 19132:19132/udp -p 19132:19132/tcp -v levilamina-server-data:C:\data ghcr.io/liteldev/levilamina-server:latest-windows
    ```

    ```sh
    docker run -d -it -e EULA=TRUE -e GITHUB_MIRROR_URL=https://mirror.ghproxy.com/ -p 19132:19132/udp -p 19132:19132/tcp -v levilamina-server-data:C:\data ghcr.nju.edu.cn/liteldev/levilamina-server:latest-windows
    ```

    Docker Compose: download [windows/compose.yaml](https://github.com/LiteLDev/docker-levilamina-server/blob/main/windows/compose.yaml)
    to an empty directory and run `docker compose up -d`.

### Environment variables

- `EULA`: must be set to `TRUE` to accept the [Minecraft End User License Agreement](https://www.minecraft.net/en-us/eula).

- `GITHUB_MIRROR_URL`: can be set to a GitHub mirror URL (for example `https://mirror.ghproxy.com/`) to speed up the installation of
  LeviLamina. This is useful when you are behind a firewall or in a country with slow internet connection.

- `PACKAGES`: can be set to a space-separated list of packages to install on first run. Each package must be a
  valid [lip specification](https://docs.levimc.org/lip/cli/commands/install.html). Both local and remote lip packages are
  supported. For local packages, you may need to mount the packages to the container.

- `VERSION` (`LATEST`): can be set to a specific [LeviLamina](https://github.com/LiteLDev/LeviLamina/tags) version or
  `LATEST` to automatically download the latest version.

- `WINEDEBUG` (`-all`) <Badge platform="linux" />: can be set to customize the Wine debug output.
  See [Wine Debugging](https://gitlab.winehq.org/wine/wine/-/wikis/Debug-Channels) for more information. Only available in the Wine image.

- `LANG`: can be set to customize the locale used in the container. Default is `en_US.UTF-8`.

- `LC_ALL`: can be set to customize the locale used in the container. Default is `en_US.UTF-8`.

- `TZ`: can be set to customize the timezone used in the container. Default is `UTC`.

## Finding Mods

Before adding mods, explore your options. The best source is [LeviMC Mods](https://levimc.org/mods/), although you can discover
many elsewhere around the web.

## Installing Mods

Most mods, especially those listed on LeviMC Mods, can be installed by running the provided command in the server
directory. For example, to install [LeviAntiCheat](https://levimc.org/mods/github.com/LiteLDev/LeviAntiCheat/):

```shell
lip install github.com/LiteLDev/LeviAntiCheat
```

In a Docker container, list the packages in the `PACKAGES` environment variable instead.

Follow additional instructions provided by individual mod developers when needed.
