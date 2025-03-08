# Quickstart

## Before You Begin

We strongly recommend using [lip](https://lip.levimc.org/user-guide/installation/) for mod installation. If you
have not installed it locally yet, please go ahead and check it out.  
The following content is for a quick start with using lip.

## Installing LeviLamina

First, create a new directory for your Minecraft server and enter it:

```shell
mkdir myserver
cd myserver
```

Then, install LeviLamina bundled with Bedrock Dedicated Server using lip:

```shell
lip install github.com/LiteLDev/LeviLamina@version
# Example:
lip install github.com/LiteLDev/LeviLamina@x.x.x
```

You can find LeviLamina's version numbers in the [releases](https://github.com/LiteLDev/LeviLamina/releases).

## Running the Server

To start the server, simply run `bedrock_server_mod.exe`:

```shell
./bedrock_server_mod.exe
```

## Updating LeviLamina

Don't update LeviLamina in the same location when it comes to data security. Instead, we recommend creating a new
directory, installing the new version of LeviLamina there, and subsequently copying the `worlds` directory from the old
location to the new location. Then, follow the instructions provided by the mod developers to migrate the configuration
files and data files of the mods you are using to the new directory.  
For lip v0.25.0 and above, you can use the following command to upgrade LeviLamina:

```shell
lip install -U github.com/LiteLDev/LeviLamina@version
```

If you are using lip v0.25.0 and below:

```shell
lip install --upgrade github.com/LiteLDev/LeviLamina
```

## Finding Mods

Before installing a mod, you'll need to find what you want to install. The best place to find mods
is [Bedrinth](https://bedrinth.com), the official mod index, but you can also find many mods elsewhere around the web.

## Installing Mods

For most mods, especially those on Bedrinth, you just need paste installation command from Bedrinth.  
For example, to install [LeviAntiCheat](https://github.com/LiteLDev/LeviAntiCheat), you would run:

```shell
lip install github.com/LiteLDev/LeviAntiCheat@version
```

However, some mods may require additional steps to install. Follow the instructions provided by the mod developers to
install the mods you are using.

## Troubleshooting

If the problem occurred during playing the game, the first step to troubleshooting installing mods is to check the log
of your server. Your server's most recent logs will be stored to the `logs/server-latest.log` file. You may need to
scroll near the beginning of this file to see when mods were loaded.  
Check [FAQ](faq.md) for frequently occurring problems.

!!! tip
    The description below only apply to lip v0.24.0 and below.

If you see something like this:

```plaintext
ERROR: failed to parse and download specifier string list: failed to install specifier: failed to download from all Go proxies: failed to download from all Go proxies: [failed to download file: cannot download file (HTTP 404 Not Found): https://goproxy.io/github.com/tooth-hub/mymod/@v/v1.1.0.zip]
```

This means that the version of the mod you tried to install does not exist. You should double-check that you typed the
mod name and version correctly.

If you see something like this:

```plaintext
ERROR: failed to resolve dependencies: installed tooth github.com/tooth-hub/othermod does not match dependency 1.20.41
```

This means that the version of the mod you tried to install is incompatible with the installed version of another mod,
LeviLamina or BDS. Try to install another version of the mod or update the installed mod.

If your network cannot directly access GitHub or GoProxy, you can set up a proxy or mirror:

## Configuring a Proxy or Mirror

### For lip v0.25.0 and above

You can use the following command to configure mirrors:

```shell
lip config set github_proxies=
lip config set go_module_proxies=
```

### For lip v0.24.0 and below

If you have a proxy available, use the following command to configure the proxy (supports socks5, http, https):

```shell
lip config ProxyURL
```

If you have mistakenly configured a proxy server when you don't have one, you can unconfigure it with the following
command:

```shell
lip config ProxyURL ""
```

For example, if your proxy address is `http://127.0.0.1:8080`, you can use the following command to configure the proxy:

```shell
lip config ProxyURL http://127.0.0.1:8080
```

If you do not have a proxy available locally, you can use the following commands to configure a mirror source:

```shell
lip config GoModuleProxyURL
lip config GitHubMirrorURL
```
