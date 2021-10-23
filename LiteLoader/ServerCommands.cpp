#include "pch.h"

Logger<stdio_commit> LOG1(stdio_commit{"[LL] "});

void checkUpdate();
unsigned short getBuiltinCommandLevel();
bool versionCommand(CommandOrigin const& ori, CommandOutput& outp) {
    outp.success("The server is running Bedrock Dedicated Server " + loaderapi::getServerVersion() + " with LiteLoaderBDS " +
                 LITELOADER_VERSION + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS");
    return true;
}

bool pluginsCommand(CommandOrigin const& ori, CommandOutput& outp, optional<std::string> pl) {
    if (ori.getPermissionsLevel() < getBuiltinCommandLevel()) {
        outp.error("You have no permission to use this command");
        return false;
    }
    if (pl.set) {
        std::string name   = pl.val();
        auto        plugin = loaderapi::tryGetPluginByName(name);
        if (plugin) {
            std::ostringstream oss;
            auto               fn = std::filesystem::path(plugin->filePath).filename().u8string();

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
    auto               plugins = loaderapi::getAllPlugins();
    std::ostringstream oss;
    oss << "Plugin Lists\n";
    for (auto& [name, plugin] : plugins) {
        // Plugin List
        // - LiteLoader(LiteLoader.dll)[v1.0.0-Beta]: plugin introduction
        auto fn = std::filesystem::path(plugin.filePath).filename().u8string();
        oss << "- " << name << "(" << fn << ")[" << plugin.version << "]: "
            << plugin.introduction << std::endl;
    }
    oss << "\n* Send command \"plugins <Plugin Name>\" to get more information";
    outp.success(oss.str());
    return true;
}

void registerCommands() {
    Event::addEventListener([](RegCmdEV ev) { // Register commands
        CMDREG::SetCommandRegistry(ev.CMDRg);

        std::string server_version = loaderapi::getServerVersion();
        if (server_version.find("1.17.1") != std::string::npos) {
            LOG1("Are you sure you want to run LiteLoader" + loaderapi::getLoaderVersion() + " with BDS " + server_version + "?");
            system("pause");
            return;
        }
        MakeCommand("version", "Get the version of this server", 0);
        CmdOverload(version, versionCommand);

        MakeCommand("plugins", "Get plugin information", 0);
        CmdOverload(plugins, pluginsCommand, "plugin name");
    });
}