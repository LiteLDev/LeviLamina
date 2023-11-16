#include "ll/api/ServerInfo.h"
#include "ll/api/plugin/Plugin.h"
#include "ll/core/Config.h"

#include "mc/network/packet/Packet.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandRawText.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/world/level/Command.h"
#include "mc/world/level/dimension/VanillaDimensions.h"

using namespace ll;
using namespace ll::utils::string_utils;

using ll::plugin::PluginManager;

namespace {
class TeleportDimensionCommand : public Command {

    enum class DimensionType {
        OverWorld,
        Nether,
        TheEnd,
    } DimensionId{};
    CommandSelector<Actor> Victim;
    CommandPosition        CommandPos;
    bool                   Victim_isSet     = false;
    bool                   CommandPos_isSet = false;

    Vec3 getTargetPos(CommandOrigin const& ori, Actor* actor) const {
        if (CommandPos_isSet) return CommandPos.getPosition(0, ori, {0, 0, 0});
        auto pos              = actor->getPosition();
        Vec3 result           = pos;
        int  actorDimensionId = actor->getDimensionId();
        switch (DimensionId) {
        case TeleportDimensionCommand::DimensionType::OverWorld:
            if (actorDimensionId == 1) result = {pos.x * 8, pos.y, pos.z * 8};
            break;
        case TeleportDimensionCommand::DimensionType::Nether:
            if (actorDimensionId != 1) result = {pos.x / 8, pos.y, pos.z / 8};
            break;
        case TeleportDimensionCommand::DimensionType::TheEnd:
            if (actorDimensionId != 2) result = {100, 50, 0};
            break;
        default:
            break;
        }
        return result;
    }

    bool teleportTarget(CommandOrigin const& ori, CommandOutput& output, Actor* actor) const {
        auto dim = VanillaDimensions::toString((int)DimensionId);
        auto pos = getTargetPos(ori, actor);
        actor->teleport(pos, (int)DimensionId);
        output.trSuccess("ll.cmd.tpdim.success", actor->getNameTag(), dim, pos.x, pos.y, pos.z);
        return true;
    }

    bool teleportTargets(CommandOrigin const& ori, CommandOutput& output, CommandSelectorResults<Actor>& actors) const {
        auto        dim = VanillaDimensions::toString((int)DimensionId);
        std::string names;
        for (auto& actor : actors) {
            std::string actorName = actor->getNameTag();
            if (actorName.empty()) { actorName = actor->getTypeName(); }
            names.append(", ").append(actorName);
            actor->teleport(getTargetPos(ori, actor), (int)DimensionId);
            output.success();
        }
        if (output.getSuccessCount() == 0) {
            output.trError("ll.cmd.tpdim.error.noActorTeleported");
            return false;
        } else {
            std::string message = fmt::format("Teleported {} to {}", names.substr(2), dim);
            if (CommandPos_isSet) {
                auto pos = CommandPos.getPosition(0, ori, {0, 0, 0});
                message.append(fmt::format(" ({:2f}, {:2f}, {:2f})", pos.x, pos.y, pos.z));
            }
            output.success(message);
            return true;
        }
    }

public:
    void execute(CommandOrigin const& ori, CommandOutput& output) const override {
        if ((int)DimensionId < 0 || (int)DimensionId > 2) {
            output.trError("ll.cmd.tpdim.invalidDimid", (int)DimensionId);
            return;
        }
        if (Victim_isSet) {
            auto result = Victim.results(ori);
            if (result.empty()) output.trError("ll.cmd.tpdim.error.noActorSpecified");
            else if (result.count() == 1) teleportTarget(ori, output, *result.begin());
            else teleportTargets(ori, output, result);
        } else {
            auto actor = ori.getEntity();
            if (!actor) output.trError("ll.cmd.tpdim.error.noActorSpecified");
            else teleportTarget(ori, output, actor);
        }
    }

    static void setup(CommandRegistry* registry) {
        registry->registerCommand("tpdim", "Teleport to Dimension", CommandPermissionLevel::GameDirectors);
        registry->addEnum<DimensionType>(
            "DimensionType",
            {
                {"overworld", DimensionType::OverWorld},
                {"o",         DimensionType::OverWorld},
                {"nether",    DimensionType::Nether   },
                {"n",         DimensionType::Nether   },
                {"end",       DimensionType::TheEnd   },
                {"e",         DimensionType::TheEnd   },
        }
        );
        auto dimensionTypeParam = CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
            &TeleportDimensionCommand::DimensionId,
            "Dimension",
            "DimensionType"
        );
        auto dimensionIdParam = CommandParameterData::makeMandatory(
            (int TeleportDimensionCommand::*)&TeleportDimensionCommand::DimensionId,
            "DimensionId"
        );
        auto victimParam = CommandParameterData::makeMandatory(
            &TeleportDimensionCommand::Victim,
            "victim",
            &TeleportDimensionCommand::Victim_isSet
        );
        auto positionParam = CommandParameterData::makeOptional(
            &TeleportDimensionCommand::CommandPos,
            "Position",
            &TeleportDimensionCommand::CommandPos_isSet
        );

