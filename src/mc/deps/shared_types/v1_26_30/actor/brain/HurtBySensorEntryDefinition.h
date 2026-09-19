#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace SharedTypes::Brain { struct BlockRefMemory; }
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct HurtBySensorEntryDefinition : public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
                                         ::SharedTypes::v1_26_30::Brain::MemorySensors::HurtBySensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<
            ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>>
        mDamagingEntityMemory;
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<
            ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::BlockRefMemory>>>
        mDamagingBlockMemory;
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>>
        mDamageSourcePosMemory;
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<
            ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Legacy::ActorDamageCause>>>
        mDamageCauseMemory;
    // NOLINTEND

public:
    // prevent constructor by default
    HurtBySensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    HurtBySensorEntryDefinition(::SharedTypes::v1_26_30::Brain::MemorySensors::HurtBySensorEntryDefinition const&);

    MCAPI ::SharedTypes::v1_26_30::Brain::MemorySensors::HurtBySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_30::Brain::MemorySensors::HurtBySensorEntryDefinition&&);

    MCAPI ::SharedTypes::v1_26_30::Brain::MemorySensors::HurtBySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_30::Brain::MemorySensors::HurtBySensorEntryDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_30::Brain::MemorySensors::HurtBySensorEntryDefinition const&) const;

    MCAPI ~HurtBySensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& DAMAGE_CAUSES_NAME();

    MCAPI static ::std::string_view const& DAMAGE_CAUSE_MEMORY_NAME();

    MCAPI static ::std::string_view const& DAMAGE_SOURCE_POS_MEMORY_NAME();

    MCAPI static ::std::string_view const& DAMAGING_BLOCK_MEMORY_NAME();

    MCAPI static ::std::string_view const& DAMAGING_ENTITY_MEMORY_NAME();

    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::Brain::MemorySensors::HurtBySensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
