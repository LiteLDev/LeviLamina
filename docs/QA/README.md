## Hot to update LiteLoaderBDS
Download the newer LiteLoader.zip, unzip it to BDS directory

## How to update Bedrock Dedicated Server
Download the latest Bedrock Dedicated Server from [Minecraft.net](https://www.minecraft.net/en-us/download/server/bedrock), unzip it fully except `server.properties`,`allowlist.json`,`permission.json` to the old version of Bedrock Dedicated Server directory

## How to run LiteLoaderBDS on Linux
Because we have not develop Linux version, so you need to use [Wine](https://www.winehq.org/) to run Windows's Bedrock Dedicated Server to load LiteLoaderBDS, you can choose [the docker image or installation script](https://github.com/LiteLDev/LiteLoaderBDS#for-linux) which provided by us

## Memory leak problem on Wine
This is wine's problem, we can't provide any solution, if you are using docker container, you can limit the memory of container to prevent influenced by memory leak

## LiteLoaderBDS version support for Bedrock Dedicated Server
BDS's minor version updates are perfectly compatible  
For example: 2.1.2 is developed based on BDS 1.18.11.01, and its protocol version is 486. As long as the protocol version of subsequent versions of BDS (for example: 1.18.12.01) is still 486, LL can perfectly support it.  
We usually call a version update with no change in the protocol version as a minor version update (for example: 1.18.11.01 to 1.18.12.01), and if the protocol version is updated (such as 1.18.2 to 1.18.11.01), we call it a major version update  
The game version and protocol version will be showed when server started, you can also type `version` command to query it

## The compatibility of dll plugins
The same with [LiteLoaderBDS version support for Bedrock Dedicated Server](#LiteLoaderBDS version support for Bedrock Dedicated Server), but some plugins which only have simple functions don't need to be updated if mojang did not change the functions/classes used by these plugins

## The compatibility of scirpt plugins
if LLScriptEngine's API have no change, script plugins(including JavaScript, Lua) never need to be update for Bedrock Dedicated Server updates

## Common error codes while loading plugins
- `126`  
The dependent library is missing, please check whether the plugin installation is complete

- `127`  
The plugin is not compatible with the current version of LiteLoaderBDS

## Can't start server on Wine
Try to remove `plugins/LiteLoader/LLAutoUpdate.dll`  
If your server has free memory less than 1.2GB, try to release memory, because in low memory environment, LiteLoaderBDS may not start normally