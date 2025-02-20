#pragma once

#include <cstddef>
#include <stdexcept>
#include <string>
#include <string_view>
#include <type_traits>

#include "ll/api/base/StdInt.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/EnumName.h"
#include "ll/api/command/Optional.h"
#include "ll/api/command/SoftEnum.h"

#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {
template <class T>
struct ParamTraitsBase {
    static constexpr CommandParameterDataType    dataType() { return CommandParameterDataType::Basic; }
    static constexpr CommandParameterOption      options() { return CommandParameterOption::None; }
    static inline CommandRegistry::ParseFunction parseFn() { return &CommandRegistry::parse<T>; }
    static constexpr std::string_view            enumNameOrPostfix() { return {}; }
    static constexpr std::string_view            subChain() { return {}; }
    static Bedrock::typeid_t<CommandRegistry>    typeId() { return Bedrock::type_id<CommandRegistry, T>(); }
    static constexpr void                        transformData(CommandParameterData&) {}
};
template <class T>
struct ParamTraits : ParamTraitsBase<T> {};
template <class T>
struct EnumParser {
    bool
    operator()(CommandRegistry const& registry, void* storage, CommandRegistry::ParseToken const& token, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const {
        auto iter = registry.mEnumValueLookup.find(token.toString());
        if (iter == registry.mEnumValueLookup.end()) {
            return false;
        }
        *(T*)storage = (T)iter->second;
        return true;
    }
};
template <concepts::Require<std::is_enum> T>
struct ParamTraits<T> : ParamTraitsBase<T> {
    using Parser = EnumParser<T>;
    static constexpr CommandParameterDataType dataType() { return CommandParameterDataType::Enum; }
    static constexpr CommandParameterOption   options() { return CommandParameterOption::EnumAutocompleteExpansion; }
    static constexpr std::string_view         enumNameOrPostfix() { return enum_name_v<T>; }
    static void transformData(CommandParameterData&) { CommandRegistrar::getInstance().template tryRegisterEnum<T>(); }
};
template <concepts::Specializes<SoftEnum> T>
struct ParamTraits<T> : ParamTraitsBase<T> {
    static constexpr CommandParameterDataType    dataType() { return CommandParameterDataType::SoftEnum; }
    static constexpr CommandParameterOption      options() { return CommandParameterOption::EnumAutocompleteExpansion; }
    static inline CommandRegistry::ParseFunction parseFn() { return &CommandRegistry::parse<std::string>; }
    static constexpr std::string_view            enumNameOrPostfix() { return enum_name_v<T>; }
    static Bedrock::typeid_t<CommandRegistry>    typeId() { return Bedrock::type_id<CommandRegistry, std::string>(); }
    static void                                  transformData(CommandParameterData&) {
        CommandRegistrar::getInstance().template tryRegisterSoftEnum<T>();
    }
};
struct EmptyParser {
    bool
    operator()(CommandRegistry const&, void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&)
        const {
        return false;
    }
};
template <>
struct ParamTraits<bool> : ParamTraitsBase<bool> {
    using Parser = EmptyParser;
};
template <>
struct ParamTraits<DimensionType> : ParamTraitsBase<DimensionType> {
    using Parser = EmptyParser;
};
template <>
struct ParamTraits<CommandItem> : ParamTraitsBase<CommandItem> {
    using Parser = EmptyParser;
    static constexpr CommandParameterOption options() { return CommandParameterOption::HasSemanticConstraint; }
};
template <>
struct ParamTraits<CommandBlockName> : ParamTraitsBase<CommandBlockName> {
    using Parser = EmptyParser;
    static constexpr CommandParameterOption options() { return CommandParameterOption::HasSemanticConstraint; }
};
template <>
struct ParamTraits<MobEffect const*> : ParamTraitsBase<MobEffect const*> {
    using Parser = EmptyParser;
};
template <>
struct ParamTraits<ActorDefinitionIdentifier const*> : ParamTraitsBase<ActorDefinitionIdentifier const*> {
    using Parser = EmptyParser;
};
} // namespace ll::command

template <class T>
inline bool CommandRegistry::parse(
    void*                              storage,
    CommandRegistry::ParseToken const& token,
    CommandOrigin const&               origin,
    int                                version,
    std::string&                       error,
    std::vector<std::string>&          errorParams
) const {
    using Traits = ll::command::ParamTraits<T>;
    if constexpr (requires { typename Traits::Parser; }) {
        return (typename Traits::Parser{})(*this, storage, token, origin, version, error, errorParams);
    } else {
        static_assert(ll::traits::always_false<T>, "param traits missing parser type");
    }
}
