# Quickstart

## Before You Begin

This project uses [lip](https://github.com/lippkg/lip). Go check them out if you don't have them locally installed.

## Installing LeviLamina

First, create a new directory for your Minecraft server and enter it:

```sh
mkdir myserver
cd myserver
```

Then, install LeviLamina bundled with Minecraft Bedrock Server using lip:

```sh
lip install github.com/LiteLDev/LeviLamina
```

## Running the Server

To start the server, simply run `bedrock_server_mod.exe`:

```sh
./bedrock_server_mod.exe
```

## Updating LeviLamina

When it comes to data security, we advise against updating LeviLamina in its current location. Instead, we recommend creating a new directory, installing the new version of LeviLamina there, and subsequently copying the `worlds` directory from the old location to the new one. Next, follow the instructions provided by the plugin developers to migrate the configuration files and data files of the plugins you are using to the new directory.

However, if you insist on updating in the same location, you can utilize the following command to update LeviLamina:

```sh
lip install --upgrade github.com/LiteLDev/LeviLamina
```

## Finding Plugins

Before installing a plugin, you'll need to find what you want to install. The best place to find plugins is [lip index](https://www.lippkg.com), lip's official plugin registry, but you can also find many plugins on [our forum](https://bbs.liteldev.com/) and other places around the web.

## Installing Plugins

For most plugins, especially those on lip index, installation is as simple as running `lip install <plugin>`.

For example, to install [levianticheat](https://github.com/LiteLDev/LeviAntiCheat), you would run:

```sh
lip install github.com/LiteLDev/LeviAntiCheat
```

Or install a specific version:

```sh
lip install github.com/LiteLDev/LeviAntiCheat@1.0.0
```

However, some plugins may require additional steps to install. Follow the instructions provided by the plugin developers to install the plugins you are using.

## Troubleshooting

If the problem occurred during playing the game, the first step to troubleshooting installing plugins is to check the log of your server. Your server's most recent logs will be stored to the `logs/LeviLamina-latest.log` file. You may need to scroll near the beginning of this file to see when plugins were loaded.

Check [FAQ](faq.md) for frequently occurring problems.

If you see something like this:

```plaintext
ERROR: failed to parse and download specifier string list: failed to install specifier: failed to download from all Go proxies: failed to download from all Go proxies: [failed to download file: cannot download file (HTTP 404 Not Found): https://goproxy.io/github.com/tooth-hub/myplugin/@v/v1.1.0.zip]
```

This means that the version of the plugin you tried to install does not exist. You should double-check that you typed the plugin name and version correctly.

If you see something like this:

```plaintext
ERROR: failed to resolve dependencies: installed tooth github.com/tooth-hub/otherplugin does not match dependency 1.20.41
```

This means that the version of the plugin you tried to install is incompatible with the installed version of another plugin, LeviLamina or BDS. Try to install another version of the plugin or update the installed plugin.
