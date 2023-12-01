#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {
class Value;
}
class CommandRegistry;
template <typename>
class CommandSelector;
template <typename>
class WildcardCommandSelector;
class CommandBlockName;
class CommandMessage;
class CommandPosition;
class CommandPositionFloat;
class MobEffect;
class RelativeFloat;
class CommandItem;
struct ActorDefinitionIdentifier;
class CommandRawText;
class CommandWildcardInt;
class Player;
class Actor;
class Command;
class CommandWildcardInt;
enum class EquipmentSlot : int;
class Command;
enum ObjectiveSortOrder : uchar;
class Json::Value;
class CommandPosition;
enum StructureRedstoneSaveMode : schar;
class CommandMessage;
class CommandBlockName;
class CommandFilePath;
class CommandRawText;
struct ActorDefinitionIdentifier;
class CommandPositionFloat;
class BlockStateCommandParam;
class RelativeFloat;
enum AnimationMode : schar;
enum CommandCompareOperator : char;
enum class Difficulty : int;
class MobEffect;
enum class ActorDamageCause : int;
enum class CommandOperator : schar;
class CommandItem;
enum BlockSlot : int;
namespace Bedrock {

template <typename T0>
class typeid_t {
public:
    constexpr static ushort count = 0;

    ushort value;
    [[nodiscard]] constexpr typeid_t<T0>(typeid_t<T0> const& id) : value(id.value) {}
    [[nodiscard]] constexpr typeid_t<T0>(ushort value) : value(value) {}
    [[nodiscard]] inline typeid_t<T0>() : value(++_getCounter()) {}

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

}; // namespace Bedrock

// clang-format off
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandWildcardInt>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, enum class EquipmentSlot>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class std::unique_ptr<class Command, struct std::default_delete<class Command>>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, enum ObjectiveSortOrder>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class Json::Value>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandPosition>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, enum StructureRedstoneSaveMode>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class WildcardCommandSelector<class Actor>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandMessage>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandBlockName>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandFilePath>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, float>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandRawText>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandSelector<class Player>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, struct ActorDefinitionIdentifier const *>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class AutomaticID<class Dimension, int>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandPositionFloat>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class std::vector<class BlockStateCommandParam, class std::allocator<class BlockStateCommandParam>>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class RelativeFloat>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, enum AnimationMode>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, enum CommandCompareOperator>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, enum class Difficulty>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, bool>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, int>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class MobEffect const *>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, enum class ActorDamageCause>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, enum class CommandOperator>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandItem>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class std::string>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandSelector<class Actor>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, enum BlockSlot>();
// clang-format on
