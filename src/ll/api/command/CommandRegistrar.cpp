#include "ll/api/command/CommandRegistrar.h"

#include <memory>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/base/Containers.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/OverloadData.h"
#include "ll/api/command/runtime/RuntimeEnum.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/mod/ModRegistrar.h"

#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/world/Minecraft.h"

namespace ll::command {
struct CommandRegistrar::Impl {
    StringNodeMap<CommandHandle> commands;
    StringNodeMap<uint64>        textWithRef;
    std::recursive_mutex         mutex;
};

CommandRegistrar::CommandRegistrar(bool isClientSide) : impl(std::make_unique<Impl>()), isClient(isClientSide) {
    auto& reg = mod::ModManagerRegistry::getInstance();
    reg.executeOnModDisable([this](std::string_view name) {
        if (getGamingStatus() == GamingStatus::Running) {
            disableModCommands(name);
        }
    });
    reg.executeOnModLoad([this, isClientSide](std::string_view name) {
        if (service::getCommandRegistry(isClientSide)) {
            addSoftEnumValues(std::string{mod::modsEnumName}, {std::string{name}});
        }
    });
}

CommandRegistrar& CommandRegistrar::getInstance(bool isClientSide) {
    static CommandRegistrar serverInstance(false);
    static CommandRegistrar clientInstance(true);
    return isClientSide ? clientInstance : serverInstance;
}

void CommandRegistrar::clear() {
    std::lock_guard lock{impl->mutex};
    impl->commands.clear();
    impl->textWithRef.clear();
}

CommandRegistry& CommandRegistrar::getRegistry() const { return *service::getCommandRegistry(isClient); }

CommandHandle& CommandRegistrar::getOrCreateCommand(
    std::string const&     name,
    std::string const&     description,
    CommandPermissionLevel requirement,
    CommandFlag            flag,
    std::weak_ptr<mod::Mod> /*mod*/
) {
    std::lock_guard lock{impl->mutex};
    auto&           registry  = getRegistry();
    auto            signature = registry.findCommand(name);
    if (!signature) {
        if (isClient) {
            flag |= CommandFlagValue::SyncLocal;
        }
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

Expected<std::unique_ptr<::Command>> CommandRegistrar::compileCommand(
    std::string_view    commandStr,
    ::CommandOrigin&    origin,
    ::CurrentCmdVersion version
) const noexcept try {
    auto minecraft = service::getMinecraft(isClient);
    if (!minecraft.has_value()) {
        return makeI18nStringError<"Minecraft service is unavailable">();
    }
    auto&        commands      = *minecraft->mCommands;
    HashedString hashedCommand = commandStr;
    {
        Error error;
        auto* compiled = commands.compileCommand(hashedCommand, origin, version, [&](std::string const& errMsg) {
            error.join(makeStringError(errMsg));
        });
        if (!compiled && !error) {
            return makeI18nStringError<"compileCommand returned nullptr">();
        }
        if (error) {
            return forwardError(error);
        }
    }
    auto& compiledCommandMap = *commands.mCompiledCommandMap;
    auto  compiledIt         = compiledCommandMap.find(hashedCommand);
    if (compiledIt == compiledCommandMap.end()) {
        return makeI18nStringError<"compiled command was not stored in mCompiledCommandMap">();
    }
    auto ownedCommand = std::move(compiledIt->second);
    compiledCommandMap.erase(compiledIt);
    if (!ownedCommand) {
        return makeI18nStringError<"compiled command ownership transfer failed">();
    }
    return ownedCommand;
} catch (...) {
    return makeExceptionError();
}

namespace detail {
static thread_local bool isExecutingCommand = false;

LLAPI void printCommandError(::Command const& command, ::CommandOutput& output) noexcept {
    try {
        getLogger().error("Error in command {}:", command.getCommandName());
        output.error("command threw an exception");
    } catch (...) {}
    error_utils::printCurrentException(getLogger());
}

void mayPrintCommandError(::Command const& command, ::CommandOutput& output, CommandOrigin const& origin) {
    if (isExecutingCommand) {
        throw;
    }
    try {
        getLogger().error("Error in command {}:"_tr(command.getCommandName()));
        output.error("command threw an exception"_trl(origin.getLocaleCode()));
    } catch (...) {}
    error_utils::printCurrentException(getLogger());
}
} // namespace detail

CommandOutput CommandRegistrar::executeCommand(
    std::string_view    commandStr,
    ::CommandOrigin&    origin,
    ::CommandOutputType outputType,
    ::CurrentCmdVersion version
) const noexcept {
    CommandOutput output(outputType);
    auto          compileResult = compileCommand(commandStr, origin, version);
    if (!compileResult) {
        compileResult.error().log(output);
        return output;
    }
    auto& command = *compileResult.value();
    try {
        struct Guard {
            bool& isExecuting;
            Guard(bool& isExecuting) : isExecuting(isExecuting) { isExecuting = true; }
            ~Guard() { isExecuting = false; }
        };
        Guard guard(detail::isExecutingCommand);
        command.run(origin, output);
    } catch (...) {
        makeExceptionError().error().log(output);
    }
    return output;
}

void CommandRegistrar::disableModCommands(std::string_view modName) {
    std::lock_guard lock{impl->mutex};
    for (auto& [name, handle] : impl->commands) {
        handle.disableModOverloads(modName);
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
    CommandRegistry::ParseFunction              parser
) {
    auto& registry = getRegistry();
    if (auto iter = registry.mEnumLookup.find(name); iter != registry.mEnumLookup.end()) {
        registry.mEnums[iter->second].parse = parser;
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
    return tryRegisterEnum(
        name,
        std::move(values),
        Bedrock::type_id<CommandRegistry, RuntimeEnum>(),
        &CommandRegistry::parse<RuntimeEnum>
    );
}
bool CommandRegistrar::addRuntimeEnumValues(
    std::string const&                          name,
    std::vector<std::pair<std::string, uint64>> values
) {
    return addEnumValues(name, std::move(values), Bedrock::type_id<CommandRegistry, RuntimeEnum>());
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
            storedName,
            {
                {std::string{text}, 0}
        },
            Bedrock::type_id<CommandRegistry, OverloadData::Placeholder>(),
            &CommandRegistry::parse<OverloadData::Placeholder>
        );
    }
    return impl->textWithRef.find(storedName)->first.c_str();
}
} // namespace ll::command
