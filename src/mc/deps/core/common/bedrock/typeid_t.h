#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "ll/api/reflection/TypeName.h"
#include "ll/api/utils/HashUtils.h"

namespace Json {
class Value;
}
class CommandRegistry;
class Command;
class CommandIntegerRange;
struct ActorDefinitionIdentifier;
template <typename>
class CommandSelector;
template <typename>
class WildcardCommandSelector;
class CommandPosition;
class CommandPositionFloat;

namespace Bedrock {

template <typename Category>
class typeid_t {
public:
    ushort value{};
    [[nodiscard]] constexpr typeid_t(typeid_t const& other) : value(other.value) {}
    constexpr typeid_t& operator=(typeid_t const& other) {
        value = other.value;
        return *this;
    }

    [[nodiscard]] constexpr typeid_t(ushort value) : value(value) {}
    [[nodiscard]] constexpr typeid_t() = default;

    constexpr bool operator==(typeid_t const& other) const { return value == other.value; }

    static std::atomic_ushort& _getCounter() {

        // MCAPI // error C2201
        static std::atomic_ushort storage;

        return storage;
    }
};

template <>
LLAPI std::atomic_ushort& typeid_t<CommandRegistry>::_getCounter();

// if dll reload, typeid can't keep, so we need a static implementation
LLAPI ushort crtypidImpl(size_t Type);

template <typename Category, typename Type>
typeid_t<Category> type_id() {
    if constexpr (std::is_same_v<Category, CommandRegistry>) {
        return crtypidImpl(ll::hash_utils::doHash(ll::reflection::type_raw_name_v<Type>));
    } else {
        static typeid_t<Category> id{++typeid_t<Category>::_getCounter()};
        return id;
    }
}

}; // namespace Bedrock

// clang-format off
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, int>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, bool>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, float>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, DimensionType>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, std::string>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, std::unique_ptr<::Command>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, std::vector<class BlockStateCommandParam>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandBlockName>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandFilePath>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandItem>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandMessage>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandPosition>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandPositionFloat>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandRawText>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandSelector<class Actor>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandSelector<class Player>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandWildcardInt>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class Json::Value>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class MobEffect const*>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class RelativeFloat>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class WildcardCommandSelector<class Actor>>();

template<> LLAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, CommandIntegerRange>();
template<> LLAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, ActorDefinitionIdentifier const*>();

// clang-format on
