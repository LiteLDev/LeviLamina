#pragma once
#include "liteloader/api/Global.h"
#include "mc/Actor.hpp"
#include "mc/Player.hpp"
#include "mc/Command.hpp"
#include "mc/CommandMessage.hpp"
#include "mc/CommandOutput.hpp"
#include "mc/CommandParameterData.hpp"
#include "mc/CommandPosition.hpp"
#include "mc/CommandSelector.hpp"
#include "mc/CommandRegistry.hpp"
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
        type_id<CommandRegistry, Type>(),
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
    makeMandatory(Type Command::*field, std::string name, char const* desc = nullptr, bool Command::*isSet = nullptr) {
    return {
        type_id<CommandRegistry, Type>(),
        CommandRegistry::getParseFn<Type>(),
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
    typeid_t<CommandRegistry> tpid{0};

    return {
        type_id<CommandRegistry, Type>(),
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

    return {
        type_id<CommandRegistry, Type>(),
        CommandRegistry::getParseFn<Type>(),
        name,
        DataType,
        desc,
        getOffset(field),
        true,
        isSet ? getOffset(isSet) : -1,
    };
}
} // namespace RegisterCommandHelper
