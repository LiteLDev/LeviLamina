#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/ResultSensorEntryDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace SharedTypes::Brain { struct EntityRef; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50::Brain::MemorySensors {

struct FindRamChargePositionSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::ResultSensorEntryDefinition<
      ::SharedTypes::v1_26_50::Brain::MemorySensors::FindRamChargePositionSensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRef>>
        mTargetEntityMemory;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>
        mChargePositionMemory;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>
        mTargetPositionMemory;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>
                                  mRamPositionMemory;
    ::ll::TypedStorage<4, 4, int> mMinRamDistance;
    ::ll::TypedStorage<4, 4, int> mMaxRamDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    FindRamChargePositionSensorEntryDefinition& operator=(FindRamChargePositionSensorEntryDefinition const&);
    FindRamChargePositionSensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FindRamChargePositionSensorEntryDefinition(
        ::SharedTypes::v1_26_50::Brain::MemorySensors::FindRamChargePositionSensorEntryDefinition const&
    );

    MCAPI ~FindRamChargePositionSensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_50::Brain::MemorySensors::FindRamChargePositionSensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50::Brain::MemorySensors
