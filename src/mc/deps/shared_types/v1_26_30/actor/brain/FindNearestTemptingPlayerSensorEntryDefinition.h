#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/ResultSensorEntryDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace SharedTypes::Brain { struct EntityRef; }
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct FindNearestTemptingPlayerSensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::ResultSensorEntryDefinition<
      ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestTemptingPlayerSensorEntryDefinition> {
public:
    // FindNearestTemptingPlayerSensorEntryDefinition inner types define
    using FilterGroupData = ::SharedTypes::v1_21_20::FilterGroupData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::SharedTypes::Brain::EntityRef>>
        mTemptingPlayerMemory;
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<::WorldBlockPosition>>>
                                                                                    mSearchPosMemory;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>            mTargetFilters;
    ::ll::TypedStorage<4, 12, ::Vec3>                                               mSearchRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mTemptingItems;
    // NOLINTEND

public:
    // prevent constructor by default
    FindNearestTemptingPlayerSensorEntryDefinition& operator=(FindNearestTemptingPlayerSensorEntryDefinition const&);
    FindNearestTemptingPlayerSensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FindNearestTemptingPlayerSensorEntryDefinition(
        ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestTemptingPlayerSensorEntryDefinition const&
    );

    MCAPI bool operator==(
        ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestTemptingPlayerSensorEntryDefinition const&
    ) const;

    MCAPI ~FindNearestTemptingPlayerSensorEntryDefinition();
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
    MCAPI void*
    $ctor(::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestTemptingPlayerSensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
