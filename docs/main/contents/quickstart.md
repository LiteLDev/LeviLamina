# Quickstart

## Before You Begin

We highly recommend using [lip](https://lip.levimc.org/user-guide/installation/) for a smooth mod installation experience. If you haven’t set it up locally yet, please visit the installation guide to get started.  
The following content is for a quick start with using lip.

## Installing LeviLamina

Begin by creating a directory for your Minecraft server and navigating into it:

```shell
mkdir myserver
cd myserver
```

Then, install LeviLamina (bundled with Bedrock Dedicated Server) using lip:

```shell
# Install the latest version
lip install github.com/LiteLDev/LeviLamina

# Install a specific version (replace x.y.z with the desired version)
lip install github.com/LiteLDev/LeviLamina@x.y.z
```

Find the available version numbers in the [releases](https://github.com/LiteLDev/LeviLamina/releases).

## Running the Server

Launch your server by running:

```shell
./bedrock_server_mod.exe
```

## Updating LeviLamina

For optimal data security, do not update LeviLamina in the same directory. Instead, install the new version in a separate folder, then copy over your `worlds` directory and update your configuration as needed.

```shell
# Update to the latest version
lip update github.com/LiteLDev/LeviLamina

# Update to a specific version (replace x.y.z with the desired version)
lip update github.com/LiteLDev/LeviLamina@x.y.z
```

Find the available version numbers in the [releases](https://github.com/LiteLDev/LeviLamina/releases).

## Finding Mods

Before adding mods, explore your options. The best source is [Bedrinth](https://bedrinth.com), although you can discover many elsewhere around the web.

## Installing Mods

Most mods—especially those listed on Bedrinth—can be installed by pasting the provided command. For example, to install [LeviAntiCheat](https://github.com/LiteLDev/LeviAntiCheat):

```shell
lip install github.com/LiteLDev/LeviAntiCheat
```

Follow additional instructions provided by individual mod developers when needed.

## Troubleshooting

If issues occur during gameplay, start by checking your server log located at `logs/server-latest.log`. Scroll near the beginning to review when mods were loaded, and refer to the [FAQ](faq.md) for common problems.
