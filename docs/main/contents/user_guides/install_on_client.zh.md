# 在客户端上安装

## 前提条件

您需要安装一个Minecraft基岩版支持的操作系统：

- Windows 10(64位)
- Windows 11(64位)

要将LeviLamina安装到Minecraft基岩版客户端上，您还需要安装：

- [Visual C++ Redistributable for Visual Studio 2015, 2017, 2019, and 2022](https://aka.ms/vs/17/release/vc_redist.x64.exe)
- [LeviLauncher](https://github.com/LiteLDev/LeviLauncher/releases)
- [lip](https://github.com/futrime/lip/releases)

## 使用LeviLauncher自动安装

1. 点击启动器导航栏的"设置"按钮，向下滚动找到lip，点击"安装"。
2. 点击启动器导航栏的"下载"按钮，安装LeviLamina支持的Minecraft基岩版客户端版本。
3. 在启动器的"启动"页面将版本切换到新安装的版本。
4. 将鼠标移动到"插件"选项卡上，点击选项卡右下角的"管理插件"按钮。
5. 在弹出的插件管理页面中，点击右上角的"安装LeviLamina"按钮。

## 使用lip安装

1. 通过LeviLauncher安装LeviLamina支持的客户端版本，具体版本可以参考[支持的版本](../versions.md)。
2. 通过LeviLauncher打开客户端所在目录，然后打开命令行终端（可以在地址栏输入`cmd`并回车）。
3. 运行`lip install github.com/LiteLDev/LeviLamina#client@版本号`命令来安装LeviLamina。

例如，要安装1.9.1版本，可以运行以下命令：

```shell
lip install github.com/LiteLDev/LeviLamina#client@1.9.1
```

### 升级LeviLamina版本

由于lip的设计问题，lip暂不支持一起升级包及其依赖，您需要手动将依赖也一并升级。  
例如，要升级到1.9.1版本，可以运行以下命令：

```shell
lip update github.com/LiteLDev/LeviLamina#client@1.9.1 github.com/LiteLDev/bedrock-runtime-data@1.21.132-client.3
```

因为1.9.1版本依赖bedrock-runtime-data的1.21.132-client.3版本，所以需要将其一并升级。
