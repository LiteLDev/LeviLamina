# Install on Windows

## Prerequisites

To install LeviLamina, you need one of the following Windows versions:

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022

To run Bedrock Dedicated Server for Minecraft, you need to install the following software:

- [Visual C++ Redistributable for Visual Studio 2015, 2017, 2019, and 2022](https://aka.ms/vs/17/release/vc_redist.x64.exe)

Since LeviLamina is not compatible with the previous LiteLoaderBDS 2, you need to uninstall LiteLoaderBDS 2 before installing LeviLamina.

## Installation Methods

You can install LeviLamina in different ways, depending on your needs:

- You can [install via lip](#install-via-lip), for ease of installation and upgrade tasks. This is the recommended approach.

- You can [install via lipUI](#install-via-lipui), which is a graphical user interface for lip. This is useful if you are not familiar with the command line.

- You can download the modules and [install them manually](#install-manually) and manage upgrades completely manually. This is useful in situations such as installing LeviLamina on air-gapped systems with no access to the internet.

### Install via lip

If you have not installed lip, you can install it following the instructions in [lip installation guide](https://docs.lippkg.com/installation.html).

After installing lip, you can install LeviLamina by running the following command:

```powershell
lip install github.com/tooth-hub/levilamina
```

To install a specific version of LeviLamina, for example, 1.0.0, you can run the following command:

```powershell
lip install github.com/tooth-hub/levilamina@1.0.0
```

During the installation, you might be asked to confirm some prompts. You can press `y` to confirm the prompts. To skip the prompts, you can add the `-y` option to the command.

```powershell
lip install -y github.com/tooth-hub/levilamina
```

You have now successfully installed LeviLamina.

To upgrade LeviLamina, you can run the following command:

```powershell
lip install --upgrade github.com/tooth-hub/levilamina
```

!!! danger
    Upgrading LeviLamina may result in data loss. Please make sure you have a backup of your data before upgrading.

### Install via lipUI

Before installation, you should obtain a copy of lipUI. See the guides [here](https://docs.lippkg.com/lipui_quickstart.html).

Then you can start lipUI, select a proper workspace, and install LeviLamina from Tooth Index.

### Install Manually

#### Downloading Required Files

1. Navigate to the releases section on [github.com/LiteLDev/LeviLamina](https://github.com/LiteLDev/LeviLamina), select the preferred version, and download the `levilamina-windows-x64.zip` file from that version's assets.
2. Download the corresponding Bedrock Dedicated Server (BDS) version from [minecraft.net](https://www.minecraft.net/en-us/download/server/bedrock) and obtain the `bedrock-server-<version>.zip` archive.
3. Acquire the matching versions of `PeEditor.exe` and `PreLoader.dll` by visiting the releases on [github.com/LiteLDev/PeEditor](https://github.com/LiteLDev/PeEditor) and [github.com/LiteLDev/PreLoader](https://github.com/LiteLDev/PreLoader) respectively.

> Typically, the latest LeviLamina release should coincide with the latest versions of PeEditor and PreLoader. Ensure compatibility with the corresponding BDS version.

#### Installation Process

1. Unzip the `bedrock-server-<version>.zip` file, obtained from step 2 of **Downloading Required Files**, into an empty directory.
2. Transfer the `PeEditor.exe` and `PreLoader.dll` files, secured in step 3 of **Downloading Required Files**, into the same directory where you extracted the BDS archive, ensuring they are alongside `bedrock_server.exe`.
3. Extract the `levilamina-windows-x64.zip` file from step 1 and relocate the `/lib/LeviLamina.dll` and `/lib/LeviLamina.pdb` files into the same directory as the BDS files from step 1.
4. Execute `PeEditor.exe` by double-clicking and wait until the process completes. You should then find `bedrock_server_mod.exe` in the directory, and the original `bedrock_server.exe` will be renamed to `bedrock_server.exe.bak`.

You have now successfully installed LeviLamina. Initiate it by running `bedrock_server_mod.exe`.
