#include "pch.h"

void checkUpdate();
bool versionCommand(CommandOrigin const &ori, CommandOutput &outp) {
    std::string server_version = SymCall(
        "?getGameVersionStringNet@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$"
        "allocator@D@2@@std@@XZ",
        std::string)();
    outp.success("The server is running Bedrock Dedicated Server " + server_version + " with LiteLoaderBDS " +
                 LiteLoaderVersion + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS");
    return true;
}

void registerCommands() {
    Event::addEventListener([](RegCmdEV ev) {  // Register commands
        CMDREG::SetCommandRegistry(ev.CMDRg);
        MakeCommand("version", "Gets the version of this server", 0);
        CmdOverload(version, versionCommand);
    });
}