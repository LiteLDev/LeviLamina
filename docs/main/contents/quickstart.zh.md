# 快速入门

## 开始之前

我们强烈推荐使用 [lip](https://lip.levimc.org/user-guide/installation/) 来获得流畅的模组安装体验。如果您还未在本地进行配置，请先查阅安装指南以便快速启动。  

以下内容为您提供使用 lip 的入门快速指南。

## 配置镜像

### 对于lip v0.25.0及以上版本

你可以通过`lip config set`命令来设置镜像，例如:

```shell
lip config set github_proxies=https://github.bibk.top
lip config set go_module_proxies=https://goproxy.cn
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

首先，为你的 Minecraft 服务器创建一个目录并切换到该目录：

```shell
mkdir myserver
cd myserver
```

接下来，使用 lip 安装 LeviLamina（内置 Bedrock Dedicated Server）：

```shell
# Install the latest version
lip install github.com/LiteLDev/LeviLamina

# Install a specific version (replace x.y.z with the desired version)
lip install github.com/LiteLDev/LeviLamina@x.y.z
```

可在 [releases](https://github.com/LiteLDev/LeviLamina/releases) 查看可用版本号。

## 运行服务器

执行以下命令启动服务器:

```shell
./bedrock_server_mod.exe
```

## 更新LeviLamina

为确保数据安全，请勿在同一目录内更新 LeviLamina。建议在独立文件夹内安装新版本，然后复制 `worlds` 目录并按需更新配置：

```shell
# Update to the latest version
lip update github.com/LiteLDev/LeviLamina

# Update to a specific version (replace x.y.z with the desired version)
lip update github.com/LiteLDev/LeviLamina@x.y.z
```

可在 [releases](https://github.com/LiteLDev/LeviLamina/releases) 查看可用版本号。

## 搜寻模组

在添加 Mods 之前，请先了解各种选项。最佳资源来源为 [Bedrinth](https://bedrinth.com)，当然你也可以在其他网站上找到更多资源。

## 安装模组

大多数 Mods（尤其是 Bedrinth 上列出的）都可通过运行提供的命令进行安装。例如，要安装 [LeviAntiCheat](https://github.com/LiteLDev/LeviAntiCheat):

```shell
lip install github.com/LiteLDev/LeviAntiCheat
```

如有需要，请遵循各个 Mod 开发者提供的进一步说明。

## 问题排查

若游戏过程中遇到问题，请首先检查位于 `logs/server-latest.log` 的服务器日志。向上滚动查看 Mods 加载时间点，并参阅 [FAQ](faq.md) 了解常见问题的解决方案。
