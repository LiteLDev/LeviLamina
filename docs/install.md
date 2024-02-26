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

- You can [install via LipUI](#install-via-lipui), which is a graphical user interface for lip. This is useful if you are not familiar with the command line.

- You can [install via lip](#install-via-lip), for ease of installation and upgrade tasks. This is the recommended approach.

- You can download the modules and [install them manually](#install-manually) and manage upgrades completely manually. This is useful in situations such as installing LeviLamina on air-gapped systems with no access to the internet.

### Install via LipUI

Simply download and run [LipUI](https://github.com/lippkg/LipUI), and then install LeviLamina from the package index.

### Install via lip

If you have not installed lip, you can install it following the instructions in [lip installation guide](https://docs.lippkg.com/install/).

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

### Install Manually

#### Downloading Necessary Files

##### 1. **Download LeviLamina**:
   - Go to [LeviLamina's Release Page on GitHub](https://github.com/LiteLDev/LeviLamina/releases).
   - Choose the version you want.
   - Download the `levilamina-windows-x64.zip` file from the selected version's assets.

##### 2. **Download BDS (Minecraft Server)**:
   - Visit [Minecraft's server download page](https://www.minecraft.net/en-us/download/server/bedrock).
   - Get the Bedrock Dedicated Server (BDS) version that corresponds with your LeviLamina version, named `bedrock-server-<version>.zip`.

##### 3. **Get PeEditor and PreLoader**:
   - Head to their respective GitHub release pages: [PeEditor Releases](https://github.com/LiteLDev/PeEditor/releases) and [PreLoader Releases](https://github.com/LiteLDev/PreLoader/releases).
   - Download the latest `PeEditor.exe` and `PreLoader.dll`.

> **Note**: Typically, the latest version of LeviLamina aligns with the newest versions of PeEditor and PreLoader. Ensure they are compatible with your BDS version.

#### Installation Steps

##### 1. **Unzip the BDS File**:
   - Extract the `bedrock-server-<version>.zip` file, which you obtained from step 2, into a new, empty folder.

##### 2. **Place PeEditor and PreLoader**:
   - Move `PeEditor.exe` and `PreLoader.dll` into the same directory where you extracted the BDS files, ensuring they are alongside `bedrock_server.exe`.

##### 3. **Include LeviLamina Files**:
   - Unzip the `levilamina-windows-x64.zip` file from step 1.
   - Take the `bin/LeviLamina.dll` and `bin/LeviLamina.pdb` files and place them in the same directory as the BDS files.

##### 4. **Run PeEditor**:
   - Double-click `PeEditor.exe` and wait for the process to complete.
   - You should then find a new file named `bedrock_server_mod.exe` in the directory, and the original `bedrock_server.exe` will be renamed to `bedrock_server.exe.bak`.

Now, you have successfully installed LeviLamina. To start it, run `bedrock_server_mod.exe`.
