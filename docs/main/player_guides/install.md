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

- You can download the modules and install them manually and manage upgrades completely manually. This is useful in situations such as installing LeviLamina on air-gapped systems with no access to the internet.

### Install via lip

If you have not installed lip, you can install it following the instructions in [lip installation guide](https://futrime.github.io/lip/install/).

After installing lip, you can install LeviLamina by running the following command:

```powershell
lip install github.com/LiteLDev/LeviLamina
```

To install a specific version of LeviLamina, for example, 0.4.2, you can run the following command:

```powershell
lip install github.com/LiteLDev/LeviLamina@0.4.2
```

During the installation, you might be asked to confirm some prompts. You can press `y` to confirm the prompts. To skip the prompts, you can add the `-y` option to the command.

```powershell
lip install -y github.com/LiteLDev/LeviLamina
```

You have now successfully installed LeviLamina.

To upgrade LeviLamina, you can run the following command:

```powershell
lip install --upgrade github.com/LiteLDev/LeviLamina
```

!!! danger
    Upgrading LeviLamina may result in data loss. Please make sure you have a backup of your data before upgrading.
