# 快速入门

## 开始之前

该项目使用 [lip](https://github.com/lippkg/lip)。如果您尚未在本地安装，请前往查看。

## 安装 LeviLamina

首先，创建一个新目录用于您的 Minecraft 服务器，并进入该目录：

```sh
mkdir myserver
cd myserver
```

然后，使用 lip 安装捆绑了 Minecraft Bedrock Server 的 LeviLamina：

```sh
lip install github.com/LiteLDev/LeviLamina
```

## 运行服务器

要启动服务器，只需运行 `bedrock_server_mod.exe`：

```sh
./bedrock_server_mod.exe
```

## 更新 LeviLamina

在涉及数据安全性时，我们建议不要在当前位置更新 LeviLamina。相反，我们建议创建一个新目录，在那里安装新版本的 LeviLamina，并随后将旧位置的 `worlds` 目录复制到新位置。然后，按照插件开发者提供的说明，迁移您正在使用的插件的配置文件和数据文件到新目录。

但是，如果您坚持要在相同位置进行更新，您可以使用以下命令更新 LeviLamina：

```sh
lip install --upgrade github.com/LiteLDev/LeviLamina
```

## 查找插件

在安装插件之前，您需要找到想要安装的插件。最好的地方是 [lip index](https://www.lippkg.com)，即 lip 的官方插件注册表，但您也可以在 [我们的论坛](https://bbs.liteldev.com/) 和其他网络上找到许多插件。

## 安装插件

对于大多数插件，特别是在 lip index 上的插件，安装就像运行 `lip install <plugin>` 一样简单。

例如，要安装 [levianticheat](https://github.com/LiteLDev/LeviAntiCheat)，您可以运行：

```sh
lip install github.com/LiteLDev/LeviAntiCheat
```

或安装特定版本：

```sh
lip install github.com/LiteLDev/LeviAntiCheat@1.0.0
```

但是，有些插件可能需要额外的安装步骤。请按照插件开发者提供的说明安装您正在使用的插件。

## 故障排除

如果问题发生在游戏过程中，解决安装插件的故障排除的第一步是检查服务器的日志。您服务器的最新日志将存储在 `logs/LeviLamina-latest.log` 文件中。您可能需要在该文件的开头附近滚动以查看插件何时被加载。

请查看 [FAQ](faq.md) 获取常见问题的答案。

如果您看到类似以下内容：

```plaintext
ERROR: failed to parse and download specifier string list: failed to install specifier: failed to download from all Go proxies: failed to download from all Go proxies: [failed to download file: cannot download file (HTTP 404 Not Found): https://goproxy.io/github.com/tooth-hub/myplugin/@v/v1.1.0.zip]
```

这意味着您尝试安装的插件版本不存在。您应该仔细检查您输入的插件名称和版本是否正确。

如果您看到类似以下内容：

```plaintext
ERROR: failed to resolve dependencies: installed tooth github.com/tooth-hub/otherplugin does not match dependency 1.20.41
```

这意味着您尝试安装的插件版本与另一个插件、LeviLamina 或 BDS 的已安装版本不兼容。尝试安装插件的另一个版本或更新已安装的插件。
