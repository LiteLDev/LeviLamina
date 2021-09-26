#include "pch.h"

Logger<stdio_commit> LOG1(stdio_commit{"[LL] "});

void checkUpdate();
bool versionCommand(CommandOrigin const &, CommandOutput &outp) {
    outp.success("The server is running Bedrock Dedicated Server " + loaderapi::getServerVersion() + " with LiteLoaderBDS " +
                 LITELOADER_VERSION + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS");
    return true;
}

void registerCommands() {
    Event::addEventListener([](RegCmdEV ev) {  //Register commands
        CMDREG::SetCommandRegistry(ev.CMDRg);
        std::string server_version = loaderapi::getServerVersion();
        if (server_version.find("1.17.1") != std::string::npos) {
            LOG1("Are you sure you want to run LiteLoader" + loaderapi::getLoaderVersion() + " with BDS " + server_version + "?");
            system("pause");
            return;
        }
        MakeCommand("version", "Gets the version of this server", 0);
        CmdOverload(version, versionCommand);
    });
}