#include "AutoUpgrade.h"
#include <EventAPI.h>
#include <Global.h>
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <MC/CommandOrigin.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandPosition.hpp>
#include <MC/CommandRegistry.hpp>
#include <MC/Packet.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/VanillaDimensions.hpp>
#include <RegCommandAPI.h>
#include <ServerAPI.h>
#include <filesystem>
#include "AutoUpgrade.h"
#include "Config.h"

using namespace RegisterCommandHelper;

class VersionCommand : public Command {
public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        outp.success("The server is running Bedrock Dedicated Server " + LL::getBdsVersion() + " with LiteLoaderBDS " +
                         LL::getLoaderVersionString() + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS",
                     {});
    }
    static void setup(CommandRegistry* registry) {
        registry->registerCommand(
            "version", "Get the version of this server", CommandPermissionLevel::GameMasters, {(CommandFlagValue)0}, {(CommandFlagValue)0x80});
        registry->registerOverload<VersionCommand>("version");
    }
};

class PluginsCommand : public Command {
    std::string PluginName;
    bool PluginName_isSet;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        if (PluginName_isSet) {
            auto plugin = LL::getPlugin(PluginName);
            if (plugin) {
                std::ostringstream oss;
                auto fn = std::filesystem::path(plugin->filePath).filename().u8string();

                oss << "Plugin [" << PluginName << ']' << std::endl;
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
                outp.error("Plugin [" + PluginName + "] is not found!", {});
            }
            return;
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
        return;
    }
    static void setup(CommandRegistry* registry) {
        registry->registerCommand(
            "plugins", "View plugin information", CommandPermissionLevel::GameMasters, {(CommandFlagValue)0}, {(CommandFlagValue)0x80});
        registry->registerOverload<PluginsCommand>("plugins");
        registry->registerOverload<PluginsCommand>("plugins", makeOptional(&PluginsCommand::PluginName, "PluginName", &PluginsCommand::PluginName_isSet));
    }
};

class TeleportDimensionCommand : public Command {
    enum class DimensionType {
        OverWorld,
        Nether,
        TheEnd,
    } DimensionId;

    CommandPosition CommandPos;
    bool CommandPos_isSet;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        auto actor = ori.getEntity();
        auto dim = VanillaDimensions::toString((int)DimensionId);
        if (!actor) {
            outp.error("No Actor Specific", {});
            return;
        }
        if ((int)DimensionId < 0 || (int)DimensionId > 2) {
            outp.error("Invalid DimenssionId: " + std::to_string((int)DimensionId), {});
            return;
        }
        auto pos = CommandPos_isSet ? CommandPos.getPosition(ori, {0, 0, 0}) : actor->getPos();
        actor->teleport(pos, (int)DimensionId);
        outp.success(fmt::format("Teleported {} to {} ({:2f}, {:2f}, {:2f})",
                                 actor->getNameTag(), dim, pos.x, pos.y, pos.z),
                     {});
        return;
    }
    static void setup(CommandRegistry* registry) {
        registry->registerCommand(
            "tpdim", "Teleport to Dimension", CommandPermissionLevel::GameMasters, {(CommandFlagValue)0}, {(CommandFlagValue)0x80});
        registry->addEnum<DimensionType>("DimensionType",
                                         {
                                             {"overload", DimensionType::OverWorld},
                                             {"o", DimensionType::OverWorld},
                                             {"nether", DimensionType::Nether},
                                             {"n", DimensionType::Nether},
                                             {"end", DimensionType::TheEnd},
                                             {"e", DimensionType::TheEnd},
                                         });
        registry->registerOverload<TeleportDimensionCommand>(
            "tpdim",
            makeMandatory<CommandParameterDataType::ENUM>(&TeleportDimensionCommand::DimensionId, "Dimension", "DimensionType"),
            makeOptional(&TeleportDimensionCommand::CommandPos, "Position", &TeleportDimensionCommand::CommandPos_isSet));
        registry->registerOverload<TeleportDimensionCommand>(
            "tpdim",
            makeMandatory((int TeleportDimensionCommand::*)&TeleportDimensionCommand::DimensionId, "DimensionId"),
            makeOptional(&TeleportDimensionCommand::CommandPos, "Position", &TeleportDimensionCommand::CommandPos_isSet));
    }
};

class LLUpdateCommand : public Command {
    enum class Operation {
        Force,
    } operation;
    bool isSet;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const {
        bool isForce = false;
        if (isSet) {
            switch (operation) {
                case Operation::Force:
                    isForce = true;
                    break;
                default:
                    break;
            }
        }
        CheckAutoUpdate(true, isForce);
    }
    static void setup(CommandRegistry* registry) {
        registry->registerCommand(
            "llupdate", "Update LiteLoader", CommandPermissionLevel::Console, {(CommandFlagValue)0}, {(CommandFlagValue)0x80});
        registry->addEnum<Operation>("force", {{"force", Operation::Force}});
        registry->registerOverload<LLUpdateCommand>("llupdate",
            makeOptional<CommandParameterDataType::ENUM>(&LLUpdateCommand::operation, "optional", "force", &LLUpdateCommand::isSet));
    }
};


void RegisterCommands() {
    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands
        VersionCommand::setup(ev.mCommandRegistry);
        PluginsCommand::setup(ev.mCommandRegistry);
        TeleportDimensionCommand::setup(ev.mCommandRegistry);
        if (LL::globalConfig.enableAutoUpdate)
            LLUpdateCommand::setup(ev.mCommandRegistry);

        return true;
    });
}