#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"

// auto generated forward declare list
// clang-format off
struct WorldBlockPosition;
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct FindNearestAttackableEntitySensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestAttackableEntitySensorEntryDefinition> {
public:
    // FindNearestAttackableEntitySensorEntryDefinition inner types define
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
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mTargetFilters;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mSensingRange;
    ::ll::TypedStorage<1, 1, bool>                                       mCanSwitchTargets;
    ::ll::TypedStorage<1, 1, bool>                                       mCanTargetOwner;
    ::ll::TypedStorage<1, 1, bool>                                       mCanTargetInvisible;
    ::ll::TypedStorage<1, 1, bool>                                       mCanTargetPlayingDead;
    ::ll::TypedStorage<1, 1, bool>                                       mCanIgnoreTargetDisguises;
    ::ll::TypedStorage<1, 1, bool>                                       mCanIgnoreLineOfSight;
    ::ll::TypedStorage<1, 1, bool>                                       mCanIgnoreSunlight;
    ::ll::TypedStorage<1, 1, bool>                                       mRequireUnobstructedPath;
    ::ll::TypedStorage<4, 4, float>                                      mSecondsBeforeForgettingLostTarget;
    ::ll::TypedStorage<4, 4, float>                                      mTargetSneakingVisibilityMultiplier;
    ::ll::TypedStorage<4, 4, float>                                      mTargetInvisibleVisibilityMultiplier;
    ::ll::TypedStorage<4, 4, float>                                      mPlayerDisguisedVisibilityMultiplier;
    ::ll::TypedStorage<4, 4, float>                                      mSensingFOVDegrees;
    // NOLINTEND

public:
    // prevent constructor by default
    FindNearestAttackableEntitySensorEntryDefinition&
    operator=(FindNearestAttackableEntitySensorEntryDefinition const&);
    FindNearestAttackableEntitySensorEntryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FindNearestAttackableEntitySensorEntryDefinition(
        ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestAttackableEntitySensorEntryDefinition const&
    );

    MCAPI bool operator==(
        ::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestAttackableEntitySensorEntryDefinition const&
    ) const;

    MCAPI ~FindNearestAttackableEntitySensorEntryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CAN_IGNORE_LINE_OF_SIGHT_NAME();

    MCAPI static ::std::string_view const& CAN_IGNORE_SUNLIGHT_NAME();

    MCAPI static ::std::string_view const& CAN_IGNORE_TARGET_DISGUISES_NAME();

    MCAPI static ::std::string_view const& CAN_SWITCH_TARGETS_NAME();

    MCAPI static ::std::string_view const& CAN_TARGET_INVISIBLE_NAME();

    MCAPI static ::std::string_view const& CAN_TARGET_OWNER_NAME();

    MCAPI static ::std::string_view const& CAN_TARGET_PLAYING_DEAD_NAME();

    MCAPI static ::std::string_view const& FOUND_ENTITY_MEMORY_NAME();

    MCAPI static ::std::string_view const& PLAYER_DISGUISED_VISIBILITY_MULTIPLIER_NAME();

    MCAPI static ::std::string_view const& REQUIRE_UNOBSTRUCTED_PATH_NAME();

    MCAPI static ::std::string_view const& SEARCH_POS_MEMORY_NAME();

    MCAPI static ::std::string_view const& SECONDS_BEFORE_FORGETTING_LOST_TARGET_NAME();

    MCAPI static ::std::string_view const& SENSING_FOV_NAME();

    MCAPI static ::std::string_view const& SENSING_RANGE_NAME();

    MCAPI static ::std::string_view const& TARGET_FILTERS();

    MCAPI static ::std::string_view const& TARGET_INVISIBLE_VISIBILITY_MULTIPLIER_NAME();

    MCAPI static ::std::string_view const& TARGET_SNEAKING_VISIBILITY_MULTIPLIER_NAME();

    MCAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestAttackableEntitySensorEntryDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
