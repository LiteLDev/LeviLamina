#pragma once

#include "ll/api/command/EnumName.h"

#include "mc/server/commands/CommandRegistry.h"

#include "magic_enum.hpp"

namespace ll::command {

class CommandHandle;

class CommandRegistrar {
    friend CommandHandle;
    struct Impl;
    std::unique_ptr<Impl> impl;

    CommandRegistrar();

    char const* addText(CommandHandle&, std::string_view);

public:
    LLNDAPI static CommandRegistrar& getInstance();

    LLNDAPI CommandRegistry* operator->() const;

    LLNDAPI CommandRegistry& getRegistry() const;

    LLNDAPI CommandHandle& getOrCreateCommand(
        std::string const&     name,
        std::string const&     description = {},
        CommandPermissionLevel requirement = CommandPermissionLevel::Any,
        CommandFlag            flag        = CommandFlagValue::NotCheat
    );
    LLAPI bool tryRegisterEnum(
        std::string const&                                 name,
        std::vector<std::pair<std::string, uint64>> const& values,
        Bedrock::typeid_t<CommandRegistry>                 type,
        CommandRegistry::ParseFn                           parser
    );
    LLAPI bool tryRegisterSoftEnum(std::string const& name, std::vector<std::string> values);

    template <concepts::ConceptFor<std::is_enum> T>
    constexpr bool tryRegisterEnum() {
        static inline std::vector<std::pair<std::string, uint64>> values{[] {
            std::vector<std::pair<std::string, uint64>> vals;
            magic_enum::enum_for_each<T>([&](T enumVal) {
                vals.emplace_back(magic_enum::enum_name(enumVal), (uint64)enumVal);
            });
            return vals;
        }()};
        return tryRegisterEnum(::ll::command::enum_name_v<T>, values, Bedrock::type_id<CommandRegistry, T>(), &CommandRegistry::parse<T>);
    }
    template <concepts::Specializes<SoftEnum> T>
    constexpr bool tryRegisterSoftEnum() {
        static inline std::vector<std::string> values{[] {
            std::vector<std::string> vals;
            magic_enum::enum_for_each<remove_soft_enum_t<T>>([&](remove_soft_enum_t<T> enumVal) {
                vals.emplace_back(magic_enum::enum_name(enumVal));
            });
            return vals;
        }()};
        return tryRegisterSoftEnum(::ll::command::enum_name_v<T>, values);
    }
};
} // namespace ll::command
