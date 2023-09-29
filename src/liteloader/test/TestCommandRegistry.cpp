#include "liteloader/api/command/RegCommandAPI.h"
#include "liteloader/api/memory/Hook.h"
#include "liteloader/core/LiteLoader.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/server/commands/ServerCommands.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/Command.h"


class TestCommand : public Command {
    enum Operation : int { List, Install, Uninstall, Enable, Disable };

    Operation   operation = static_cast<Operation>(-1);
    std::string target;
    int         index        = -1;
    bool        target_isSet = false;
    bool        index_isSet  = false;


public:
    void execute(CommandOrigin const& /*ori*/, CommandOutput& /*output*/) const override {
        switch (operation) {
        case Operation::List:
            if (target_isSet || index_isSet) {
                ll::logger.info("Command Operation::List is set");
            } else ll::logger.info("Command Operation::List isn't set");
            break;
        case Operation::Install:
            ll::logger.info("Command Operation::Install");
            break;
        case Operation::Uninstall:
            ll::logger.info("Command Operation::Uninstall");
            break;

        case Operation::Enable:
            ll::logger.info("Command Operation::Enable");
            break;

        case Operation::Disable:
            ll::logger.info("Command Operation::Disable");
            break;

        default:
            ll::logger.info("Command default");
            break;
        }
    }

    static void setup(CommandRegistry& registry) {

        using namespace ll::registerCommandHelper;

        registry.registerCommand(
            "testcommand",
            "LiteLoader CommandRegistry Test",
            CommandPermissionLevel::GameDirectors,
            CommandFlagValue::None,
            CommandFlagValue::NotCheat
        );

        registry.addSoftEnum("SoftEnumName", {"one_softenum", "two_softenum", "three_softenum", "four_softenum"});

        // addons list
        registry.addEnum<Operation>(
            "Operation_List",
            {
                {"enum_list", Operation::List}
        }
        );
        registry.registerOverload<TestCommand>(
            "testcommand",
            makeMandatory<CommandParameterDataType::Enum>(&TestCommand::operation, "operation", "Operation_List")
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            makeOptional<CommandParameterDataType::SoftEnum>(
                &TestCommand::target,
                "softEnumName",
                "SoftEnumName",
                &TestCommand::target_isSet
            )
        );
        registry.registerOverload<TestCommand>(
            "testcommand",
            makeMandatory<CommandParameterDataType::Enum>(&TestCommand::operation, "operation", "Operation_List")
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            makeOptional<CommandParameterDataType::Basic>(
                &TestCommand::index,
                "enumIndex",
                nullptr,
                &TestCommand::index_isSet
            )
        );

        // addons install
        registry.addEnum<Operation>(
            "Operation_Install",
            {
                {"install", Operation::Install}
        }
        );

        // try {

        //     registry.registerOverload<TestCommand>(
        //         "testcommand",
        //         makeMandatory<CommandParameterDataType::Enum>(
        //             &TestCommand::operation,
        //             "operation",
        //             "Operation_Addons_Install"
        //         )
        //             .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
        //         makeMandatory<CommandParameterDataType::Basic>(&TestCommand::target, "enumName")
        //     );
        // } catch (std::exception const& e) {
        //     ll::logger.error(
        //         "Exception occurred in registerOverload Operation_Addons_Install"
        //     );
        //     ll::logger.error("Error message: {} , type: {}", TextEncoding::toUTF8(e.what()), typeid(e).name());
        // } catch (...) {
        //     ll::logger.error(
        //         "Unknown Exception occurred in registerOverload Operation_Addons_Install"
        //     );
        // }


        // addons uninstall

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
            makeMandatory<CommandParameterDataType::Enum>(&TestCommand::operation, "operation", "Operation_Others")
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            makeMandatory<CommandParameterDataType::SoftEnum>(
                &TestCommand::target,
                "enumName",
                "EnumName",
                &TestCommand::target_isSet
            )
        );
        registry.registerOverload<TestCommand>(
            "testcommand",
            makeMandatory<CommandParameterDataType::Enum>(&TestCommand::operation, "operation", "Operation_Others")
                .addOptions(CommandParameterOption::EnumAutocompleteExpansion),
            makeMandatory<CommandParameterDataType::Basic>(
                &TestCommand::index,
                "enumIndex",
                nullptr,
                &TestCommand::index_isSet
            )
        );
    }
};

LL_AUTO_STATIC_HOOK(
    ServerCommandsService,
    HookPriority::Normal,
    ServerCommands::setupStandardServer,
    void,
    Minecraft&             server,
    std::string const&     networkCommands,
    std::string const&     networkTestCommands,
    class PermissionsFile* permissionsFile
) {
    origin(server, networkCommands, networkTestCommands, permissionsFile);
    // Test CommandRegistry
    try {
        TestCommand::setup(server.getCommands().getRegistry());
    } catch (std::exception const& e) {
        ll::logger.error("Exception occurred in TestCommand::setup");
        ll::logger.error("Error message: {} , type: {}", TextEncoding::toUTF8(e.what()), typeid(e).name());
    } catch (...) { ll::logger.error("Unknown Exception occurred in TestCommand::setup!"); }
}
