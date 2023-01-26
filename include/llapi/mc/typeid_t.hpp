#pragma once
#include "llapi/mc/Json.hpp"
#include <string>

template <typename T>
class typeid_t {
public:
    inline static unsigned short count = 0;
    unsigned short value;
    typeid_t<T>(typeid_t<T> const& id)
    : value(id.value){};
    typeid_t<T>(unsigned short value)
    : value(value){};
};

template <typename T, typename T2>
typeid_t<T> type_id() {
    static typeid_t<T> id = typeid_t<T>::count++;
    return id;
}

class CommandRegistry;
enum class ActorDamageCause : int;
template <typename, typename>
class AutomaticID;
template <typename>
class CommandSelector;
namespace Json {
class Value;
}
class CommandIntegerRange;
struct ActorDefinitionIdentifier;
class CommandItem;

template <>
class typeid_t<CommandRegistry> {
public:
    MCAPI static unsigned short count;
    unsigned short value;
    typeid_t<CommandRegistry>(typeid_t<CommandRegistry> const& id)
    : value(id.value){};
    typeid_t<CommandRegistry>(unsigned short value)
    : value(value){};
};

template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, ActorDamageCause>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, AutomaticID<class Dimension, int>>();
// template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class Block const*>();
// template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, bool>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandMessage>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, enum class CommandOperator>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPosition>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPositionFloat>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPositionFloat>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandSelector<class Actor>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandSelector<class Player>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, enum class EquipmentSlot>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, float>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, int>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, Json::Value>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, enum class Mirror>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class MobEffect const*>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class RelativeFloat>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, std::string>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, std::unique_ptr<class Command>>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class WildcardCommandSelector<Actor>>();
// template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, CommandItem>();
template <>
MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, CommandIntegerRange>();
// template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, ActorDefinitionIdentifier const*>();

template <>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, ActorDefinitionIdentifier const*>() {
    static typeid_t<CommandRegistry> id = *(typeid_t<CommandRegistry>*)dlsym_real("?id@?1???$type_id@VCommandRegistry@@PEBUActorDefinitionIdentifier@@@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
    // static typeid_t<CommandRegistry> id = ([]() -> typeid_t<CommandRegistry> {
    //    CommandParameterData data = SymCall("??$mandatory@VRideCommand@@PEBUActorDefinitionIdentifier@@@commands@@YA?AVCommandParameterData@@PEQRideCommand@@PEBUActorDefinitionIdentifier@@PEBDPEQ2@_N@Z",
    //             CommandParameterData, void*, char const*, uintptr_t)(nullptr, "entityType", 0);
    //     return data.tid;
    //     })();
    return id;
};

template <>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, CommandItem>() {
    static typeid_t<CommandRegistry> id = *(typeid_t<CommandRegistry>*)dlsym_real("?id@?1???$type_id@VCommandRegistry@@VCommandItem@@@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
    return id;
};

template <>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, bool>() {
    static typeid_t<CommandRegistry> id = *(typeid_t<CommandRegistry>*)dlsym_real("?id@?1???$type_id@VCommandRegistry@@_N@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
    return id;
};

template <>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandBlockName>() {
    static typeid_t<CommandRegistry> id = *(typeid_t<CommandRegistry>*)dlsym_real("?id@?1???$type_id@VCommandRegistry@@VCommandBlockName@@@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
    return id;
};
