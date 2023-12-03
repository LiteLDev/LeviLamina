# 在 Windows 上安装

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

- 你可以[通过 lip 安装](#通过-lip-安装)，以便于安装和升级任务。这是推荐的方法。

- 你可以[通过 lipUI 安装](#通过-lipui-安装)，这是 lip 的图形用户界面。这对于不熟悉命令行的用户很有用。

- 你可以下载模块并[手动安装](#手动安装)并完全手动管理升级。这在一些情况下很有用，比如在没有网络访问的隔离系统上安装 LeviLamina。

### 通过 lip 安装

如果你还没有安装 lip，你可以按照[lip 安装指南](https://docs.lippkg.com/installation.html)中的说明进行安装。

安装 lip 后，你可以通过运行以下命令来安装 LeviLamina：

```powershell
lip install github.com/tooth-hub/levilamina
```

要安装 LeviLamina 的特定版本，例如，1.0.0，你可以运行以下命令：

```powershell
lip install github.com/tooth-hub/levilamina@1.0.0
```

在安装过程中，你可能会被要求确认一些提示。你可以按 `y` 来确认提示。要跳过提示，你可以在命令中添加 `-y` 选项。

```powershell
lip install -y github.com/tooth-hub/levilamina
```

你现在已经成功安装了 LeviLamina。要升级 LeviLamina，你可以运行以下命令：

```powershell
lip install --upgrade github.com/tooth-hub/levilamina
```

!!! danger
    升级 LeviLamina 可能会导致数据丢失。请确保在升级之前备份你的数据。

### 通过 lipUI 安装

在安装之前，你应该获取 lipUI 的副本。请参阅[这里](https://docs.lippkg.com/lipui_quickstart.html)的指南。

然后你可以启动 lipUI，选择一个合适的工作空间，并从 Tooth Index 安装 LeviLamina。

### 手动安装

你可以从相应的 GitHub releases 页面下载模块，并按照它们自己的安装指南进行安装。
