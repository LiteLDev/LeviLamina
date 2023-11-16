// #ifdef LL_DEBUG

#include "ll/api/Logger.h"
#include "ll/api/base/Hash.h"
#include "ll/api/command/DynamicCommand.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/Levilamina.h"
#include "mc/server/commands/ServerCommands.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/level/storage/LevelData.h"

#include "ll/api/schedule/Scheduler.h"

#include "ll/api/Literals.h"

using Param      = DynamicCommand::ParameterData;
using ParamType  = DynamicCommand::ParameterType;
using ParamIndex = DynamicCommandInstance::ParameterIndex;

using namespace ll::schedule;
using namespace ll::hash;

GameTimeScheduler scheduler;

void setupTestParamCommand() {
    using Param     = DynamicCommand::ParameterData;
    using ParamType = DynamicCommand::ParameterType;
    Param boolParam("testBool", ParamType::Bool, true);
    Param intParam("testInt", ParamType::Int, true);
    Param floatParam("testFloat", ParamType::Float, true);
    Param strParam("testStr", ParamType::String, true);
    Param actorParam("testActor", ParamType::Actor, true);
    Param playerParam("testPlayer", ParamType::Player, true);
    Param BlockPosParam("testBlockPos", ParamType::BlockPos, true);
    Param Vec3Param("testVec3", ParamType::Vec3, true);
    Param RawTextParam("testRawText", ParamType::RawText, true);
    Param MessageParam("testMessage", ParamType::Message, true);
    Param JsonValueParam("testJsonValue", ParamType::JsonValue, true);
    Param ItemParam("testItem", ParamType::Item, true);
    Param BlockParam("testBlock", ParamType::Block, true);
    Param BlockStateParam("testBlockState", ParamType::BlockState, true);
    Param ActorTypeParam("testActorType", ParamType::ActorType, true);
    Param EffectParam("testEffect", ParamType::Effect, true);
    Param CommandParam("testCommand", ParamType::Command, true);
    //  Test Command:
    //    param true 123 3.14 string @e @a 1 2 3 ~1 ~2 ~3 msg {"a":123} stick bedrock ["persistent_bit"=true] npc poison
    //    help param rawtext
    DynamicCommand::setup(
        "param",
        "dynamic command",
        {
    },
        {
            boolParam,
            intParam,
            floatParam,
            strParam,
            actorParam,
            playerParam,
            BlockPosParam,
            Vec3Param,
            MessageParam,
            JsonValueParam,
            ItemParam,
            BlockParam,
            BlockStateParam,
            ActorTypeParam,
            EffectParam,
            CommandParam,
            RawTextParam,
        },
        {{"testBool",
          "testInt",
          "testFloat",
          "testStr",
          "testActor",
          "testPlayer",
          "testBlockPos",
          "testVec3",
          "testMessage",
          "testJsonValue",
          "testItem",
          "testBlock",
          "testBlockState",
          "testActorType",
          "testEffect",
          "testCommand",
          "testRawText"}},
        [](DynamicCommand const&,
           CommandOrigin const&,
           CommandOutput&                                           output,
           std::unordered_map<std::string, DynamicCommand::Result>& results) {
            for (auto& [name, result] : results) { output.success(result.toDebugString()); }
        },
        CommandPermissionLevel::Any
    );
}

