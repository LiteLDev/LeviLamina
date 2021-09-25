#include "pch.h"

void checkUpdate();
bool versionCommand(CommandOrigin const &, CommandOutput &outp) {
    outp.success("The server is running Bedrock Dedicated Server " + loaderapi::getServerVersion() + " with LiteLoaderBDS " +
                 LITELOADER_VERSION + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS");
    return true;
}

void registerCommands() {
    Event::addEventListener([](RegCmdEV ev) {  // Register commands
        CMDREG::SetCommandRegistry(ev.CMDRg);
        MakeCommand("version", "Gets the version of this server", 0);
        CmdOverload(version, versionCommand);
    });
}