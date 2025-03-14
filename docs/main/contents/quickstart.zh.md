# 快速入门

## 开始之前

我们强烈推荐你使用 [lip](https://lip.levimc.org/zh/user-guide/installation/)
来进行模组安装。如果您尚未在本地安装，请前往查看。  
以下内容针对使用 lip 的情况下进行快速入门。

## 配置镜像

### 对于lip v0.25.0及以上版本

你可以通过`lip config set`命令来设置镜像，例如:

```shell
lip config set github_proxies=https://github.bibk.top
lip config set go_module_proxies=https://goproxy.cn
```

### 对于lip v0.24.0及以下版本

如果你有**代理服务器**可用，使用以下命令配置代理（支持socks5，http，https）:

```shell
lip config ProxyURL
```

例如你的**代理服务器**地址是 `http://127.0.0.1:8080`，你可以使用以下命令配置代理:

```shell
lip config ProxyURL http://127.0.0.1:8080
```

如果你在没有代理服务器的情况下错误地配置了代理服务器，可以使用以下命令取消配置:

```shell
lip config ProxyURL ""
```

如果你本地没有代理可用，你可以使用以下命令配置**镜像源**:

```shell
lip config GoModuleProxyURL
lip config GitHubMirrorURL
```

例如:

```shell
lip config GoModuleProxyURL https://goproxy.cn
lip config GitHubMirrorURL https://github.bibk.top
```

这两个镜像我们已在中国大陆测试过可用，当然你仍然可以使用其他镜像。

## 安装Bedrock Dedicated Server

你可以跳过这一步，因为LeviLamina安装过程中会自动安装BDS。  
当你的服务器的IP归属地是中国大陆时，bdsdown会自动为你配置镜像站，当然，你也可以通过定义`BDSDOWN_MIRROR_URL`
环境变量来自定义镜像站，例如: `https://mcdl.bibk.top`。  
你也可以手动在Minecraft官网下载BDS，然后把压缩文件丢到`.cache/bdsdown`目录下，如果该目录不存在请手动创建。

!!! tip
    该目录基于您安装BDS的路径，例如`C:\Users\YourName\BDS\.cache\bdsdown`

## 安装LeviLamina

首先，创建一个新目录用于您的Minecraft服务器，并进入该目录:

```shell
mkdir myserver
cd myserver
```

然后，使用lip安装捆绑了Bedrock Dedicated Server的LeviLamina:

```shell
lip install github.com/LiteLDev/LeviLamina@版本
# 示例:
lip install github.com/LiteLDev/LeviLamina@x.x.x
```

LeviLamina的版本号可以在[releases](https://github.com/LiteLDev/LeviLamina/releases)查看

## 运行服务器

要启动服务器，只需运行 `bedrock_server_mod.exe`:

```shell
./bedrock_server_mod.exe
```

## 更新 LeviLamina

不要在同一位置更新 LeviLamina，这样做会影响数据安全。相反，我们建议创建一个新目录，在那里安装 LeviLamina 的新版本，并随后将
`worlds` 目录从旧位置复制到新位置。然后，按照模组开发者提供的说明迁移您正在使用的模组的配置文件和数据文件。  
对于lip v0.25.0及以上版本，可以使用以下命令来更新LeviLamina:

```shell
lip install -U github.com/LiteLDev/LeviLamina@版本
```

如果你正在使用lip v0.24.0及以下版本:

```shell
lip install --upgrade github.com/LiteLDev/LeviLamina
```

## 查找模组

在安装模组之前，您需要找到想要安装的模组。最好的地方是 [Bedrinth](https://bedrinth.com)，但您也可以在其他网站上找到许多模组。

## 安装模组

对于大多数模组，特别是在Bedrinth上的模组，就只需要粘贴Bedrinth提供的安装命令就可以直接安装。  
例如，要安装 [LeviAntiCheat](https://github.com/LiteLDev/LeviAntiCheat)，您可以运行:

```shell
lip install github.com/LiteLDev/LeviAntiCheat@版本
```

但是，有些模组可能需要额外的安装步骤。请按照模组开发者提供的说明安装您正在使用的模组。

## 故障排除

如果问题发生在游戏过程中，解决安装模组的故障排除的第一步是检查服务器的日志。您服务器的最新日志将存储在
`logs/server-latest.log` 文件中。您可能需要在该文件的开头附近滚动以查看模组何时被加载。  
请查看 [FAQ](faq.md) 获取常见问题的答案。

!!! tip
    以下描述只适用于lip v0.24.0及以下版本。

如果您看到类似以下内容:

```plaintext
ERROR: failed to parse and download specifier string list: failed to install specifier: failed to download from all Go proxies: failed to download from all Go proxies: [failed to download file: cannot download file (HTTP 404 Not Found): https://goproxy.io/github.com/tooth-hub/mymod/@v/v1.1.0.zip]
```

这意味着您尝试安装的模组版本不存在。您应该仔细检查您输入的模组名称和版本是否正确。  
如果您看到类似以下内容:

```plaintext
ERROR: failed to resolve dependencies: installed tooth github.com/tooth-hub/othermod does not match dependency 1.20.41
```

这意味着您尝试安装的模组版本与另一个模组、LeviLamina 或 BDS 的已安装版本不兼容。尝试安装模组的另一个版本或更新已安装的模组。
