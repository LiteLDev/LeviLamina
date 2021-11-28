#include <Global.h>
#include <regCommandAPI.h>
#include <LLAPI.h>
#include <ServerAPI.h>
#include <Header/EventAPI.h>
#include <filesystem>

void checkUpdate();
//unsigned short getBuiltinCommandLevel();

bool versionCommand(CommandOrigin const& ori, CommandOutput& outp) {
    outp.success("The server is running Bedrock Dedicated Server " + LL::getBdsVersion() + " with LiteLoaderBDS " +
                 LL::getLoaderVersionString() + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS");
    return true;
}

bool pluginsCommand(CommandOrigin const& ori, CommandOutput& outp, optional<string> pl) {
    if (pl.set) {
        std::string name = pl.val();
        auto plugin = LL::getPlugin(name);
        if (plugin) {
            std::ostringstream oss;
            auto fn = std::filesystem::path(plugin->filePath).filename().u8string();

            oss << "Plugin [" << name << ']' << std::endl;
            oss << "- Name: " << plugin->name << '(' << fn << ')' << std::endl;
            oss << "- Version: " << plugin->version << std::endl;
            oss << "- Introduction: " << plugin->introduction << std::endl;
            if (!plugin->git.empty())
                oss << "Git: " << plugin->git << std::endl;
            if (!plugin->license.empty())
                oss << "License: " << plugin->license << std::endl;
            if (!plugin->website.empty())
                oss << "Website: " << plugin->website << std::endl;
            auto text = oss.str();
            text.pop_back();
            outp.success(text);
        } else {
            outp.error("Plugin [" + name + "] is not found!");
        }
        return true;
    }
    auto plugins = LL::getAllPlugins();
    std::ostringstream oss;
    oss << "Plugin Lists[" << plugins.size() << "]\n";
    for (auto& [name, plugin] : plugins) {
        // Plugin List
        // - LiteLoader(LiteLoader.dll)[v1.0.0-Beta]: plugin introduction
        auto fn = std::filesystem::path(plugin.filePath).filename().u8string();
        oss << "- " << name << "(" << fn << ")[" << plugin.version << "]: "
            << plugin.introduction << std::endl;
    }
    oss << "\n* Send command \"plugins <Plugin Name>\" for more information";
    outp.success(oss.str());
    return true;
}

void registerCommands() {
    Event::addEventListener([](RegCmdEV ev) { // Register commands
        CMDREG::SetCommandRegistry(ev.CMDRg);
        MakeCommand("version", "Get the version of this server", 0);
        MakeCommand("plugins", "View plugin information", 0);

        CmdOverload(version, versionCommand);
        CmdOverload(plugins, pluginsCommand, "plugin name");
    });
}