void setupTestEnumCommand() {
    using ParamType = DynamicCommand::ParameterType;
    using Param     = DynamicCommand::ParameterData;
    DynamicCommand::setup(
        "testenum",        // command name
        "dynamic command", // command description
        {
  // enums{enumName, {values...}}
            {"TestEnum1", {"add", "remove"}},
            {"TestEnum2", {"list"}         },
    },
        {
            // parameters(type, name, [optional], [enumOptions(also enumName)], [identifier])
            // identifier: used to identify unique parameter data, if idnetifier is not set,
            // it is set to be the same as enumOptions or name (identifier = enumOptions.empty() ? name:enumOptions)
            Param("testEnum", ParamType::Enum, "TestEnum1", "", CommandParameterOption::EnumAutocompleteExpansion),
            Param("testEnum", ParamType::Enum, "TestEnum2", "", CommandParameterOption::EnumAutocompleteExpansion),
            Param("testInt", ParamType::Int, true),
        },
        {
            // overloads{ (type == Enum ? enumOptions : name) ...}
            {"TestEnum1", "testInt"}, // testenum <add|remove> [testInt]
            {"TestEnum2"},            // testenum <list>
        },
        // dynamic command callback
        [](DynamicCommand const&,
           CommandOrigin const&,
           CommandOutput&                                           output,
           std::unordered_map<std::string, DynamicCommand::Result>& results) {
            auto& action = results["testEnum"].getRaw<std::string>();
            switch (do_hash(action.c_str())) {
            case "add"_h:
                if (results["testInt"].isSet) output.success(fmt::format("add {}", results["testInt"].getRaw<int>()));
                else output.success("add nothing");
                break;
            case "remove"_h:
                if (results["testInt"].isSet)
                    output.success(fmt::format("remove {}", results["testInt"].getRaw<int>()));
                else output.success("remove nothing");
                break;
            case "list"_h:
                output.success("list");
                break;
            default:
                break;
            }
        },
        CommandPermissionLevel::GameDirectors
    );
}

void setupExampleCommand() {
    using ParamType = DynamicCommand::ParameterType;
    // create a dynamic command
    auto command = DynamicCommand::createCommand("testcmd", "dynamic command", CommandPermissionLevel::GameDirectors);

    auto& optionsAdd  = command->setEnum("TestOperation1", {"add", "remove"});
    auto& optionsList = command->setEnum("TestOperation2", {"list"});

    command->mandatory("testEnum", ParamType::Enum, optionsAdd, CommandParameterOption::EnumAutocompleteExpansion);
    command->mandatory("testEnum", ParamType::Enum, optionsList, CommandParameterOption::EnumAutocompleteExpansion);
    command->mandatory("testString", ParamType::String);

    command->addOverload({optionsAdd, "testString"}); // dyncmd <add|remove> <testString:string>
    command->addOverload({"TestOperation2"});         // dyncmd <list>

    command->setCallback([](DynamicCommand const&,
                            CommandOrigin const&,
                            CommandOutput&                                           output,
                            std::unordered_map<std::string, DynamicCommand::Result>& results) {
        switch (do_hash(results["testEnum"].getRaw<std::string>().c_str())) {
        case "add"_h:
            output.success(fmt::format("Add - {}", results["testString"].getRaw<std::string>()));
            break;
        case "remove"_h:
            output.success(fmt::format("Remove - {}", results["testString"].getRaw<std::string>()));
            break;
        case "list"_h:
            output.success("List");
            break;
        default:
            break;
        }
    });
    // do not forget to setup the command instance
    DynamicCommand::setup(std::move(command));
}

// "remove command" command
void setupRemoveCommand() {
    auto command = DynamicCommand::createCommand("unregister", "unregister command", CommandPermissionLevel::Any);
    command->setAlias("remove");
    auto name = command->mandatory("name", ParamType::SoftEnum, command->setSoftEnum("CommandNames", {}));
    command->addOverload(name);
    command->setCallback([](DynamicCommand const& cmd,
                            CommandOrigin const&,
                            CommandOutput&                                           output,
                            std::unordered_map<std::string, DynamicCommand::Result>& results) {
        auto& name     = results["name"].getRaw<std::string>();
        auto  fullName = ll::Global<CommandRegistry>->getCommandFullName(name);
        if (fullName == cmd.getCommandName()) {
            output.success("Request unregister itself");

            scheduler.add<DelayTask>(1s, [fullName] {
                auto res = ll::Global<CommandRegistry>->unregisterCommand(fullName);
                if (res) {
                    DynamicCommand::unregisterCommand(fullName);
                    ll::logger.debug("unregister command " + fullName);
                    ((DynamicCommandInstance*)nullptr)
                        ->setSoftEnum("CommandNames", ll::Global<CommandRegistry>->getEnumValues("CommandName"));
                } else ll::logger.error("error in unregister command " + fullName);
            });

            return;
        }
        auto res = ll::Global<CommandRegistry>->unregisterCommand(fullName);
        if (res) {
            DynamicCommand::unregisterCommand(fullName);
            output.success("unregister command " + fullName);
            cmd.getInstance()->setSoftEnum("CommandNames", ll::Global<CommandRegistry>->getEnumValues("CommandName"));
        } else output.error("error in unregister command " + fullName);
    });
    command->setSoftEnum("CommandNames", ll::Global<CommandRegistry>->getEnumValues("CommandName"));
    DynamicCommand::setup(std::move(command));
}

