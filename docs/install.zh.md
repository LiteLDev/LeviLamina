# 在Windows上安装

## 前提条件

要安装 LeviLamina，你需要以下 Windows 版本之一：

- Windows 10
- Windows 11
- Windows Server 2019
- Windows Server 2022

要运行 Minecraft 的 Bedrock Dedicated Server，你需要安装以下软件：

- [Visual C++ Redistributable for Visual Studio 2015, 2017, 2019, and 2022](https://aka.ms/vs/17/release/vc_redist.x64.exe)

由于 LeviLamina 不兼容以前的 LiteLoaderBDS 2，你需要在安装 LeviLamina 之前卸载 LiteLoaderBDS 2。

## 安装方法

你可以通过不同的方式安装 LeviLamina，取决于你的需求：

- 你可以[通过 lipUI 安装](#通过-lipui-安装)，这是 lip 的图形用户界面。这对于不熟悉命令行的用户很有用。

- 你可以[通过 lip 安装](#通过-lip-安装)，以便于安装和升级任务。这是推荐的方法。

- 你可以下载模块并[手动安装](#手动安装)并完全手动管理升级。这在一些情况下很有用，比如在没有网络访问的隔离系统上安装 LeviLamina。

### 通过 lipUI 安装

只需要下载并运行[LipUI](https://github.com/lippkg/LipUI)并在包市场中选择LeviLamina安装即可。

### 通过 lip 安装

如果你还没有安装 lip，你可以按照[lip 安装指南](https://docs.lippkg.com/zh/install/)中的说明进行安装。

安装 lip 后，你可以通过运行以下命令来安装 LeviLamina：

```powershell
lip install github.com/LiteLDev/LeviLamina
```

要安装 LeviLamina 的特定版本，例如，1.0.0，你可以运行以下命令：

```powershell
lip install github.com/LiteLDev/LeviLamina@1.0.0
```

在安装过程中，你可能会被要求确认一些提示。你可以按 `y` 来确认提示。要跳过提示，你可以在命令中添加 `-y` 选项。

```powershell
lip install -y github.com/LiteLDev/LeviLamina
```

你现在已经成功安装了 LeviLamina。要升级 LeviLamina，你可以运行以下命令：

```powershell
lip install --upgrade github.com/LiteLDev/LeviLamina
```

!!! danger
    升级 LeviLamina 可能会导致数据丢失。请确保在升级之前备份你的数据。

### 手动安装

#### 准备所需文件

##### 1. **下载 LeviLamina**
   - 访问 LeviLamina 在 GitHub 的 [发布页面](https://github.com/LiteLDev/LeviLamina/releases)。
   - 选择你需要的版本。
   - 下载该版本的 `levilamina-windows-x64.zip` 文件。

##### 2. **下载 BDS 服务端**
   - 前往 [Minecraft 官网](https://www.minecraft.net/zh-hans/download/server/bedrock)。
   - 下载与 LeviLamina 版本相对应的 Bedrock Dedicated Server (BDS) 版本。文件名为 `bedrock-server-<version>.zip`。

##### 3. **下载其他必要文件**
   - 访问 PeEditor 和 PreLoader 在 GitHub 的发布页面 ([PeEditor](https://github.com/LiteLDev/PeEditor/releases) 和 [PreLoader](https://github.com/LiteLDev/PreLoader/releases))。
   - 下载最新版本的 `PeEditor.exe` 和 `PreLoader.dll` 文件。

> **提示**: LeviLamina 的最新版通常与 PeEditor 和 PreLoader 的最新版相匹配。确保你下载的 LeviLamina 版本与 BDS 版本一致。

#### 安装步骤

##### 1. **解压 BDS 文件**
   - 将你在第二步中下载的 `bedrock-server-<version>.zip` 解压到一个新的、空的文件夹中。

##### 2. **移动 PeEditor 和 PreLoader**
   - 把 `PeEditor.exe` 和 `PreLoader.dll` 移到解压后的 BDS 文件夹中。
   - 确保这些文件与 `bedrock_server.exe` 在同一目录下。

##### 3. **添加 LeviLamina 文件**
   - 解压你在第一步中下载的 `levilamina-windows-x64.zip`。
   - 从中提取 `bin/LeviLamina.dll` 和 `bin/LeviLamina.pdb` 文件。
   - 将这些文件也移动到 BDS 文件夹中，与 `bedrock_server.exe` 放在同一目录下。

##### 4. **运行 PeEditor**
   - 双击 `PeEditor.exe` 并等待其执行完毕。
   - 执行完毕后，应该在文件夹中看到一个新的 `bedrock_server_mod.exe` 文件。
   - 原来的 `bedrock_server.exe` 将被重命名为 `bedrock_server.exe.bak`。

完成以上步骤后，LeviLamina 就安装好了。你可以通过双击 `bedrock_server_mod.exe` 来启动服务端。
