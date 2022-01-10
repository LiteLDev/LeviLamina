#include <filesystem>
#include <EventAPI.h>
#include <LLAPI.h>
#include <ServerAPI.h>
#include <RegCommandAPI.h>
#include <MC/CommandOrigin.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandPosition.hpp>
#include <MC/CommandRegistry.hpp>
#include <MC/Packet.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/VanillaDimensions.hpp>
#include <LL/AutoUpgrade.h>
#include <LL/Config.h>

using namespace RegisterCommandHelper;

class VersionCommand : public Command {
public:
    void execute(CommandOrigin const &ori, CommandOutput &output) const override {
        output.success("This Bedrock Dedicated Server " + LL::getBdsVersion() +
                       "is running with LiteLoaderBDS " + LL::getLoaderVersionString() +
                       "\nGitHub: https://github.com/LiteLDev/LiteLoaderBDS", {});
    }

    static void setup(CommandRegistry *registry) {
        registry->registerCommand(
                "version",
                "Get the version of this server",
                CommandPermissionLevel::Any,
                {(CommandFlagValue) 0},
                {(CommandFlagValue) 0x80});
        registry->registerOverload<VersionCommand>("version");
    }
};

class PluginsCommand : public Command {
    std::string PluginName;
    bool PluginName_isSet;

public:
    void execute(CommandOrigin const &ori, CommandOutput &output) const override {
        if (PluginName_isSet) {
            auto plugin = LL::getPlugin(PluginName);
            if (plugin) {
                std::ostringstream oss;
                auto fn = std::filesystem::path(plugin->filePath).filename().u8string();

                oss << "Plugin <" << PluginName << '>' << std::endl << std::endl;
                oss << "- Name:  " << plugin->name << '(' << fn << ')' << std::endl;
                oss << "- Version:  v" << plugin->version.toString(true) << std::endl;
                oss << "- Introduction:  " << plugin->introduction << std::endl;
                for (auto&[k, v]: plugin->otherInformation) {
                    oss << "- " << k << ":  " << v << std::endl;
                }
                auto text = oss.str();
                text.pop_back();
                output.success(text, {});
            } else {
                output.error("Plugin <" + PluginName + "> is not found!", {});
            }
            return;
        }
        auto plugins = LL::getAllPlugins();
        std::ostringstream oss;
        oss << "Plugin Lists [" << plugins.size() << "]\n\n";
        for (auto&[name, plugin]: plugins) {
            // Plugin Lists[1]
            // - LiteLoader(LiteLoader.dll)[v1.0.0]: plugin introduction
            auto fn = std::filesystem::path(plugin.filePath).filename().u8string();
            oss << "- " << name << " [v" << plugin.version.toString() << "] " << " (" << fn << ")" << std::endl
                << "  " << plugin.introduction << std::endl << std::endl;
        }
        oss << "* Send command \"plugins <Plugin Name>\" for more information";
        output.success(oss.str(), {});
    }

    static void addPluginListValues(string name) {
        Global<CommandRegistry>->addSoftEnumValues("PluginName", {name});
    }

    static void setup(CommandRegistry *registry) {
        registry->registerCommand(
                "plugins", "View plugin information", CommandPermissionLevel::GameMasters, {(CommandFlagValue) 0},
                {(CommandFlagValue) 0x80});
        registry->registerOverload<PluginsCommand>("plugins");
        vector<string> pluginList;
        for (auto&[name, p]: LL::getAllPlugins()) {
            string tmp = name;
            //transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            pluginList.push_back(tmp);
        }
        registry->addSoftEnum("PluginName", pluginList);
        registry->registerOverload<PluginsCommand>(
                "plugins",
                makeOptional<CommandParameterDataType::SOFT_ENUM>(
                        &PluginsCommand::PluginName,
                        "name",
                        "PluginName",
                        &PluginsCommand::PluginName_isSet));
        //Event::RegPluginEvent::subscribe([](Event::RegPluginEvent ev) {
        //    updatePluginList(ev.mPluginName);
        //    return true;
        //});
    }
};

static_assert(sizeof(CommandSelector<Player>) == 200);

class TeleportDimensionCommand : public Command {
    enum class DimensionType {
        OverWorld,
        Nether,
        TheEnd,
    } DimensionId;
    CommandSelector<Actor> Victim;
    CommandPosition CommandPos;
    bool Victim_isSet = false;
    bool CommandPos_isSet = false;

    Vec3 getTargetPos(CommandOrigin const &ori, Actor *actor) const {
        if (CommandPos_isSet)
            return CommandPos.getPosition(ori, {0, 0, 0});
        auto pos = actor->getPos();
        Vec3 result = pos;
        int actorDimensionId = actor->getDimensionId();
        switch (DimensionId) {
            case TeleportDimensionCommand::DimensionType::OverWorld:
                if (actorDimensionId != 0)
                    result = {pos.x / 8, pos.y, pos.z / 8};
                break;
            case TeleportDimensionCommand::DimensionType::Nether:
                if (actorDimensionId != 1)
                    result = {pos.x * 8, pos.y, pos.z * 8};
                break;
            case TeleportDimensionCommand::DimensionType::TheEnd:
                if (actorDimensionId != 2)
                    result = {100, 50, 0};
                break;
            default:
                break;
        }
        return result;
    }