// enum command
void onEnumExecute(
    DynamicCommand const& cmd,
    CommandOrigin const&,
    CommandOutput&                                           output,
    std::unordered_map<std::string, DynamicCommand::Result>& results
) {
    auto enumNames     = ll::Global<CommandRegistry>->getEnumNames();
    auto softEnumNames = ll::Global<CommandRegistry>->getSoftEnumNames();
    cmd.getInstance()->setSoftEnum("EnumNameList", enumNames);
    cmd.getInstance()->addSoftEnumValues("EnumNameList", softEnumNames);
    if (results["name"].isSet) {
        auto& enumName = results["name"].getRaw<std::string>();
        bool  found    = false;
        if (std::find(enumNames.begin(), enumNames.end(), enumName) != enumNames.end()) {
            found = true;
            output.success("§eEnum §l{}§r§e Values:"_tr, enumName);
            for (auto& val : ll::Global<CommandRegistry>->getEnumValues(enumName)) {
                output.success(val);
                // output.addToResultList("enums", val);
            }
            // output.success("Enums: %1$s", {CommandOutputParameter("enums")});
        }
        if (std::find(softEnumNames.begin(), softEnumNames.end(), enumName) != softEnumNames.end()) {
            found = true;
            output.success("§eSoft Enum §l{}§r§e Values:"_tr, enumName);
            for (auto& val : ll::Global<CommandRegistry>->getSoftEnumValues(enumName)) { output.success(val); }
        }
        if (!found) output.error("Enum or Soft Enum \"{}\" not found"_tr, enumName);
    } else {
        output.success("§eEnum Names:");
        for (auto& val : ll::Global<CommandRegistry>->getEnumNames()) { output.success(val); }
        output.success("§eSoft Enum Names:");
        for (auto& val : ll::Global<CommandRegistry>->getSoftEnumNames()) { output.success(val); }
    }
}

void setupEnumCommand() {
    auto command =
        DynamicCommand::createCommand("enum", "get command enum names or values", CommandPermissionLevel::Any);
    command->setAlias("enums");
    auto name = command->mandatory("name", ParamType::SoftEnum, command->setSoftEnum("EnumNameList", {}));
    command->addOverload(name);
    command->addOverload();
    command->setCallback(onEnumExecute);
    auto cmd = DynamicCommand::setup(std::move(command));
    scheduler.add<DelayTask>(1s, [cmd] {
        auto packet = ll::Global<CommandRegistry>->serializeAvailableCommands();
        cmd->setSoftEnum("EnumNameList", packet.getEnumNames());
        cmd->addSoftEnumValues("EnumNameList", packet.getSoftEnumNames());
    });
}

// echo command
void setupEchoCommand() {
    auto command = DynamicCommand::createCommand("echo", "show message", CommandPermissionLevel::Any);
    command->addOverload(command->mandatory("text", ParamType::RawText));
    command->setCallback([](DynamicCommand const&,
                            CommandOrigin const&,
                            CommandOutput&                                           output,
                            std::unordered_map<std::string, DynamicCommand::Result>& results) {
        auto text = results["text"].getRaw<std::string>();
        output.success(text);
    });
    DynamicCommand::setup(std::move(command));
}

LL_AUTO_STATIC_HOOK(
    ServerCommandsDynamicCommandTest,
    HookPriority::Normal,
    ServerCommands::setupStandardServer,
    void,
    Minecraft&             server,
    std::string const&     networkCommands,
    std::string const&     networkTestCommands,
    class PermissionsFile* permissionsFile
) {
    origin(server, networkCommands, networkTestCommands, permissionsFile);
    // Test DynamicCommandRegistry

    setupRemoveCommand();
    setupTestEnumCommand();
    setupTestParamCommand();
    setupExampleCommand();
    setupEnumCommand();
    setupEchoCommand();
}

// #endif // LL_DEBUG
