#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/BlockSlot.h"
#include "mc/enums/ObjectiveSortOrder.h"
#include "mc/server/commands/CommandOperator.h"
#include <atomic>

namespace Json {
class Value;
}
class CommandRegistry;
template <typename>
class CommandSelector;
template <typename>
class WildcardCommandSelector;

namespace Bedrock {

template <typename T0>
class typeid_t {
public:
    constexpr static ushort count = 0;

    ushort value;
    typeid_t<T0>(typeid_t<T0> const& id) : value(id.value) {}
    typeid_t<T0>(ushort value) : value(value) {}
    typeid_t<T0>() : value(++_getCounter()) {}

    static std::atomic_ushort& _getCounter() {

        // MCAPI // error C2201
        static std::atomic_ushort storage;

        return storage;
    }
};

template <>
LLAPI std::atomic_ushort& typeid_t<CommandRegistry>::_getCounter();

template <typename T0, typename T1>
typeid_t<T0> type_id() {
    static typeid_t<T0> id{};
    return id;
}

template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, bool>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, int>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, float>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, std::string>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, ActorDamageCause>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, DimensionType>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandBlockName>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandMessage>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, CommandOperator>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPosition>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPositionFloat>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandSelector<class Player>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, Json::Value>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class MobEffect const*>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class RelativeFloat>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, std::unique_ptr<class Command>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class WildcardCommandSelector<class Actor>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandItem>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class ActorDefinitionIdentifier const*>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandRawText>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandWildcardInt>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, ObjectiveSortOrder>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, BlockSlot>();
}; // namespace Bedrock