    bool teleportTarget(CommandOrigin const &ori, CommandOutput &output, Actor *actor) const {
        auto dim = VanillaDimensions::toString((int) DimensionId);
        auto pos = getTargetPos(ori, actor);
        actor->teleport(pos, (int) DimensionId);
        output.success(fmt::format("Teleported {} to {} ({:2f}, {:2f}, {:2f})",
                                   actor->getNameTag(), dim, pos.x, pos.y, pos.z),
                       {});
        return true;
    }

    bool teleportTargets(CommandOrigin const &ori, CommandOutput &output, CommandSelectorResults<Actor> &actors) const {
        auto dim = VanillaDimensions::toString((int) DimensionId);
        std::string names;
        for (auto &actor: actors) {
            std::string actorName = actor->getNameTag();
            if (actorName.empty()) {
                actorName = actor->getTypeName();
            }
            names.append(", ").append(actorName);
            if (actor->teleport(getTargetPos(ori, actor), (int) DimensionId))
                output.success();
        }
        if (output.getSuccessCount() == 0) {
            output.error("No Actor Teleported");
            return false;
        } else {
            std::string message = fmt::format("Teleported {} to {}", names.substr(2), dim);
            if (CommandPos_isSet) {
                auto pos = CommandPos.getPosition(ori, {0, 0, 0});
                message.append(fmt::format(" ({:2f}, {:2f}, {:2f})", pos.x, pos.y, pos.z));
            }
            output.addMessage(message);
            return true;
        }
    }

public:
    void execute(CommandOrigin const &ori, CommandOutput &output) const override {
        if ((int) DimensionId < 0 || (int) DimensionId > 2) {
            output.error("Invalid DimensionId: " + std::to_string((int) DimensionId), {});
            return;
        }
        if (Victim_isSet) {
            auto result = Victim.results(ori);
            if (result.empty())
                output.error("No Actor Specific", {});
            else if (result.count() == 1)
                teleportTarget(ori, output, *result.begin());
            else
                teleportTargets(ori, output, result);
        } else {
            auto actor = ori.getEntity();
            if (!actor)
                output.error("No Actor Specific", {});
            else
                teleportTarget(ori, output, actor);
        }
    }

    static void setup(CommandRegistry *registry) {
        registry->registerCommand(
                "tpdim", "Teleport to Dimension", CommandPermissionLevel::GameMasters,
                {(CommandFlagValue) 0}, {(CommandFlagValue) 0x80});
        registry->addEnum<DimensionType>("DimensionType",
                                         {
                                                 {"overload", DimensionType::OverWorld},
                                                 {"o",        DimensionType::OverWorld},
                                                 {"nether",   DimensionType::Nether},
                                                 {"n",        DimensionType::Nether},
                                                 {"end",      DimensionType::TheEnd},
                                                 {"e",        DimensionType::TheEnd},
                                         });
        auto dimensionTypeParam = makeMandatory<CommandParameterDataType::ENUM>(&TeleportDimensionCommand::DimensionId,
                                                                                "Dimension", "DimensionType");
        auto dimensionIdParam = makeMandatory((int TeleportDimensionCommand::*) &TeleportDimensionCommand::DimensionId,
                                              "DimensionId");
        auto victimParam = makeMandatory(&TeleportDimensionCommand::Victim, "victim",
                                         &TeleportDimensionCommand::Victim_isSet);
        auto positionParam = makeOptional(&TeleportDimensionCommand::CommandPos,
                                          "Position", &TeleportDimensionCommand::CommandPos_isSet);

        registry->registerOverload<TeleportDimensionCommand>(
                "tpdim", victimParam, dimensionTypeParam, positionParam);
        registry->registerOverload<TeleportDimensionCommand>(
                "tpdim", victimParam, dimensionIdParam, positionParam);
        //registry->registerOverload<TeleportDimensionCommand>(
        //    "tpdim", dimensionTypeParam, positionParam);
        registry->registerOverload<TeleportDimensionCommand>(
                "tpdim", dimensionIdParam, positionParam);
    }
};

class LLUpdateCommand : public Command {
    enum class Operation {
        Force,
    } operation;
    bool isSet;

public:
    void execute(CommandOrigin const &ori, CommandOutput &output) const override {
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
        std::thread th([isForce]() {
            LL::CheckAutoUpdate(true, isForce);
        });
        th.detach();
    }

    static void setup(CommandRegistry *registry) {
        registry->registerCommand(
                "llupdate",
                "Update LiteLoader",
                CommandPermissionLevel::Console,
                {(CommandFlagValue) 0},
                {(CommandFlagValue) 0x80}
        );
        registry->addEnum<Operation>("force", {{"force", Operation::Force}});
        registry->registerOverload<LLUpdateCommand>(
                "llupdate",
                makeOptional<CommandParameterDataType::ENUM>(
                        &LLUpdateCommand::operation, "optional", "force",
                        &LLUpdateCommand::isSet
                )
        );
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
