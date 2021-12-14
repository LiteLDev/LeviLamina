#pragma once
#include "Global.h"
#include "MC/Actor.hpp"
#include "MC/Command.hpp"
#include "MC/CommandMessage.hpp"
#include "MC/CommandOutput.hpp"
#include "MC/CommandParameterData.hpp"
#include "MC/CommandPosition.hpp"
#include "MC/CommandRegistry.hpp"
#include "MC/CommandSelector.hpp"
#include "MC/Player.hpp"
#include <tuple>

namespace RegisterCommandHelper {
template <typename Command, typename Type>
static int getOffset(Type Command::*src) {
    union {
        Type Command::*src;
        int value;
    } u;
    u.src = src;
    return u.value;
}

using ParseFn = bool (CommandRegistry::*)(
    void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&,
    std::vector<std::string>&) const;

template <typename Command, typename Type>
static CommandParameterData makeMandatory(Type Command::*field, std::string name, bool Command::*isSet = nullptr) {
    return {
        CommandRegistry::getNextTypeId(),
        CommandRegistry::getParseFn<Type>(),
        name,
        CommandParameterDataType::NORMAL,
        nullptr,
        getOffset(field),
        false,
        isSet ? getOffset(isSet) : -1,
    };
}
template <CommandParameterDataType DataType, typename Command, typename Type>
static CommandParameterData
    makeMandatory(Type Command::*field, std::string name, char const* desc = nullptr, bool Command::*isSet = nullptr)
{
    ParseFn parseFn;

    if constexpr (CommandParameterDataType::SOFT_ENUM == DataType)
        parseFn = CommandRegistry::getParseFn<Type>();
    else
        parseFn = &CommandRegistry::fakeParse<Type>;

    return {
        CommandRegistry::getNextTypeId(),
        parseFn,
        name,
        DataType,
        desc,
        getOffset(field),
        false,
        isSet ? getOffset(isSet) : -1,
    };
}
template <typename Command, typename Type>
static CommandParameterData makeOptional(Type Command::*field, std::string name, bool Command::*isSet = nullptr) {
    return {
        CommandRegistry::getNextTypeId(),
        CommandRegistry::getParseFn<Type>(),
        name,
        CommandParameterDataType::NORMAL,
        nullptr,
        getOffset(field),
        true,
        isSet ? getOffset(isSet) : -1,
    };
}
template <CommandParameterDataType DataType, typename Command, typename Type>
static CommandParameterData
    makeOptional(Type Command::*field, std::string name, char const* desc = nullptr, bool Command::*isSet = nullptr) {
    ParseFn parseFn;

    if constexpr (CommandParameterDataType::SOFT_ENUM == DataType)
        parseFn = CommandRegistry::getParseFn<Type>();
    else
        parseFn = &CommandRegistry::fakeParse<Type>;

    return {
        CommandRegistry::getNextTypeId(),
        parseFn,
        name,
        DataType,
        desc,
        getOffset(field),
        true,
        isSet ? getOffset(isSet) : -1,
    };
}
} // namespace RegisterCommandHelper
