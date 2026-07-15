#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"
#include "mc/deps/shared_types/v1_26_20/actor/brain/SensorResponseDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct InRangeOfEntitySensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>
        mTargetEntityMemory;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
        mEnteredRangeResponse;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
        mExitedRangeResponse;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
        mWithinRangeResponse;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
                                      mOutOfRangeResponse;
    ::ll::TypedStorage<4, 12, ::Vec3> mSearchRange;
    // NOLINTEND

public:
    // prevent constructor by default
    InRangeOfEntitySensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InRangeOfEntitySensorEntryDefinition(
        ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&
    );

    MCAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&&);

    MCAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&);

    MCAPI bool
    operator==(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&) const;

    MCAPI ~InRangeOfEntitySensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemorySensors::InRangeOfEntitySensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
