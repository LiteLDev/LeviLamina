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

#### Download the required files

1. find the desired version from releases on [github.com/LiteLDev/LeviLamina](github.com/LiteLDev/LeviLamina), download the `levilamina-windows-x64.zip` zip from that version's Assets
2. Download the corresponding version of the BDS server from [minecraft.net](https://www.minecraft.net/zh-hans/download/server/bedrock) and get the `bedrock-server-<version>.zip` archive.
3. Download the corresponding versions of `PeEditor.exe` and `PreLoader.dll` from the releases of [github.com/LiteLDev/PeEditor](github.com/LiteLDev/PeEditor) and [github.com/LiteLDev/PreLoader](github.com/LiteLDev/PreLoader)

In the usual case, the latest version of LeviLamina should correspond to the latest version of PeEditor and PreLoader, please pay attention to the corresponding BDS version of LeviLamina.

#### Installation

1. Extract the `bedrock-server-<version>.zip` archive obtained in step 2 of the **Download Required Files** above to an empty folder.
2. Move the `PeEditor.exe` and `PreLoader.dll` files obtained in step 3 of the **Download Required Files** above into the folder where you unzipped the BSD archive in the previous step, so that it is in the same directory as `bedrock_server.exe`.
3. Unzip the `levilamina-windows-x64.zip` obtained in step 1 of the above **Download the required files** and move the `/lib/LeviLamina.dll` and `/lib/LeviLamina.pdb` files into the folder in which you unzipped the BSD package in step 1, so that they are in the same directory as the `bedrock_server.exe` in the same directory.
4. Double-click `PeEditor.exe` and wait for it to finish running, at which point you should see `bedrock_server_mod.exe` in that folder and notice that `bedrock_server.exe` has been renamed to `bedrock_server.exe.bak`.

At this point, you have successfully installed LeviLamina You can start it by running `bedrock_server_mod.exe`.
