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

bool versionCommand(CommandOrigin const& ori, CommandOutput& outp) {
    outp.success("The server is running Bedrock Dedicated Server " + LL::getBdsVersion() + " with LiteLoaderBDS " +
        LL::getLoaderVersionString() + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS", {});
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
#include "Header/MC/VanillaDimensions.hpp"
bool tpdimCommand(CommandOrigin const& ori, CommandOutput& outp, int dimid, optional<CommandPosition> cmdpos) {
    auto actor = const_cast<CommandOrigin&>(ori).getEntity();
    auto dim = VanillaDimensions::toString(dimid);
    if (!actor) {
        outp.error("", {});
        return false;
    }
    if (dimid < 0 || dimid > 3) {
        outp.error("Invaild dimid: " + std::to_string(dimid), {});
        return false;
    }
    auto pos = cmdpos.set ? cmdpos.val().getPosition(ori, {0, 0, 0}) : actor->getPos();
    actor->teleport(pos, dimid);
    outp.success(fmt::format("Teleported {} to {} ({:2f}, {:2f}, {:2f})",
                             actor->getNameTag(), dim, pos.x, pos.y, pos.z),{});
    return true;
}


template <typename T>
char const* addEnum(CommandRegistry* registry, char const* name, std::vector<std::pair<std::string, T>> const& values) {
    registry->addEnumValues<T>(name, CMDREG::ALLOCID(), values);
    return name;
}

template <typename Command, typename Type>
int getOffset(Type Command::*src) {
    union {
        Type Command::*src;
        int value;
    } u;
    u.src = src;
    return u.value;
}

template <typename Command, typename Type>
CommandParameterData mandatory(Type Command::*field, std::string name, bool Command::*isSet = nullptr) {
    return {
        CMDREG::ALLOCID(),
        CommandRegistry::getParseFn<Type>(),
        name,
        CommandParameterDataType::NORMAL,
        nullptr,
        getOffset(field),
        false,
        isSet ? getOffset(isSet) : -1,
    };
}
template <CommandParameterDataType DataType, typename Command, typename Type>
CommandParameterData
    mandatory(Type Command::*field, std::string name, char const* desc = nullptr, bool Command::*isSet = nullptr) {
    return {
        CMDREG::ALLOCID(),
        &CommandRegistry::fakeparse<Type>,
        name,
        DataType,
        desc,
        getOffset(field),
        false,
        isSet ? getOffset(isSet) : -1,
    };
}
template <typename Command, typename Type>
CommandParameterData cmd_optional(Type Command::*field, std::string name, bool Command::*isSet = nullptr) {
    return {
        CMDREG::ALLOCID(),
        CommandRegistry::getParseFn<Type>(),
        name,
        CommandParameterDataType::NORMAL,
        nullptr,
        getOffset(field),
        true,
        isSet ? getOffset(isSet) : -1,
    };
}
template <CommandParameterDataType DataType, typename Command, typename Type>
CommandParameterData
    cmd_optional(Type Command::*field, std::string name, char const* desc = nullptr, bool Command::*isSet = nullptr) {
    return {
        CMDREG::ALLOCID(),
        &CommandRegistry::fakeparse<Type>,
        name,
        DataType,
        desc,
        getOffset(field),
        true,
        isSet ? getOffset(isSet) : -1,
    };
}

class TestCommand : public Command {
public:
    CommandSelector<Player> selector;
    enum class Action { Ui,
                        To,
                        List,
                        Set,
                        Del } action{};
    std::string name;

    virtual void execute(CommandOrigin const& origin, CommandOutput& output)const {
        
    }
    static void setup(CommandRegistry* registry) {
        registry->registerCommand(
            "cmd_name", "commands.description", CommandPermissionLevel::OperatorOnly, {(CommandFlagValue)0}, {(CommandFlagValue)0x80});
        addEnum<Action>(registry, "warp-to", {{"to", Action::To}});
        addEnum<Action>(registry, "warp-list", {{"list", Action::List}});
        addEnum<Action>(registry, "warp-set", {{"set", Action::Set}});
        addEnum<Action>(registry, "warp-del", {{"del", Action::Del}});
        registry->registerOverload<TestCommand>("cmd_name");
        registry->registerOverload<TestCommand>(
            "cmd_name", mandatory<CommandParameterDataType::ENUM>(&TestCommand::action, "to", "warp-to"),
            mandatory(&TestCommand::name, "name"));
        registry->registerOverload<TestCommand>(
            "cmd_name", mandatory<CommandParameterDataType::ENUM>(&TestCommand::action, "list", "warp-list"));
        registry->registerOverload<TestCommand>(
            "cmd_name", mandatory<CommandParameterDataType::ENUM>(&TestCommand::action, "set", "warp-set"),
            mandatory(&TestCommand::name, "name"));
        registry->registerOverload<TestCommand>(
            "cmd_name", mandatory<CommandParameterDataType::ENUM>(&TestCommand::action, "del", "warp-del"),
            mandatory(&TestCommand::name, "name"));
    }
};
void RegisterCommands()
{
    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands
        MakeCommand("version", "Get the version of this server", 0);
        MakeCommand("plugins", "View plugin information", 0);
        MakeCommand("tpdim", "Teleport", 0);

        CmdOverload(version, versionCommand);
        CmdOverload(plugins, pluginsCommand, "plugin name");
        CmdOverload(tpdim, tpdimCommand, "dimid", "position");

        TestCommand::setup(ev.CMDRg);

        return true;
    });
}