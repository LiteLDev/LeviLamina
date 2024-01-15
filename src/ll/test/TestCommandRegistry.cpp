
#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/LeviLamina.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandRawText.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/commands/ServerCommands.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/Command.h"


class TestCommand : public Command {
    enum Operation : int { List, Install, Uninstall, Enable, Disable };

    Operation      operation = static_cast<Operation>(-1);
    std::string    target;
    int            index        = -1;
    bool           target_isSet = false;
    bool           index_isSet  = false;
    CommandRawText testTest;


public:
    void execute(CommandOrigin const& /*ori*/, CommandOutput& /*output*/) const override {
        switch (operation) {
        case Operation::List:
            if (target_isSet || index_isSet) {
                ll::logger.debug("Command Operation::List is set");
            } else ll::logger.debug("Command Operation::List isn't set");
            break;
        case Operation::Install:
            ll::logger.debug("Command Operation::Install");
            break;
        case Operation::Uninstall:
            ll::logger.debug("Command Operation::Uninstall");
            break;

        case Operation::Enable:
            ll::logger.debug("Command Operation::Enable");
            break;

        case Operation::Disable:
            ll::logger.debug("Command Operation::Disable");
            break;

        default:
            ll::logger.debug("Command default");
            break;
        }
    }

    static void setup(CommandRegistry& registry) {

        registry
            .registerCommand("testcommand", "LeviLamina CommandRegistry Test", CommandPermissionLevel::GameDirectors);

        registry.addSoftEnum("SoftEnumName", {"one_softenum", "two_softenum", "three_softenum", "four_softenum"});

        registry.addEnum<Operation>(
            "Operation_List",
            {
                {"enum_list", Operation::List}
        }
        );
        registry.registerOverload<TestCommand>(
            "testcommand",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &TestCommand::operation,
                "operation",
                "Operation_List"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeOptional<CommandParameterDataType::SoftEnum>(
                &TestCommand::target,
                "SoftEnumName",
                "SoftEnumName",
                &TestCommand::target_isSet
            )
        );
        registry.registerOverload<TestCommand>(
            "testcommand",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &TestCommand::operation,
                "operation",
                "Operation_List"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeOptional<CommandParameterDataType::Basic>(
                &TestCommand::index,
                "enumIndex",
                nullptr,
                &TestCommand::index_isSet
            )
        );

        registry.addEnum<Operation>(
            "Operation_Install",
            {
                {"install", Operation::Install}
        }
        );


        registry.registerOverload<TestCommand>(
            "testcommand",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &TestCommand::operation,
                "operation",
                "Operation_Install"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeMandatory<CommandParameterDataType::Basic>(&TestCommand::target, "enumName")
        );

        registry.addEnum<Operation>(
            "Operation_Others",
            {
                {"uninstall", Operation::Uninstall},
                {"remove",    Operation::Uninstall},
                {"enable",    Operation::Enable   },
                {"disable",   Operation::Disable  },
        }
        );
        registry.registerOverload<TestCommand>(
            "testcommand",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &TestCommand::operation,
                "operation",
                "Operation_Others"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeMandatory<CommandParameterDataType::SoftEnum>(
                &TestCommand::target,
                "enumName",
                "SoftEnumName",
                &TestCommand::target_isSet
            )
        );
        registry.registerOverload<TestCommand>(
            "testcommand",
            CommandParameterData::makeMandatory<CommandParameterDataType::Enum>(
                &TestCommand::operation,
                "operation",
                "Operation_Others"
            )
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            CommandParameterData::makeMandatory<CommandParameterDataType::Basic>(
                &TestCommand::index,
                "enumIndex",
                nullptr,
                &TestCommand::index_isSet
            )
        );
        registry.registerOverload<TestCommand>(
            "testcommand",
            CommandParameterData::makeMandatory<CommandParameterDataType::Basic>(&TestCommand::testTest, "rawtext")
        );
    }
};

static bool reg = [] {
    using namespace ll::event;
    EventBus::getInstance().emplaceListener<ServerStartedEvent>([](ServerStartedEvent&) {
        TestCommand::setup(ll::service::getCommandRegistry());
    });
    return true;
}();
