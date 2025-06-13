# Install on Windows

## Prerequisites

To install LeviLamina, you need one of the following Windows versions:

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022

To run Bedrock Dedicated Server for Minecraft, you need to install the following software:

- [Visual C++ Redistributable for Visual Studio 2015, 2017, 2019, and 2022](https://aka.ms/vs/17/release/vc_redist.x64.exe)

## Installation Methods

You can install LeviLamina in different ways, depending on your needs:

- You can [install via lip](#installing-via-lip), for ease of installation and upgrade tasks. This is
  the recommended
  approach.
- You can download the modules and [install them manually](#installing-manually) and manage upgrades completely
  manually. This is useful in
  situations such as installing LeviLamina on air-gapped systems with no access to the internet.

### Installing via lip

1. Install lip by referring to the [lip documentation](https://lip.levimc.org/en/user-guide/installation/).
2. Run the following command to install LeviLamina:

```shell
lip install github.com/LiteLDev/LeviLamina
```

Or specify a version number:

```shell
lip install github.com/LiteLDev/LeviLamina@x.y.z
```

You can find LeviLamina's version numbers in the [releases](https://github.com/LiteLDev/LeviLamina/releases).

If you want to upgrade LeviLamina, run the following command:

```shell
lip install -U github.com/LiteLDev/LeviLamina
```

### Installing manually

#### Download required files

1. Download the [LeviLamina](https://github.com/LiteLDev/LeviLamina/releases)
2. Download the required [Preloader](https://github.com/LiteLDev/PreLoader/releases) according to the [tooth.json] of
   specific version of LeviLamina
3. Download the latest [PeEditor](https://github.com/LiteLDev/PeEditor/releases)
4. Download the required [bedrock-runtime-data](https://github.com/LiteLDev/bedrock-runtime-data/releases) according
   to the [tooth.json]
5. Download the latest [CrashLogger](https://github.com/LiteLDev/CrashLogger/releases)
6. Download the Bedrock Dedicated Server from
   the [Minecraft Wiki](https://minecraft.wiki/w/Bedrock_Dedicated_Server#Download) according
   to [Supported Versions](../versions.md)
7. (Optional) Download the [levilamina-loc](https://github.com/LiteLDev/levilamina-loc/releases) according to
   the [tooth.json]

[tooth.json]: https://github.com/LiteLDev/LeviLamina/blob/main/tooth.json

#### Install LeviLamina

1. Create a directory for your Minecraft server and switch to that directory:
2. Decompress the downloaded files according to the following structure(Some files or folders not listed here):
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
3. Run the following command to generate bedrock_server_mod.exe:
    ```pwsh
    .\PeEditor.exe -mb
    ```
