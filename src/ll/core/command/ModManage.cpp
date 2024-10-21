#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/core/Config.h"

#include "ll/api/mod/Mod.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/mod/ModRegistrar.h"

#include "mc/deps/core/utility/Util.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandRegistry.h"

#include <string>
#include <string_view>
#include <vector>


namespace ll::command {
enum LeviCommandOperation : int {
    unload,
    reload,
    reactivate,
};
enum LeviCommandOperation2 : int {
    enable,
    disable,
    show,
};
struct LeviCommand {
    LeviCommandOperation    operation;
    SoftEnum<mod::ModNames> mod;
};
struct LeviCommand2 {
    LeviCommandOperation2   operation;
    SoftEnum<mod::ModNames> mod;
};
struct LeviCommand3 {
    SoftEnum<mod::ModNames> mod;
};

void registerModManageCommand() {
    auto config = ll::getLeviConfig().modules.command.modManageCommand;
    if (!config.enabled) {
        return;
    }
    command::CommandRegistrar::getInstance().tryRegisterSoftEnum(
        std::string{mod::modsEnumName},
        mod::ModRegistrar::getInstance().getSortedModNames()
    );
    auto& cmd = CommandRegistrar::getInstance()
                    .getOrCreateCommand(Util::toLower(selfModName), "LeviLamina's main command"_tr(), config.permission)
                    .alias("ll");
    cmd.overload<LeviCommand3>().text("load").required("mod").execute(
        [](CommandOrigin const&, CommandOutput& output, LeviCommand3 const& param) {
            if (ll::mod::ModManagerRegistry::getInstance().hasMod(param.mod)) {
                output.error("Mod {0} already loaded"_tr(param.mod));
                return;
            }
            if (auto res = ll::mod::ModRegistrar::getInstance().loadMod(param.mod); res) {
                output.success("Load mod {0} successfully"_tr(param.mod));
            } else {
                output.error("Failed to load mod {0}"_tr(param.mod));
                res.error().log(output);
            }
        }
    );
    cmd.overload<LeviCommand>()
        .required("operation")
        .required("mod")
        .execute([](CommandOrigin const&, CommandOutput& output, LeviCommand const& param) {
            if (!ll::mod::ModManagerRegistry::getInstance().hasMod(param.mod)) {
                output.error("Mod {0} not found"_tr(param.mod));
                return;
            }
            auto& reg = ll::mod::ModRegistrar::getInstance();
            switch (param.operation) {
            case LeviCommandOperation::unload:
                if (auto res = reg.unloadMod(param.mod); res) {
                    output.success("Unload mod {0} successfully"_tr(param.mod));
                } else {
                    output.error("Failed to unload mod {0}"_tr(param.mod));
                    res.error().log(output);
                }
                break;
            case LeviCommandOperation::reload:
                if (auto res = reg.unloadMod(param.mod).and_then([&] { return reg.loadMod(param.mod); }); res) {
                    output.success("Reload mod {0} successfully"_tr(param.mod));
                } else {
                    output.error("Failed to reload mod {0}"_tr(param.mod));
                    res.error().log(output);
                }
                break;
            case LeviCommandOperation::reactivate:
                if (auto res = reg.disableMod(param.mod).and_then([&] { return reg.enableMod(param.mod); }); res) {
                    output.success("Reactivate mod {0} successfully"_tr(param.mod));
                } else {
                    output.error("Failed to reactivate mod {0}"_tr(param.mod));
                    res.error().log(output);
                }
                break;
            default:
                LL_UNREACHABLE;
            }
        });
    cmd.overload<LeviCommand2>()
        .required("operation")
        .required("mod")
        .execute([](CommandOrigin const&, CommandOutput& output, LeviCommand2 const& param) {
            if (!ll::mod::ModManagerRegistry::getInstance().hasMod(param.mod)) {
                output.error("Mod {0} not found"_tr(param.mod));
                return;
            }
            auto& reg = ll::mod::ModRegistrar::getInstance();
            switch (param.operation) {
            case LeviCommandOperation2::enable:
                if (auto res = reg.enableMod(param.mod); res) {
                    output.success("Enable mod {0} successfully"_tr(param.mod));
                } else {
                    output.error("Failed to enable mod {0}"_tr(param.mod));
                    res.error().log(output);
                }
                break;
            case LeviCommandOperation2::disable:
                if (auto res = reg.disableMod(param.mod); res) {
                    output.success("Disable mod {0} successfully"_tr(param.mod));
                } else {
                    output.error("Failed to disable mod {0}"_tr(param.mod));
                    res.error().log(output);
                }
                break;
            case LeviCommandOperation2::show: {
                auto mod = ll::mod::ModManagerRegistry::getInstance().getMod(param.mod);
                if (!mod) {
                    output.error("Mod {0} not found"_tr(param.mod));
                    return;
                }
                mod::Manifest const& man = mod->getManifest();
                output.success("Name: {0}"_tr(man.name));
                if (man.author) {
                    output.success("Author: {0}"_tr(*man.author));
                }
                if (man.description) {
                    output.success("Description: {0}"_tr(*man.description));
                }
                output.success("Type: {0}"_tr(man.type));
                if (man.version) {
                    output.success("Version: {0}"_tr(man.version->to_string()));
                }
                output.success("Entry: {0}"_tr(man.entry));
                break;
            }
            default:
                LL_UNREACHABLE;
            }
        });
    cmd.overload().text("list").execute([](CommandOrigin const&, CommandOutput& output) {
        size_t      amount = 0;
        std::string mods;
        for (auto& mod : ll::mod::ModManagerRegistry::getInstance().mods()) {
            ++amount;
            mods = mods.append(mod.getName()).append(", ");
        }
        if (!mods.empty()) {
            mods.resize(mods.size() - 2);
        }
        output.success("There are {0} mods: {1}"_tr(amount, mods));
    });
}
} // namespace ll::command