        registry->registerOverload<TeleportDimensionCommand>("tpdim", victimParam, dimensionTypeParam, positionParam);
        registry->registerOverload<TeleportDimensionCommand>("tpdim", victimParam, dimensionIdParam, positionParam);
        registry->registerOverload<TeleportDimensionCommand>("tpdim", dimensionIdParam, positionParam);
    }
};

void LLListPluginsCommand(CommandOutput& output) {
    auto plugins = PluginManager::getInstance().getAllPlugins();
    output.trSuccess("ll.cmd.listPlugin.overview", plugins.size());

    std::ostringstream oss;
    for (auto& ptr : plugins) {
        if (auto plugin = ptr.lock()) {
            auto& manifest = plugin->getManifest();
            auto& name     = manifest.name;
            if (name.empty()) continue;
            std::string pluginName = name;
            if (pluginName.find("§") == std::string::npos) pluginName.insert(0, "§b");
            std::string desc = manifest.description;
            if (desc.find("§") == std::string::npos) desc.insert(0, "§7");

            oss << fmt::format("- {} §a[v{}]\n  {}\n", pluginName, manifest.version.to_string(), desc);
        }
    }
    output.success(oss.str() + '\n');
    output.trSuccess("ll.cmd.listPlugin.tip");
}

void LLPluginInfoCommand(CommandOutput& output, std::string const& pluginName) {
    auto ptr = PluginManager::getInstance().findPlugin(pluginName);
    if (auto plugin = ptr.lock()) {
        std::map<std::string, std::string> outs;
        std::ostringstream                 oss;

        output.trSuccess("ll.cmd.pluginInfo.title", pluginName);

        outs.emplace("Name", fmt::format("{}", plugin->getManifest().name));
        outs.emplace("Description", plugin->getManifest().description);
        outs.emplace("Version", "v" + plugin->getManifest().version.to_string());
        auto& extraInfo = plugin->getManifest().extraInfo;
        for (auto& [k, v] : extraInfo) { outs.emplace(k, v); }
        size_t width = 10;
        for (auto& [k, v] : outs) { width = std::max(width, k.length()); }
        for (auto& [k, v] : outs) { oss << "- §l" << std::setw((int64)width) << std::left << k << "§r: " << v << '\n'; }
        auto text = oss.str();
        if (text.ends_with('\n')) { text.pop_back(); }
        output.success(text, {});
    } else {
        output.trError("ll.cmd.pluginInfo.error.pluginNotFound", pluginName);
    }
}

void LLVersionCommand(CommandOutput& output) {
    output.trSuccess(
        "ll.cmd.version.msg",
        ll::getBdsVersion().to_string(),
        ll::getLoaderVersion().to_string(),
        ll::getServerProtocolVersion()
    );
}

void LLHelpCommand(CommandOutput& output) { output.trSuccess("ll.cmd.help.msg"); }

void LLLoadPluginCommand(CommandOutput& output, std::string const& path) {

    // if (manager::loadPlugin(path, true)) {
    //     output.trSuccess("ll.cmd.loadPlugin.success", path);
    // } else {
    //     output.trError("ll.cmd.loadPlugin.fail", path);
    // }
}

void LLUnloadPluginCommand(CommandOutput& output, std::string const& pluginName) {

    // if (manager::unloadPlugin(pluginName, true)) {
    //     output.trSuccess("ll.cmd.unloadPlugin.success", pluginName);
    // } else {
    //     output.trError("ll.cmd.unloadPlugin.fail", pluginName);
    // }
}

void LLReloadPluginCommand(CommandOutput& output, std::string const& pluginName, bool reloadAll) {
    if (!reloadAll) {
        // if (manager::reloadPlugin(pluginName, true)) {
        //     output.trSuccess("ll.cmd.reloadPlugin.success", pluginName);
        // } else {
        //     output.trError("ll.cmd.reloadPlugin.fail", pluginName);
        // }
    } else {
        // int cnt = manager::reloadAllPlugins(true);
        // if (cnt > 0) {
        //     output.trSuccess("ll.cmd.reloadAllPlugins.success", cnt);
        // } else {
        //     output.trError("ll.cmd.reloadAllPlugins.fail");
        // }
    }
}

