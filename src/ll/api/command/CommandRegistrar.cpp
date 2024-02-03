#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/service/Bedrock.h"

namespace ll::command {
struct CommandRegistrar::Impl {
    std::unordered_map<std::string, CommandHandle> commands;
    std::unordered_map<std::string, uint64>        textWithRef;
};

CommandRegistrar::CommandRegistrar() : impl(std::make_unique<Impl>()) {}

CommandRegistrar& CommandRegistrar::getInstance() {
    static CommandRegistrar instance;
    return instance;
}
CommandRegistry& CommandRegistrar::getRegistry() const { return *ll::service::getCommandRegistry(); }

CommandRegistry* CommandRegistrar::operator->() const { return &getRegistry(); }

CommandHandle& CommandRegistrar::getOrCreateCommand(
    std::string const&     name,
    std::string const&     description,
    CommandPermissionLevel requirement,
    CommandFlag            flag
) {
    auto& registry  = getRegistry();
    auto  signature = registry.findCommand(name);
    if (!signature) {
        registry.registerCommand(name, description.c_str(), requirement, flag);
        signature = registry.findCommand(name);
        return impl->commands.try_emplace(name, *this, signature, true).first->second;
    }
    if (impl->commands.contains(signature->name)) {
        return impl->commands.at(signature->name);
    } else {
        return impl->commands.try_emplace(signature->name, *this, signature, false).first->second;
    }
}

bool CommandRegistrar::tryRegisterEnum(
    std::string const&                                 name,
    std::vector<std::pair<std::string, uint64>> const& values,
    Bedrock::typeid_t<CommandRegistry>                 type,
    CommandRegistry::ParseFn                           parser
) {
    auto& registry = getRegistry();
    if (registry.mEnumLookup.contains(name)) {
        return false;
    }
    registry._addEnumValuesInternal(name, values, type, parser);
    return true;
}
bool CommandRegistrar::tryRegisterSoftEnum(std::string const& name, std::vector<std::string> values) {
    auto& registry = getRegistry();
    if (registry.mSoftEnumLookup.contains(name)) {
        return false;
    }
    registry.addSoftEnum(name, std::move(values));
    return true;
}
char const* CommandRegistrar::addText(CommandHandle& handle, std::string_view text) {
    std::string storedName{"ll_text_enum_name_"};
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
