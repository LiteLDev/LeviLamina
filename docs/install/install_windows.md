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

You can download the modules from there corresponding GitHub releases pages and install them following their own installation guides.
