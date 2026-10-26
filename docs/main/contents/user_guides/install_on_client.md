# Install client on Windows

## Prerequisites

You need an operating system supported by Minecraft Bedrock Edition:

* Windows 10 (64-bit)
* Windows 11 (64-bit)

To install LeviLamina onto the Minecraft Bedrock Edition client, you also need to install the following:

* [Microsoft Visual C++ Redistributable (x64)](https://aka.ms/vc14/vc_redist.x64.exe)
* [LeviLauncher](https://github.com/LiteLDev/LeviLauncher/releases)
* [lip](https://github.com/LiteLDev/lip/releases)

## Automatic Installation via LeviLauncher

1. Click the “Settings” button in the launcher navigation bar, scroll down to find lip, and click “Install”.
2. Click the “Download” button in the launcher navigation bar and install a Minecraft Bedrock Edition client version
   supported by LeviLamina. On the install page, turn on “Install LeviLamina” and pick a “LeviLamina Version”.
3. To add LeviLamina to an instance you have already installed, open “Instances”, open the instance's
   “Instance Settings”, switch to the “Loader” tab and click “Install”.
4. On the launcher's “Launch” page, switch to the instance. Its “Mods” card lists the installed mods; click
   “Manage Mods” to manage them.

## Installation via lip

1. Install a client version supported by LeviLamina as an instance in LeviLauncher. You can refer to
   the [Supported Versions](../versions.md) for specific details.
2. Open the instance directory via LeviLauncher, then open a command line terminal (you can type `cmd` in the address bar
   and press Enter).
3. Run the following command to install LeviLamina:
   `lip install github.com/LiteLDev/LeviLamina#client@version_number`

For example, to install version 26.51.8, run:

```shell
lip install github.com/LiteLDev/LeviLamina#client@26.51.8
```

### Upgrading LeviLamina

For example, to upgrade to version 26.51.8 together with the game data it needs, run the following command:

```shell
lip update github.com/LiteLDev/LeviLamina#client@26.51.8 github.com/LiteLDev/bedrock-runtime-data@26.51.1-client.11
```
