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

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {
template <class T>
struct ParamTraits {
    static constexpr CommandParameterDataType dataType() { return CommandParameterDataType::Basic; }
    static inline CommandRegistry::ParseFn    parser() { return &CommandRegistry::parse<T>; }
    static constexpr std::string_view         enumNameOrPostfix() { return {}; }
    static constexpr std::string_view         subChain() { return {}; }
    static Bedrock::typeid_t<CommandRegistry> typeId() { return Bedrock::type_id<CommandRegistry, T>(); }
    static constexpr void                     transformData(CommandParameterData&) {}
};
template <concepts::Require<std::is_enum> T>
struct ParamTraits<T> {
    static constexpr CommandParameterDataType dataType() { return CommandParameterDataType::Enum; }
    static inline CommandRegistry::ParseFn    parser() { return &CommandRegistry::parse<T>; }
    static constexpr std::string_view         enumNameOrPostfix() { return enum_name_v<T>; }
    static constexpr std::string_view         subChain() { return {}; }
    static Bedrock::typeid_t<CommandRegistry> typeId() { return Bedrock::type_id<CommandRegistry, T>(); }
    static void transformData(CommandParameterData&) { CommandRegistrar::getInstance().template tryRegisterEnum<T>(); }
};
template <concepts::Specializes<SoftEnum> T>
struct ParamTraits<T> {
    static constexpr CommandParameterDataType dataType() { return CommandParameterDataType::SoftEnum; }
    static inline CommandRegistry::ParseFn    parser() { return &CommandRegistry::parse<std::string>; }
    static constexpr std::string_view         enumNameOrPostfix() { return enum_name_v<T>; }
    static constexpr std::string_view         subChain() { return {}; }
    static Bedrock::typeid_t<CommandRegistry> typeId() { return Bedrock::type_id<CommandRegistry, std::string>(); }
    static void                               transformData(CommandParameterData&) {
        CommandRegistrar::getInstance().template tryRegisterSoftEnum<T>();
    }
};
} // namespace ll::command
