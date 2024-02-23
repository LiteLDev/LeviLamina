#include "ll/api/plugin/Manifest.h"
#include "ll/api/plugin/PluginManagerRegistry.h"
#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"

#include "ll/api/plugin/Plugin.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/plugin/PluginRegistrar.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandRegistry.h"
#include <string>
#include <string_view>


namespace ll::command {
using namespace ll::i18n_literals;

enum LeviCommandOperation : int { load = 0, unload = 1, reload = 2 };
enum LeviCommandOperation2 : int { enable = 0, disable = 1, show = 2 };
struct LeviCommand {
    LeviCommandOperation operation;
    std::string          plugin;
};
struct LeviCommand2 {
    LeviCommandOperation2 operation;
    std::string           plugin;
};

void registerPluginManageCommand() {
    auto& cmd = CommandRegistrar::getInstance()
                    .getOrCreateCommand("levilamina", "LeviLamina's main command"_tr(), CommandPermissionLevel::Host);
    ll::service::getCommandRegistry()->registerAlias("levilamina", "ll");
    cmd.overload<LeviCommand>()
        .required("operation")
        .required("plugin")
        .execute<[](CommandOrigin const& origin, CommandOutput& output, LeviCommand const& param, ::Command const& cmd
                 ) {
            switch (param.operation) {
            case LeviCommandOperation::load:
                if (!ll::plugin::PluginManagerRegistry::getInstance().hasPlugin(param.plugin)) {
                    if (ll::plugin::PluginRegistrar::getInstance().loadPlugin(param.plugin)) {
                        output.success("Load plugin {0} successfully"_tr(param.plugin));
                    } else {
                        output.error("Failed to load plugin {0}"_tr(param.plugin));
                    }
                } else {
                    output.error("Plugin already {0} loaded"_tr(param.plugin));
                }
                break;
            case LeviCommandOperation::unload:
                if (ll::plugin::PluginManagerRegistry::getInstance().hasPlugin(param.plugin)) {
                    if (ll::plugin::PluginRegistrar::getInstance().unloadPlugin(param.plugin)) {
                        output.success("Unload plugin {0} successfully"_tr(param.plugin));
                    } else {
                        output.error("Failed to unload plugin {0}"_tr(param.plugin));
                    }
                } else {
                    output.error("Plugin {0} not found"_tr(param.plugin));
                }
                break;
            case LeviCommandOperation::reload:
                if (ll::plugin::PluginManagerRegistry::getInstance().hasPlugin(param.plugin)) {
                    if (ll::plugin::PluginRegistrar::getInstance().unloadPlugin(param.plugin)
                        && ll::plugin::PluginRegistrar::getInstance().loadPlugin(param.plugin)) {
                        output.success("Reload plugin {0} successfully"_tr(param.plugin));
                    } else {
                        output.error("Failed to reload plugin {0}"_tr(param.plugin));
                    }
                } else {
                    output.error("Plugin {0} not found"_tr(param.plugin));
                }
                break;
            default:
                break;
            }
        }>();
    cmd.overload<LeviCommand2>()
        .required("operation")
        .required("plugin")
        .execute<[](CommandOrigin const& origin, CommandOutput& output, LeviCommand2 const& param, ::Command const& cmd
                 ) {
            switch (param.operation) {
            case LeviCommandOperation2::enable:
                if (ll::plugin::PluginManagerRegistry::getInstance().hasPlugin(param.plugin)) {
                    if (ll::plugin::PluginRegistrar::getInstance().enablePlugin(param.plugin)) {
                        output.success("Enable plugin {0} successfully"_tr(param.plugin));
                    } else {
                        output.error("Failed to enable plugin {0}"_tr(param.plugin));
                    }
                } else {
                    output.error("Plugin {0} not found"_tr(param.plugin));
                }
                break;
            case LeviCommandOperation2::disable:
                if (ll::plugin::PluginManagerRegistry::getInstance().hasPlugin(param.plugin)) {
                    if (ll::plugin::PluginRegistrar::getInstance().disablePlugin(param.plugin)) {
                        output.success("Disable plugin {0} successfully"_tr(param.plugin));
                    } else {
                        output.error("Failed to disable plugin {0}"_tr(param.plugin));
                    }
                } else {
                    output.error("Plugin {0} not found"_tr(param.plugin));
                }
                break;
            case LeviCommandOperation2::show: {
                auto plugin = ll::plugin::PluginManagerRegistry::getInstance().getPlugin(param.plugin);
                if (plugin) {
                    plugin::Manifest const& man = plugin->getManifest();
                    output.success("Name: {0}\nAuthor: {1}\nDescription: {2}\nType: {3}\nVersion: {4}\nEntry: {5}"_tr(
                        man.name,
                        man.author,
                        man.description,
                        man.type,
                        man.version->to_string(),
                        man.entry
                    ));
                } else {
                    output.error("Plugin {0} not found"_tr(param.plugin));
                }
                break;
            }
            }
        }>(

        );
    cmd.overload().text("list").execute<[](CommandOrigin const& origin, CommandOutput& output) {
        unsigned short amount = 0;
        std::string    plugins;
        ll::plugin::PluginManagerRegistry::getInstance().forEachPluginWithType(
            [&amount, &plugins](std::string_view type, std::string_view name, plugin::Plugin&) {
                ++amount;
                plugins = plugins.append(name).append(", ");
                return true;
            }
        );
        if (!plugins.empty()) {
            plugins.resize(plugins.size() - 2);
        }
        output.success("There are {0} plugins: {1}"_tr(amount, plugins));
    }>();
}
} // namespace ll::command
