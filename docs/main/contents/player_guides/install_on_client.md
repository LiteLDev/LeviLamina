# Install on Client

## Prerequisites

You need an operating system supported by Minecraft Bedrock Edition:

* Windows 10 (64-bit)
* Windows 11 (64-bit)

To install LeviLamina onto the Minecraft Bedrock Edition client, you also need to install the following:

* [Visual C++ Redistributable for Visual Studio 2015, 2017, 2019, and 2022](https://aka.ms/vs/17/release/vc_redist.x64.exe)
* [LeviLauncher](https://github.com/LiteLDev/LeviLauncher/releases)
* [lip](https://github.com/futrime/lip/releases)

## Installation via lip

1. Install a client version supported by LeviLamina through LeviLauncher. You can refer to
   the [Supported Versions](https://www.google.com/search?q=../versions.md) for specific details.
2. Open the client directory via LeviLauncher, then open a command line terminal (you can type `cmd` in the address bar
   and press Enter).
3. Run the following command to install LeviLamina:
   `lip install github.com/LiteLDev/LeviLamina#client@version_number`

For example, to install version 1.8.0-rc.1, run:
```shell
lip install github.com/LiteLDev/LeviLamina#client@1.8.0-rc.1
```

### Upgrading LeviLamina

Due to a design limitation in lip, lip currently does not support upgrading a package and its dependencies together; you must manually upgrade the dependencies as well.  
For example, to upgrade to version 1.8.0-rc.2, run the following command:
```shell
lip update github.com/LiteLDev/LeviLamina#client@1.8.0-rc.2 github.com/LiteLDev/bedrock-runtime-data@1.21.124-client.3
```

Because version 1.8.0-rc.2 depends on bedrock-runtime-data version 1.21.124-client.3, you need to upgrade it together.

## Automatic Installation via LeviLauncher

Coming soon...
