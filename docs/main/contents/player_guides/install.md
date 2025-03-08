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

- You can [install via lip](#installing-via-lip-v0250-and-above), for ease of installation and upgrade tasks. This is the recommended
  approach.
- You can download the modules and install them manually and manage upgrades completely manually. This is useful in
  situations such as installing LeviLamina on air-gapped systems with no access to the internet.

### Installing via lip v0.25.0 and above

1. Install lip by referring to the [lip documentation](https://lip.levimc.org/en/user-guide/installation/).
2. Run the following command to install LeviLamina:

```shell
lip install github.com/LiteLDev/LeviLamina@version
# Example:
lip install github.com/LiteLDev/LeviLamina@x.x.x
```
Starting from lip v0.25.0, specifying a version is required when installing packages. You can find LeviLamina's
version numbers in the [releases](https://github.com/LiteLDev/LeviLamina/releases).

If you want to upgrade LeviLamina, run the following command:

```shell
lip install -U github.com/LiteLDev/LeviLamina@version
```

### Installing via lip v0.24.0 and below (only for LeviLamina versions below 1.2.0)

You can download v0.24.0 in lip's [releases](https://github.com/futrime/lip/releases/tag/v0.24.0), and for Windows
platforms you can directly download the installer with .exe extension.  
After installing lip, you can install LeviLamina by running the following command:

```shell
lip install github.com/LiteLDev/LeviLamina
```

To install a specific version of LeviLamina, for example, 0.4.2, you can run the following command:

```shell
lip install github.com/LiteLDev/LeviLamina@0.4.2
```

During the installation, you might be asked to confirm some prompts. You can press `y` to confirm the prompts. To skip
the prompts, you can add the `-y` option to the command.

```shell
lip install -y github.com/LiteLDev/LeviLamina
```

You have now successfully installed LeviLamina.

To upgrade LeviLamina, you can run the following command:

```shell
lip install --upgrade github.com/LiteLDev/LeviLamina
```

!!! danger
    Upgrading LeviLamina may result in data loss. Please make sure you have a backup of your data before upgrading.