enum class LLSettingsOperation { Get, Set, Delete, Reload, Save, List };
/*
void LLSettingsCommand(
    CommandOutput&      output,
    LLSettingsOperation operation,
    std::string const&  key,
    std::string const&  value
) {
    try {
        switch (operation) {
        case LLSettingsOperation::Get: {
            nlohmann::json j;
            ll::to_json(j, ll::globalConfig);
            auto path = nlohmann::json::json_pointer(key);
            auto val  = j[path];
            output.trSuccess("ll.cmd.settings.get.success", key);
            output.success(val.dump(4));
            break;
        }
        case LLSettingsOperation::Set: {
            nlohmann::json j;
            ll::to_json(j, ll::globalConfig);
            auto path = nlohmann::json::json_pointer(key);
            j[path]   = nlohmann::json::parse(value);
            ll::from_json(j, ll::globalConfig);
            output.trSuccess("ll.cmd.settings.set.success", key, j[path].dump());
            break;
        }
        case LLSettingsOperation::Delete: {
            if (key.empty()) {
                output.trError("ll.cmd.settings.delete.error.emptyKey");
                break;
            }
            nlohmann::json j;
            ll::to_json(j, ll::globalConfig);
            auto path = nlohmann::json::json_pointer(key);
            j.erase(path.to_string());
            ll::from_json(j, ll::globalConfig);
            output.trSuccess("ll.cmd.settings.delete.success", key);
            break;
        }
        case LLSettingsOperation::List: {
            nlohmann::json j;
            ll::to_json(j, ll::globalConfig);
            output.trSuccess("ll.cmd.settings.list.success");
            output.success(j.dump(4));
            break;
        }
        case LLSettingsOperation::Reload:
            ll::loadLeviConfig();
            output.trSuccess("ll.cmd.settings.reload.success");
            break;
        case LLSettingsOperation::Save:
            ll::saveLeviConfig();
            output.trSuccess("ll.cmd.settings.save.success");
            break;
        default:
            output.error("Unknown operation");
        }
    } catch (...) {}
}
*/

class LLCommand : public Command {
public:
    enum class Operation { Version, List, Help, Load, Unload, Reload, Settings };

    Operation           operation{};
    LLSettingsOperation settingsOperation{};

    bool           hasUpgradeOption{}, hasPluginNameSet{}, hasKeySet{}, hasValueSet{};
    CommandRawText pluginNameToDoOperation;
    std::string    key;
    std::string    value;

public:
    void execute(CommandOrigin const&, CommandOutput& output) const override {
        std::string pluginName;
        if (hasPluginNameSet) {
            pluginName = pluginNameToDoOperation.getText();
            if (pluginName.size() > 1 && pluginName[0] == '"' && pluginName[pluginName.size() - 1] == '"'
                && pluginName[pluginName.size() - 2] != '\\') {
                pluginName.erase(0, 1);
                pluginName.pop_back();
            }
        }
        switch (operation) {
        case Operation::Version:
            LLVersionCommand(output);
            break;
        case Operation::List:
            if (!hasPluginNameSet) LLListPluginsCommand(output);
            else LLPluginInfoCommand(output, pluginName);
            break;
        case Operation::Load:
            if (hasPluginNameSet) LLLoadPluginCommand(output, pluginName);
            else output.trError("ll.cmd.error.noPathSpecified");
            break;
        case Operation::Unload:
            if (hasPluginNameSet) LLUnloadPluginCommand(output, pluginName);
            else output.trError("ll.cmd.error.noNameSpecified");
            break;
        case Operation::Reload:
            if (hasPluginNameSet) LLReloadPluginCommand(output, pluginName, false);
            else LLReloadPluginCommand(output, "", true);
            break;
        case Operation::Settings:
            // if (hasKeySet) {
            //     if (hasValueSet) {
            //         LLSettingsCommand(output, settingsOperation, key, value);
            //     } else {
            //         LLSettingsCommand(output, settingsOperation, key, "");
            //     }
            // } else {
            //     LLSettingsCommand(output, settingsOperation, "", "");
            // }
            break;
        case Operation::Help:
            LLHelpCommand(output);
            break;
        default:
            break;
        }
    }

