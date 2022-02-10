#include "AddonsHelper.h"
#include <Main/Config.h>
#include <EventAPI.h>
#include <RegCommandAPI.h>
#include <LLAPI.h>
#include <MC/CommandOrigin.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandPosition.hpp>
#include <MC/CommandRegistry.hpp>
#include <MC/PropertiesSettings.hpp>
#include <GlobalServiceAPI.h>
#include <FormUI.h>
#include <filesystem>
#include <vector>
using namespace std;
using namespace RegisterCommandHelper;

std::vector<Addon> addons;

bool BuildAddonList()
{
    string levelPath = "worlds/" + Global<PropertiesSettings>->getLevelName();
    string path = levelPath + "/world_behavior_packs.json";
}

bool AddonsManager::install(std::string path)
{

}

bool AddonsManager::uninstall(std::string nameOrUuid)
{

}

std::vector<Addon*> AddonsManager::getAllAddons()
{
    std::vector<Addon*> res;
    for (auto& addon : addons)
        res.push_back(&addon);
    return res;
}

Addon* AddonsManager::getAddon(std::string nameOrUuid)
{
    for (auto& addon : addons)
        if (addon.name == nameOrUuid || addon.uuid == nameOrUuid)
            return &addon;
    return nullptr;
}


void ExecuteAddonsCommand(CommandOutput& output)
{
    ;
}

class AddonsCommand : public Command {
    enum class Operation
    {
        List, Install, Uninstall
    };

    Operation operation;
    std::string target;

public:
    void execute(CommandOrigin const& ori, CommandOutput& output) const override
    {
        ExecuteAddonsCommand(output);
    }

    static void setup(CommandRegistry* registry) {
        registry->registerCommand("addons", "LiteLoaderBDS - Addons Helper",
            CommandPermissionLevel::GameMasters, { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });

        // addons list
        registry->addEnum<Operation>("Operation_Addons_List", {
            {"list", Operation::List}
        });
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(&AddonsCommand::operation, "Operation", "Operation_Addons_List").addOptions((CommandParameterOption)1)
        );

        // addons install
        registry->addEnum<Operation>("Operation_Addons_Install", {
            {"install", Operation::Install}
        });
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(&AddonsCommand::operation, "Operation", "Operation_Addons_Install").addOptions((CommandParameterOption)1),
            makeMandatory<CommandParameterDataType::NORMAL>(&AddonsCommand::target, "Target")
        );

        // addons uninstall
        vector<string> addonsList;
        registry->addSoftEnum("AddonName", addonsList);

        registry->addEnum<Operation>("Operation_Addons_Uninstall", {
            {"uninstall", Operation::Uninstall}
        });
        registry->registerOverload<AddonsCommand>(
            "addons",
            makeMandatory<CommandParameterDataType::ENUM>(&AddonsCommand::operation, "Operation", "Operation_Addons_Uninstall").addOptions((CommandParameterOption)1),
            makeMandatory<CommandParameterDataType::SOFT_ENUM>(&AddonsCommand::target, "AddonName", "AddonName")
        );
    }
};

void InitAddonsHelper()
{
    BuildAddonList();

    if (LL::globalConfig.enableAddonsHelper)
    {
        Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands
            AddonsCommand::setup(ev.mCommandRegistry);
            return true;
        });
    }
}