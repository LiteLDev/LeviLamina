#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"
#include "mc/deps/shared_types/v1_26_20/actor/brain/SensorResponseDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemorySensors {

struct FindNearestEntitySensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition> {
public:
    // FindNearestEntitySensorEntryDefinition inner types define
    using FilterGroupData = ::SharedTypes::v1_21_20::FilterGroupData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRefMemory>>
        mFoundEntityMemory;
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>>
        mSearchPosMemory;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
        mSuccessResponse;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_26_20::Brain::MemorySensors::SensorResponseDefinition>>
                                                                         mFailureResponse;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mTargetFilters;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mSearchRange;
    // NOLINTEND

public:
    // prevent constructor by default
    FindNearestEntitySensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FindNearestEntitySensorEntryDefinition(
        ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition const&
    );

    MCAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition&&);

    MCAPI ::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition&
    operator=(::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition const&);

    MCAPI ~FindNearestEntitySensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& FAILURE_RESPONSE_NAME();

    MCAPI static ::std::string_view const& FOUND_ENTITY_MEMORY_NAME();

    MCAPI static ::std::string_view const& SEARCH_POS_MEMORY_NAME();

    MCAPI static ::std::string_view const& SEARCH_RANGE_NAME();

    MCAPI static ::std::string_view const& SUCCESS_RESPONSE_NAME();

    MCAPI static ::std::string_view const& TARGET_FILTERS();

    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::Brain::MemorySensors::FindNearestEntitySensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemorySensors
