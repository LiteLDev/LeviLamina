# Install on Windows

## Prerequisites

To install LiteLoaderBDS 3, you need one of the following Windows versions:

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022

To run Bedrock Dedicated Server for Minecraft, you need to install the following software:

- [Visual C++ Redistributable for Visual Studio 2015, 2017, 2019, and 2022](https://aka.ms/vs/17/release/vc_redist.x64.exe)

Since LiteLoaderBDS 3 is not compatible with the previous LiteLoaderBDS 2, you need to uninstall LiteLoaderBDS 2 before installing LiteLoaderBDS 3.

## Installation Methods

You can install LiteLoaderBDS 3 in different ways, depending on your needs:

- You can [install via Lip](#install-via-lip), for ease of installation and upgrade tasks. This is the recommended approach.

- You can [install via LipUI](#install-via-lipui), which is a graphical user interface for Lip. This is useful if you are not familiar with the command line.

- You can download the modules and [install them manually](#install-manually) and manage upgrades completely manually. This is useful in situations such as installing LiteLoaderBDS 3 on air-gapped systems with no access to the internet.

### Install via Lip

If you have not installed Lip, you can install it following the instructions in [Lip installation guide](https://docs.lippkg.com/installation.html).

After installing Lip, you can install LiteLoaderBDS 3 by running the following command:

```powershell
lip install github.com/tooth-hub/liteloaderbds
```

To install a specific version of LiteLoaderBDS 3, you can run the following command:

```powershell
lip install github.com/tooth-hub/liteloaderbds@3.0.0
```

During the installation, you might be asked to confirm some prompts. You can press `y` to confirm the prompts. To skip the prompts, you can add the `-y` option to the command.

```powershell
lip install -y github.com/tooth-hub/liteloaderbds
```

You have now successfully installed LiteLoaderBDS 3.

To upgrade LiteLoaderBDS 3, you can run the following command:

```powershell
lip install --upgrade github.com/tooth-hub/liteloaderbds
```

!!! danger
    Upgrading LiteLoaderBDS 3 may result in data loss. Please make sure you have a backup of your data before upgrading.

### Install via LipUI

Before installation, you should obtain a copy of LipUI. See the guides [here](https://docs.lippkg.com/lipui_quickstart.html).

Then you can start LipUI, select a proper workspace, and install LiteLoaderBDS 3 from Tooth Index.

### Install Manually

You can download the modules from there corresponding GitHub releases pages and install them following their own installation guides.
