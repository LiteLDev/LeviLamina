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
#include <Main/AutoUpgrade.h>
#include <Main/Config.h>

using namespace RegisterCommandHelper;

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


void LLUpgradeCommand(CommandOutput& output,bool isForce)
{
    std::thread([isForce]() {
        LL::CheckAutoUpdate(true, isForce);
    }).detach();
}

void LLListPluginsCommand(CommandOutput& output)
{
    auto plugins = LL::getAllPlugins();
    std::ostringstream oss;
    oss << "Plugin Lists [" << plugins.size() << "]\n\n";
    for (auto& [name, plugin] : plugins) {
        // Plugin Lists[1]
        // - LiteLoader [v1.0.0] (LiteLoader.dll)
        //   xxxxx  (Plugin Introduction)
        auto fileName = std::filesystem::path(plugin.filePath).filename().u8string();
        oss << fmt::format("- {} [v{}] ({})\n  {}\n\n",
            name, plugin.version.toString(), fileName, plugin.introduction);
    }
    oss << "* Send command \"plugins <Plugin Name>\" for more information";
    output.success(oss.str());
}

void LLPluginInfoCommand(CommandOutput& output, const string &pluginName)
{
    auto plugin = LL::getPlugin(pluginName);
    if (plugin) {
        std::ostringstream oss;
        auto fn = std::filesystem::path(plugin->filePath).filename().u8string();

        oss << "Plugin <" << pluginName << '>' << std::endl << std::endl;
        oss << "- Name:  " << plugin->name << '(' << fn << ')' << std::endl;
        oss << "- Version:  v" << plugin->version.toString(true) << std::endl;
        oss << "- Introduction:  " << plugin->introduction << std::endl;
        for (auto& [k, v] : plugin->otherInformation) {
            oss << "- " << k << ":  " << v << std::endl;
        }
        auto text = oss.str();
        text.pop_back();
        output.success(text, {});
    }
    else {
        output.error("Plugin <" + pluginName + "> is not found!", {});
    }
}

void LLVersionCommand(CommandOutput& output)
{
    output.success(fmt::format("Bedrock Dedicated Server {}\n- with LiteLoaderBDS {}\n- Network Protocol: {}",
        LL::getBdsVersion(), LL::getLoaderVersionString(), LL::getServerProtocolVersion()));
}

void LLHelpCommand(CommandOutput& output)
{
    output.success(
        "[Introduction]\n"
        "LiteLoaderBDS is an unofficial plugin loader for modding development of Bedrock Dedicated Server.\n"
        "It provides a huge nubmer of APIs, a powerful event system and lots of packed utility interfaces .\n"
        "[Github]\n"
        "--> https://github.com/LiteLDev/LiteLoaderBDS <--\n"
        "Welcome to our github project to get more information ~"
    );
}

class LLCommand : public Command {
    enum class Operation
    {
        Version, List, Upgrade, Help
    };
    enum class UpgradeOption {
        Force
    };

    Operation operation;
    UpgradeOption upgradeOption;
    bool hasUpgradeOption, hasPluginNameToGetInfo;
    string pluginNameToGetInfo;

public:
    void execute(CommandOrigin const& ori, CommandOutput& output) const override {
        switch (operation)
        {
        case Operation::Version:
            LLVersionCommand(output);
            break;
        case Operation::Upgrade:
            LLUpgradeCommand(output, hasUpgradeOption && upgradeOption == UpgradeOption::Force);
            break;
        case Operation::List:
            if (!hasPluginNameToGetInfo)
                LLListPluginsCommand(output);
            else
                LLPluginInfoCommand(output, pluginNameToGetInfo);
            break;
        case Operation::Help:
            LLHelpCommand(output);
            break;
        default:
            break;
        }
    }

    static void setup(CommandRegistry* registry) {
        registry->registerCommand("ll", "LiteLoaderBDS Menu",
            CommandPermissionLevel::Console, { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });

        // Add Options
        registry->addEnum<Operation>("operation", {
            {"version", Operation::Version},
            {"list", Operation::List},
            {"plugins", Operation::List},
            {"upgrade", Operation::Upgrade},
            {"update", Operation::Upgrade},
            {"help", Operation::Help}
        });
        registry->addEnum<UpgradeOption>("force", { {"force", UpgradeOption::Force} });

        vector<string> pluginList;
        for (auto& [name, p] : LL::getAllPlugins()) {
            pluginList.push_back(name);
        }
        registry->addSoftEnum("PluginName", pluginList);

        //Register
        registry->registerOverload<LLCommand>(
            "ll",
            makeMandatory<CommandParameterDataType::ENUM>(&LLCommand::operation, "operation", "operation"),
            makeOptional<CommandParameterDataType::ENUM>(
                &LLCommand::upgradeOption, "option", "force", &LLCommand::hasUpgradeOption)
        );
        registry->registerOverload<LLCommand>(
            "ll",
            makeMandatory<CommandParameterDataType::ENUM>(&LLCommand::operation, "operation", "operation"),
            makeOptional<CommandParameterDataType::SOFT_ENUM>(
                &LLCommand::pluginNameToGetInfo, "name", "PluginName", &LLCommand::hasPluginNameToGetInfo));
    }
};

class VersionCommand : public Command {
public:
    void execute(CommandOrigin const& ori, CommandOutput& output) const override
    {
        LLVersionCommand(output);
    }

    static void setup(CommandRegistry* registry) {
        registry->registerCommand( "version", "Get the version of this server",
            CommandPermissionLevel::GameMasters, { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
        registry->registerOverload<VersionCommand>("version");
    }
};

void RegisterCommands() {
    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands
        LLCommand::setup(ev.mCommandRegistry);
        VersionCommand::setup(ev.mCommandRegistry);
        TeleportDimensionCommand::setup(ev.mCommandRegistry);
        return true;
    });
}
