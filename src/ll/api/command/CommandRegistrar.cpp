#include "ll/api/command/CommandRegistrar.h"

#include <memory>
#include <string>
#include <string_view>
#include <unordered_map>
#include <utility>
#include <vector>

#include "ll/api/base/Containers.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/OverloadData.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/StringUtils.h"

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandPermissionLevel.h"

namespace ll::command {
struct CommandRegistrar::Impl {
    UnorderedStringMap<CommandHandle> commands;
    UnorderedStringMap<uint64>        textWithRef;
    std::recursive_mutex              mutex;
};

CommandRegistrar::CommandRegistrar() : impl(std::make_unique<Impl>()) {}

CommandRegistrar& CommandRegistrar::getInstance() {
    static CommandRegistrar instance;
    return instance;
}
CommandRegistry& CommandRegistrar::getRegistry() const { return *ll::service::getCommandRegistry(); }

CommandHandle& CommandRegistrar::getOrCreateCommand(
    std::string const&     name,
    std::string const&     description,
    CommandPermissionLevel requirement,
    CommandFlag            flag,
    std::weak_ptr<plugin::Plugin> /*plugin*/
) {
    std::lock_guard lock{impl->mutex};
    auto&           registry  = getRegistry();
    auto            signature = registry.findCommand(name);
    if (!signature) {
        registry.registerCommand(name, description.c_str(), requirement, flag);
        signature = registry.findCommand(name);
        if (!signature) {
            std::terminate();
        }
        return impl->commands.try_emplace(signature->name, *this, *signature, true).first->second;
    } else if (impl->commands.contains(signature->name)) {
        return impl->commands.at(signature->name);
    } else {
        return impl->commands.try_emplace(signature->name, *this, *signature, false).first->second;
    }
}

void CommandRegistrar::disablePluginCommands(std::string_view pluginName) {
    std::lock_guard lock{impl->mutex};
    for (auto& [name, handle] : impl->commands) {
        handle.disablePluginOverloads(pluginName);
    }
}

bool CommandRegistrar::hasEnum(std::string const& name) { return getRegistry().mEnumLookup.contains(name); }

static auto& toLower(std::vector<std::pair<std::string, uint64>>& vec) {
    for (auto& [k, v] : vec) {
        k = string_utils::toSnakeCase(k);
    }
    return vec;
}

bool CommandRegistrar::tryRegisterEnum(
    std::string const&                          name,
    std::vector<std::pair<std::string, uint64>> values,
    Bedrock::typeid_t<CommandRegistry>          type,
    CommandRegistry::ParseFn                    parser
) {
    auto& registry = getRegistry();
    if (registry.mEnumLookup.contains(name)) {
        return false;
    }
    registry._addEnumValuesInternal(name, toLower(values), type, parser);
    return true;
}
bool CommandRegistrar::addEnumValues(
    std::string const&                          name,
    std::vector<std::pair<std::string, uint64>> values,
    Bedrock::typeid_t<CommandRegistry>          type
) {
    auto& registry = getRegistry();
    if (!registry.mEnumLookup.contains(name)) {
        return false;
    }
    registry._addEnumValuesInternal(name, toLower(values), type, nullptr);
    return true;
}
bool CommandRegistrar::tryRegisterRuntimeEnum(
    std::string const&                          name,
    std::vector<std::pair<std::string, uint64>> values
) {
    return tryRegisterEnum(name, std::move(values), Bedrock::type_id<CommandRegistry, std::pair<std::string, uint64>>(), &CommandRegistry::parse<std::pair<std::string, uint64>>);
}
bool CommandRegistrar::addRuntimeEnumValues(
    std::string const&                          name,
    std::vector<std::pair<std::string, uint64>> values
) {
    return addEnumValues(name, std::move(values), Bedrock::type_id<CommandRegistry, std::pair<std::string, uint64>>());
}
bool CommandRegistrar::hasSoftEnum(std::string const& name) { return getRegistry().mSoftEnumLookup.contains(name); }

bool CommandRegistrar::tryRegisterSoftEnum(std::string const& name, std::vector<std::string> values) {
    auto& registry = getRegistry();
    if (registry.mSoftEnumLookup.contains(name)) {
        return false;
    }
    registry.addSoftEnum(name, std::move(values));
    return true;
}

bool CommandRegistrar::addSoftEnumValues(std::string const& name, std::vector<std::string> values) {
    auto& registry = getRegistry();
    if (!registry.mSoftEnumLookup.contains(name)) {
        return false;
    }
    registry.addSoftEnumValues(name, std::move(values));
    return true;
}

bool CommandRegistrar::removeSoftEnumValues(std::string const& name, std::vector<std::string> values) {
    auto& registry = getRegistry();
    if (!registry.mSoftEnumLookup.contains(name)) {
        return false;
    }
    registry.removeSoftEnumValues(name, std::move(values));
    return true;
}

bool CommandRegistrar::setSoftEnumValues(std::string const& name, std::vector<std::string> values) {
    auto& registry = getRegistry();
    if (!registry.mSoftEnumLookup.contains(name)) {
        return false;
    }
    registry.setSoftEnumValues(name, std::move(values));
    return true;
}

char const* CommandRegistrar::addText(CommandHandle& /*handle*/, std::string_view text) {
    std::lock_guard lock{impl->mutex};
    std::string     storedName{"ll_text_enum_name_"};
    storedName += text;
    if (impl->textWithRef.contains(storedName)) {
        impl->textWithRef.at(storedName)++;
    } else {
        impl->textWithRef.try_emplace(storedName, 1);
        tryRegisterEnum(
            storedName, {{std::string{text}, 0}},
        Bedrock::type_id<CommandRegistry, OverloadData::Placeholder>(),
        &CommandRegistry::parse<OverloadData::Placeholder>
        );
    }
    return impl->textWithRef.find(storedName)->first.c_str();
}
} // namespace ll::command
