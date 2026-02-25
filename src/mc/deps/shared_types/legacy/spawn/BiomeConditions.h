#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/legacy/spawn/BrightnessFilter.h"
#include "mc/deps/shared_types/legacy/spawn/DelayFilter.h"
#include "mc/deps/shared_types/legacy/spawn/DensityLimit.h"
#include "mc/deps/shared_types/legacy/spawn/DifficultyFilter.h"
#include "mc/deps/shared_types/legacy/spawn/DisallowSpawnInBubble.h"
#include "mc/deps/shared_types/legacy/spawn/DistanceFilter.h"
#include "mc/deps/shared_types/legacy/spawn/HeightFilter.h"
#include "mc/deps/shared_types/legacy/spawn/Herd.h"
#include "mc/deps/shared_types/legacy/spawn/IsExperimental.h"
#include "mc/deps/shared_types/legacy/spawn/IsPersistant.h"
#include "mc/deps/shared_types/legacy/spawn/MobEventFilter.h"
#include "mc/deps/shared_types/legacy/spawn/PermuteType.h"
#include "mc/deps/shared_types/legacy/spawn/PlayerInVillageFilter.h"
#include "mc/deps/shared_types/legacy/spawn/SpawnAboveBlockFilter.h"
#include "mc/deps/shared_types/legacy/spawn/SpawnInLava.h"
#include "mc/deps/shared_types/legacy/spawn/SpawnOnSurface.h"
#include "mc/deps/shared_types/legacy/spawn/SpawnUnderground.h"
#include "mc/deps/shared_types/legacy/spawn/SpawnUnderwater.h"
#include "mc/deps/shared_types/legacy/spawn/Weight.h"
#include "mc/deps/shared_types/legacy/spawn/WorldAgeFilter.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::Legacy::Spawn {

struct BiomeConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::Legacy::Spawn::Weight>>       mWeight;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::Legacy::Spawn::DensityLimit>> mDensityLimit;
    ::ll::TypedStorage<
        8,
        88,
        ::std::variant<::std::vector<::SharedTypes::Legacy::BlockDescriptor>, ::SharedTypes::Legacy::BlockDescriptor>>
        mSpawnOnBlockFilter;
    ::ll::TypedStorage<
        8,
        88,
        ::std::variant<::std::vector<::SharedTypes::Legacy::BlockDescriptor>, ::SharedTypes::Legacy::BlockDescriptor>>
                                                                                   mSpawnOnBlockPreventedFilter;
    ::ll::TypedStorage<8, 96, ::SharedTypes::Legacy::Spawn::SpawnAboveBlockFilter> mSpawnAboveBlockFilter;
    ::ll::TypedStorage<
        8,
        88,
        ::std::variant<::std::vector<::SharedTypes::Legacy::Spawn::Herd>, ::SharedTypes::Legacy::Spawn::Herd>>
        mHerd;
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::std::vector<::SharedTypes::Legacy::Spawn::PermuteType>,
            ::SharedTypes::Legacy::Spawn::PermuteType>>
                                                                                               mPermuteType;
    ::ll::TypedStorage<4, 16, ::std::optional<::SharedTypes::Legacy::Spawn::BrightnessFilter>> mBrightnessFilter;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::Legacy::Spawn::HeightFilter>>     mHeightFilter;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::Legacy::Spawn::DistanceFilter>>   mDistanceFilter;
    ::ll::TypedStorage<8, 24, ::std::optional<::SharedTypes::Legacy::Spawn::WorldAgeFilter>>   mWorldAgeFilter;
    ::ll::TypedStorage<8, 328, ::SharedTypes::v1_21_20::FilterGroupData>                       mBiomeFilter;
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Legacy::Spawn::DelayFilter>>      mDelayFilter;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Legacy::Spawn::MobEventFilter>>   mMobEventFilter;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::Legacy::Spawn::PlayerInVillageFilter>>
                                                                                               mPlayerInVillageFilter;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::Legacy::Spawn::DifficultyFilter>> mDifficultyFilter;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::Spawn::SpawnOnSurface>>    mSpawnOnSurface;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::Spawn::SpawnUnderground>>  mSpawnUnderground;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::Spawn::SpawnUnderwater>>   mSpawnUnderwater;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::Spawn::DisallowSpawnInBubble>>
                                                                                            mDisallowSpawnInBubble;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::Spawn::SpawnInLava>>    mInLava;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::Spawn::IsPersistant>>   mIsPersistant;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::Spawn::IsExperimental>> mIsExperimental;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Legacy::Spawn::MobEventFilter>                 mMobEvent_UNUSED;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeConditions();

    MCAPI BiomeConditions(::SharedTypes::Legacy::Spawn::BiomeConditions&&);

    MCAPI BiomeConditions(::SharedTypes::Legacy::Spawn::BiomeConditions const&);

    MCAPI ::SharedTypes::Legacy::Spawn::BiomeConditions& operator=(::SharedTypes::Legacy::Spawn::BiomeConditions&&);

    MCAPI ::SharedTypes::Legacy::Spawn::BiomeConditions&
    operator=(::SharedTypes::Legacy::Spawn::BiomeConditions const&);

    MCAPI ~BiomeConditions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::Legacy::Spawn::BiomeConditions&&);

    MCAPI void* $ctor(::SharedTypes::Legacy::Spawn::BiomeConditions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
