#include <Global.h>
#include <LLAPI.h>
#include <ServerAPI.h>
#include <EventAPI.h>
#include <MC/CommandRegistry.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandOrigin.hpp>
#include <MC/CommandPosition.hpp>
#include <RegCommandAPI.h>
#include <filesystem>
#include <MC/Packet.hpp>
#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
void checkUpdate();
bool versionCommand(CommandOrigin const& ori, CommandOutput& outp) {
    outp.success("The server is running Bedrock Dedicated Server " + LL::getBdsVersion() + " with LiteLoaderBDS " +
        LL::getLoaderVersionString() + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS", {});
    return true;
}

bool pluginsCommand(CommandOrigin const& ori, CommandOutput& outp, optional<string> pl) {
    if (pl.set) {
        std::string name = pl.val() + ".dll";
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
            outp.success(text, {});
        } else {
            outp.error("Plugin [" + name + "] is not found!", {});
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
    outp.success(oss.str(), {});
    return true;
}

// Test CommandPosition
bool tpdimCommand(CommandOrigin const& ori, CommandOutput& outp, int dimid, optional<CommandPosition> cmdpos) {
    auto actor = const_cast<CommandOrigin&>(ori).getEntity();
    std::unordered_map<int, string> dimensionNameMap = {
        {0, "Overworld"},
        {1, "Nether"},
        {2, "The End"},
    };
    if (!actor) {
        outp.error("", {});
        return false;
    }
    if (dimid < 0 || dimid > 3) {
        outp.error("Invaild dimid: " + std::to_string(dimid), {});
        return false;
    }
    if (cmdpos.set) {
        auto pos = cmdpos.val().getPosition(ori, {0, 0, 0});
        actor->teleport(pos, dimid);
        outp.success(fmt::format("Teleported {} to {} ({:2f}, {:2f}, {:2f})",
            actor->getNameTag(), dimensionNameMap[dimid], pos.x, pos.y, pos.z), {});
    } else {
        auto pos = *(Vec3*)&actor->getStateVectorComponent();
        actor->teleport(pos, dimid);
        outp.success(fmt::format("Teleported {} to {} ({:2f}, {:2f}, {:2f})",
            actor->getNameTag(), dimensionNameMap[dimid], pos.x, pos.y, pos.z), {});
    }
    return true;
}

void registerCommands() {
    Event::addEventListener([](RegCmdEV ev) { // Register commands
        MakeCommand("version", "Get the version of this server", 0);
        MakeCommand("plugins", "View plugin information", 0);
        MakeCommand("tpdim", "View plugin information", 0);

        CmdOverload(version, versionCommand);
        CmdOverload(plugins, pluginsCommand, "plugin name");
        CmdOverload(tpdim, tpdimCommand, "dimid", "position");
    });
}