    static void setup(CommandRegistry* registry) {
        // Register Cmd
        registry->registerCommand("ll", "LeviLamina plugin operations", CommandPermissionLevel::Host);

        // Register softenum
        std::vector<std::string> pluginList;
        for (auto& p : PluginManager::getInstance().getAllPlugins()) {
            if (auto plugin = p.lock()) pluginList.push_back(plugin->getManifest().name);
        }
        registry->addSoftEnum("PluginName", pluginList);

        // ll version & help
        registry->addEnum<Operation>(
            "Operation_Common",
            {
                {"version", Operation::Version},
                {"help",    Operation::Help   }
        }
        );
        registry->registerOverload<LLCommand>(
            "ll",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &LLCommand::operation,
                "Operation",
                "Operation_Common"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion)
        );

        // ll settings
        registry->addEnum<Operation>(
            "Operation_Settings",
            {
                {"settings", Operation::Settings}
        }
        );
        registry->addEnum<LLSettingsOperation>(
            "SettingsOperation",
            {
                {"get",    LLSettingsOperation::Get   },
                {"set",    LLSettingsOperation::Set   },
                {"delete", LLSettingsOperation::Delete},
                {"reload", LLSettingsOperation::Reload},
                {"save",   LLSettingsOperation::Save  },
                {"list",   LLSettingsOperation::List  }
        }
        );
        registry->registerOverload<LLCommand>(
            "ll",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &LLCommand::operation,
                "Operation",
                "Operation_Settings"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &LLCommand::settingsOperation,
                "SettingsOperation",
                "SettingsOperation"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeOptional(&LLCommand::key, "JsonPointer", &LLCommand::hasKeySet),
            CommandParameterData::makeOptional(&LLCommand::value, "Value", &LLCommand::hasValueSet)
        );

        // ll load
        registry->addEnum<Operation>(
            "Operation_FreeFilePath",
            {
                {"load", Operation::Load},
        }
        );
        registry->registerOverload<LLCommand>(
            "ll",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &LLCommand::operation,
                "Operation",
                "Operation_FreeFilePath"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeMandatory<CommandParameterDataType::Basic>(
                &LLCommand::pluginNameToDoOperation,
                "pluginPath",
                nullptr,
                &LLCommand::hasPluginNameSet
            )
        );

        // ll unload
        registry->addEnum<Operation>(
            "Operation_MustPluginName",
            {
                {"unload", Operation::Unload},
        }
        );
        registry->registerOverload<LLCommand>(
            "ll",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &LLCommand::operation,
                "Operation",
                "Operation_MustPluginName"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeMandatory<CommandParameterDataType::SoftEnum>(
                (std::string LLCommand::*)&LLCommand::pluginNameToDoOperation,
                "pluginName",
                "PluginName",
                &LLCommand::hasPluginNameSet
            )
        );

        // ll list & reload
        registry->addEnum<Operation>(
            "Operation_OptionalPluginName",
            {
                {"list",    Operation::List  },
                {"plugins", Operation::List  },
                {"reload",  Operation::Reload},
        }
        );
        registry->registerOverload<LLCommand>(
            "ll",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &LLCommand::operation,
                "Operation",
                "Operation_OptionalPluginName"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeOptional<CommandParameterDataType::SoftEnum>(
                (std::string LLCommand::*)&LLCommand::pluginNameToDoOperation,
                "pluginName",
                "PluginName",
                &LLCommand::hasPluginNameSet
            )
        );
    }
};

class VersionCommand : public Command {

public:
    void execute(CommandOrigin const& ori, CommandOutput& output) const override {
#ifdef LL_DEBUG
        Logger("CommandOrigin").warn(ori.serialize().toSnbt());
#endif // LL_DEBUG
        LLVersionCommand(output);
    }

    static void setup(CommandRegistry* registry) {
        registry->registerCommand("version", "Get the version of this server", CommandPermissionLevel::GameDirectors);
        registry->registerOverload<VersionCommand>("version");
    }
};
} // namespace
namespace ll {
void RegisterLeviCommands() {
    //     using ll::event::server::RegisterCommandEvent;
    //     RegisterCommandEvent::subscribe([](RegisterCommandEvent const& event) { // Register commands
    //         LLCommand::setup(event.getRegistry());
    //         VersionCommand::setup(event.getRegistry());
    //         if (ll::globalConfig.enableTpdimCommand) { TeleportDimensionCommand::setup(event.getRegistry()); }
    //         return true;
    //     });
}
} // namespace ll
