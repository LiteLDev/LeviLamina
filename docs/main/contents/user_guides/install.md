# Install server on Windows

## Prerequisites

To install LeviLamina, you need one of the following Windows versions:

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022
- Windows Server 2025

To run Bedrock Dedicated Server for Minecraft, you need to install the following software:

- [Visual C++ Redistributable](https://aka.ms/vc14/vc_redist.x64.exe)

## Installing via lip

1. Download the installer ends with **setup.exe** from [here](https://github.com/futrime/lip/releases), execute it to install lip.
2. Begin by creating a directory for your Minecraft server and navigating into it:
    ```shell
    mkdir myserver
    cd myserver
    ```
3. Then, install LeviLamina (bundled with Bedrock Dedicated Server) using lip:
    ```shell
    # Install the latest version
    lip install github.com/LiteLDev/LeviLamina
    
    # Install a specific version (replace x.y.z with the desired version)
    lip install github.com/LiteLDev/LeviLamina@x.y.z
    ```
4. Launch your server by running:
    ```shell
    ./bedrock_server_mod.exe
    ```

Find the available version numbers in the [releases](https://github.com/LiteLDev/LeviLamina/releases).

If you want to upgrade LeviLamina, run the following command:

```shell
# Update to the latest version
lip update github.com/LiteLDev/LeviLamina

# Update to a specific version (replace x.y.z with the desired version)
lip update github.com/LiteLDev/LeviLamina@x.y.z
```
!!! warning
    To ensure data security, please do not update LeviLamina in the same directory when upgrading between Minecraft versions. We recommend installing the new version in a separate folder, then copying the `worlds` directory and updating the configuration as needed.

## Finding Mods

Before adding mods, explore your options. The best source is [Bedrinth](https://pkg.levimc.org), although you can discover
many elsewhere around the web.

## Installing Mods

Most mods, especially those listed on Bedrinth, can be installed by pasting the provided command. For example, to
install [LeviAntiCheat](https://github.com/LiteLDev/LeviAntiCheat):

```shell
lip install github.com/LiteLDev/LeviAntiCheat
```

Follow additional instructions provided by individual mod developers when needed.
