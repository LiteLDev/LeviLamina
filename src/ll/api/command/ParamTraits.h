#pragma once

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

#include "ll/api/base/StdInt.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/EnumName.h"
#include "ll/api/command/Optional.h"
#include "ll/api/command/SoftEnum.h"

#include "mc/deps/core/utility/typeid_t.h"
#include "mc/deps/json/Value.h"
#include "mc/server/commands/BlockStateCommandParam.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandCompareOperator.h"
#include "mc/server/commands/CommandFilePath.h"
#include "mc/server/commands/CommandIntegerRange.h"
#include "mc/server/commands/CommandItem.h"
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandRawText.h"
#include "mc/server/commands/CommandWildcardInt.h"
#include "mc/server/commands/RelativeFloat.h"
#include "mc/server/commands/WildcardCommandSelector.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/effect/MobEffect.h"

namespace ll::command {
template <class T>
struct ParamTraits;

template <class T>
struct ParamTraitsBase {
    static constexpr CommandParameterDataType    dataType() { return CommandParameterDataType::Basic; }
    static constexpr CommandParameterOption      options() { return CommandParameterOption::None; }
    static inline CommandRegistry::ParseFunction parseFn() { return &CommandRegistry::parse<T>; }
    static constexpr std::string_view            enumNameOrPostfix() { return {}; }
    static constexpr std::string_view            subChain() { return {}; }
    static CommandRegistry::ParamParseRule const* parseRule() {
        if constexpr (requires { ParamTraits<T>::parseRuleValue(); }) {
            static CommandRegistry::ParamParseRule rule = [] {
                CommandRegistry::ParamParseRule result{};
                result.parse.get()  = ParamTraits<T>::parseFn();
                result.symbol.get() = CommandRegistry::Symbol{ParamTraits<T>::parseRuleValue()};
                return result;
            }();
            return &rule;
        } else {
            return nullptr;
        }
    }
    static Bedrock::typeid_t<CommandRegistry>    typeId() { return Bedrock::type_id<CommandRegistry, T>(); }
    static constexpr void                        transformData(CommandParameterData&, CommandRegistrar&) {}
};
template <class T>
struct ParamTraits : ParamTraitsBase<T> {};
template <>
struct ParamTraits<int> : ParamTraitsBase<int> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::Int;
    }
};
template <>
struct ParamTraits<float> : ParamTraitsBase<float> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::Val;
    }
};
template <>
struct ParamTraits<std::string> : ParamTraitsBase<std::string> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::Id;
    }
};
template <>
struct ParamTraits<CommandOperator> : ParamTraitsBase<CommandOperator> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::Operator;
    }
};
template <>
struct ParamTraits<CommandCompareOperator> : ParamTraitsBase<CommandCompareOperator> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::CompareOperator;
    }
};
template <>
struct ParamTraits<RelativeFloat> : ParamTraitsBase<RelativeFloat> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::RVal;
    }
};
template <>
struct ParamTraits<CommandWildcardInt> : ParamTraitsBase<CommandWildcardInt> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::WildcardInt;
    }
};
template <>
struct ParamTraits<CommandIntegerRange> : ParamTraitsBase<CommandIntegerRange> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::FullIntegerRange;
    }
};
template <>
struct ParamTraits<CommandFilePath> : ParamTraitsBase<CommandFilePath> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::FilePath;
    }
};
template <>
struct ParamTraits<CommandPosition> : ParamTraitsBase<CommandPosition> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::Position;
    }
};
template <>
struct ParamTraits<CommandPositionFloat> : ParamTraitsBase<CommandPositionFloat> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::PositionFloat;
    }
};
template <>
struct ParamTraits<CommandSelector<Actor>> : ParamTraitsBase<CommandSelector<Actor>> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::Selection;
    }
};
template <>
struct ParamTraits<CommandSelector<Player>> : ParamTraitsBase<CommandSelector<Player>> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::Selection;
    }
};
template <>
struct ParamTraits<WildcardCommandSelector<Actor>> : ParamTraitsBase<WildcardCommandSelector<Actor>> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::WildcardSelection;
    }
};
template <>
struct ParamTraits<CommandMessage> : ParamTraitsBase<CommandMessage> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::MessageRoot;
    }
};
template <>
struct ParamTraits<CommandRawText> : ParamTraitsBase<CommandRawText> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::RawText;
    }
};
template <>
struct ParamTraits<Json::Value> : ParamTraitsBase<Json::Value> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::JsonObject;
    }
};
template <>
struct ParamTraits<std::vector<BlockStateCommandParam>> : ParamTraitsBase<std::vector<BlockStateCommandParam>> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::BlockStateArray;
    }
};
template <>
struct ParamTraits<std::unique_ptr<::Command>> : ParamTraitsBase<std::unique_ptr<::Command>> {
    static constexpr CommandRegistry::HardNonTerminal parseRuleValue() {
        return CommandRegistry::HardNonTerminal::SlashCommand;
    }
};
template <class T>
struct EnumParser {
    bool operator()(
        CommandRegistry const&             registry,
        void*                              storage,
        CommandRegistry::ParseToken const& token,
        CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&
    ) const {
        *(T*)storage = (T)registry.getEnumData(token);
        return true;
    }
};
template <concepts::Require<std::is_enum> T>
struct ParamTraits<T> : ParamTraitsBase<T> {
    using Parser = EnumParser<T>;
    static constexpr CommandParameterDataType dataType() { return CommandParameterDataType::Enum; }
    static constexpr CommandParameterOption   options() { return CommandParameterOption::EnumAutocompleteExpansion; }
    static constexpr std::string_view         enumNameOrPostfix() { return enum_name_v<T>; }
    static void transformData(CommandParameterData&, CommandRegistrar& registrar) { registrar.template tryRegisterEnum<T>(); }
};
template <concepts::Specializes<SoftEnum> T>
struct ParamTraits<T> : ParamTraitsBase<T> {
    static constexpr CommandParameterDataType    dataType() { return CommandParameterDataType::SoftEnum; }
    static constexpr CommandParameterOption      options() { return CommandParameterOption::EnumAutocompleteExpansion; }
    static inline CommandRegistry::ParseFunction parseFn() { return &CommandRegistry::parse<std::string>; }
    static constexpr std::string_view            enumNameOrPostfix() { return enum_name_v<T>; }
    static Bedrock::typeid_t<CommandRegistry>    typeId() { return Bedrock::type_id<CommandRegistry, std::string>(); }
    static void                                  transformData(CommandParameterData&, CommandRegistrar& registrar) {
        registrar.template tryRegisterSoftEnum<T>();
    }
};
struct EmptyParser {
    bool operator()(
        CommandRegistry const&,
        void*,
        CommandRegistry::ParseToken const&,
        CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&
    ) const {
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
