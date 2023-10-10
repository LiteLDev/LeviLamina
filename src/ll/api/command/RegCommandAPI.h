#pragma once

#include <tuple>

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/CommandSelector.h"

namespace ll::RegisterCommandHelper {
template <typename Command, typename Type>
static int getOffset(Type Command::*src) {
    union {
        Type Command::*src;
        int            value;
    } u;
    u.src = src;
    return u.value;
}

template <typename Command, typename Type>
static CommandParameterData
makeMandatory(Type Command::*field, std::string const& name, bool Command::*isSet = nullptr) {

    return CommandParameterData(
        Bedrock::type_id<CommandRegistry, Type>(),
        &CommandRegistry::parse<Type>,
        name.c_str(),
        CommandParameterDataType::Basic,
        nullptr,
        getOffset(field),
        false,
        isSet ? getOffset(isSet) : -1
    );
}
template <CommandParameterDataType DataType, typename Command, typename Type>
static CommandParameterData makeMandatory(
    Type Command::*    field,
    std::string const& name,
    char const*        desc = nullptr,
    bool Command::*isSet    = nullptr
) {

    return {
        Bedrock::type_id<CommandRegistry, Type>(),
        &CommandRegistry::parse<Type>,
        name.c_str(),
        DataType,
        desc,
        getOffset(field),
        false,
        isSet ? getOffset(isSet) : -1};
}
template <typename Command, typename Type>
static CommandParameterData
makeOptional(Type Command::*field, std::string const& name, bool Command::*isSet = nullptr) {

    return {
        Bedrock::type_id<CommandRegistry, Type>(),
        &CommandRegistry::parse<Type>,
        name.c_str(),
        CommandParameterDataType::Basic,
        nullptr,
        getOffset(field),
        true,
        isSet ? getOffset(isSet) : -1,
    };
}
template <CommandParameterDataType DataType, typename Command, typename Type>
static CommandParameterData makeOptional(
    Type Command::*    field,
    std::string const& name,
    char const*        desc = nullptr,
    bool Command::*isSet    = nullptr
) {

    return {
        Bedrock::type_id<CommandRegistry, Type>(),
        &CommandRegistry::parse<Type>,
        name.c_str(),
        DataType,
        desc,
        getOffset(field),
        true,
        isSet ? getOffset(isSet) : -1,
    };
}
} // namespace ll::RegisterCommandHelper
