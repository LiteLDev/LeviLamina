# Installation and usage

## 💻 Install

### For Windows

1. Download the latest <code>LiteLoader-<i>version</i>.zip</code> from [Releases](https://github.com/LiteLDev/LiteLoader/releases) or [Actions](https://github.com/LiteLDev/LiteLoader/actions), 
2. Unzip everything into the directory of `bedrock_server.exe`. If you are prompted with conflicting files during the decompression process, just select `Overwrite`.
3. Ensure that the `bedrock_server.pdb` file exists.  
   Run `LLPeEditor.exe` to generate the BDS with the exported symbols (`bedrock_server_mod.exe`)  
4. When the console output `Press any key to continue. . . ` , press any key to close the window
5. Execute `bedrock_server_mod.exe` and enjoy it !

### For Linux

#### Installation script(Ubuntu)

```
wget https://github.com/LiteLDev/LiteLoaderBDS/raw/beta/Scripts/install.sh
chmod +x install.sh
./install.sh
```

#### Docker

Enter the following lines in your terminal: 
```
docker pull shrbox/liteloaderbds
docker create --name liteloader -p 19132:19132/udp -i -t shrbox/liteloaderbds
```
Start server: `docker container start liteloader`  
Stop server: `docker container stop -t 30 liteloader`  
Enter console: `docker attach liteloader`  
Exit console: Press `Ctrl + P + Q`. If you press `Ctrl + C`, the server process will exit.  
If you want to manage server files, use `docker volume --help` for more details.

Everything's done! Next, you can install **LiteLoader** plugins!

<br>

## 🎯 Find & Install plugins

### Plugin downloads

`LiteLoader` main plugin distribution channels.

- [Official Forum](https://forum.litebds.com/)
- [MineBBS](https://www.minebbs.com/resources/?prefix_id=59)

### Plugin installation

1. If you downloaded a zip file, unzip it
2. Place all the obtained contents directly into the `plugins` directory
3. Run `bedrock_server_mod.exe` to start the service

For more **installation and usage guides**,  come to 👉[LiteLoader documentation](https://docs.litebds.com/#/en/Usage/)👈 to view

## Installation ResourcePacks/Addon
Copy `.mcpack`, `.mcaddon` or `.zip` to `plugins/AddonsHelper` and restart server  
You can manage ResourcePacks and Addons by using `addons` command

## 🔌 Plugins hot management

Don't need to close server, you can manage plugins, we provided these console commands:

- `ll list`  
  **List** plugins
- `ll load ./plugins/xxxx.js`  
  **Hot load** plugin which locate in target path. The path is relative to the BDS root directory.
- `ll unload xxxx.lua`  
  **Hot unload** plugin which called xxxx.lua
- `ll reload xxxx.dll`  
  **Reload** plugin which called xxxx.dll
- `ll reload`  
  **Reload** all plugins
- `ll version`  
  Print version of LiteLoaderBDS
- `ll upgrade`  
  Check for updates

#### Hot management common problem

- After a plugin is hot unloaded, the commands registered by this plugin are not removed. When the player uses those commands, it will prompt that the command does not exist
- If your plugin has exported functions imported by other plugins, when you unload/reload this plugin, the corresponding Import of other plugins will be invalid.  
- Do not unload or reload plugins when the server has not started, or when there are a lot of players on the server! Otherwise the server may crash
- After hot reloading/hot reloading a plugin, the `onServerStarted` event registered by the plugin will be called immediately, and the player join event `onPlayerJoin` will be called one by one (because the server has been started at this time)

>[!WARNING]
>
> Plugin hot management is only used when debugging plugins. Avoid using **in production environments**

## 📡 ScriptEngine real time debug mode

- `jsdebug`  
  Enter JS real time debug mode
- `luadebug`  
  Enter Lua real time debug mode

In real-time debugging mode, the standard input will be executed as scripting language, and the results will be output in real time.  
If an error occurs, the engine will output an error message and a stack trace.  
Entering the `jsdebug` or `luadebug` again will exit the real time debugg mode.