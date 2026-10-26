# 在Windows上安装客户端

## 前提条件

您需要安装一个Minecraft基岩版支持的操作系统：

- Windows 10(64位)
- Windows 11(64位)

要将LeviLamina安装到Minecraft基岩版客户端上，您还需要安装：

- [Microsoft Visual C++ 可再发行程序包（x64）](https://aka.ms/vc14/vc_redist.x64.exe)
- [LeviLauncher](https://github.com/LiteLDev/LeviLauncher/releases)
- [lip](https://github.com/LiteLDev/lip/releases)

## 使用LeviLauncher自动安装

1. 点击启动器导航栏的"设置"按钮，向下滚动找到lip，点击"安装"。
2. 点击启动器导航栏的"下载"按钮，安装LeviLamina支持的Minecraft基岩版客户端版本。在安装页面中打开"安装 LeviLamina"，并选择"LeviLamina 版本"。
3. 如果要为已经安装的实例添加LeviLamina，打开"实例列表"，进入该实例的"实例设置"，切换到"加载器"选项卡，点击"安装"。
4. 在启动器的"启动"页面切换到该实例。它的"模组"卡片会列出已安装的模组，点击"管理模组"即可管理。

## 使用lip安装

1. 通过LeviLauncher将LeviLamina支持的客户端版本安装为一个实例，具体版本可以参考[支持的版本](../versions.md)。
2. 通过LeviLauncher打开实例所在目录，然后打开命令行终端（可以在地址栏输入`cmd`并回车）。
3. 运行`lip install github.com/LiteLDev/LeviLamina#client@版本号`命令来安装LeviLamina。

例如，要安装26.51.8版本，可以运行以下命令：

```shell
lip install github.com/LiteLDev/LeviLamina#client@26.51.8
```

### 升级LeviLamina版本

例如，要升级到26.51.8版本并同时更新它所需的游戏数据，可以运行以下命令：

```shell
lip update github.com/LiteLDev/LeviLamina#client@26.51.8 github.com/LiteLDev/bedrock-runtime-data@26.51.1-client.11
```
