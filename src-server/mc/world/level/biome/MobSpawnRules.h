#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockSource;
class IRandom;
class MobSpawnerData;
class MobSpawnerPermutation;
class Random;
class SpawnConditions;
struct ActorDefinitionIdentifier;
struct MobSpawnHerdInfo;
// clang-format on

class MobSpawnRules {
public:
    // MobSpawnRules inner types define
    using OnGetSpawnCountCallback = ::std::function<int(::SpawnConditions const&, ::BlockSource&, ::Random&, ::MobSpawnerData const&)>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(::SpawnConditions const&, ::BlockSource&)>> mHardcodedCallbackRule;
    ::ll::TypedStorage<4, 4, int> mMinBrightness;
    ::ll::TypedStorage<4, 4, int> mMaxBrightness;
    ::ll::TypedStorage<4, 4, float> mMinMoonBrightness;
    ::ll::TypedStorage<4, 4, float> mMaxMoonBrightness;
    ::ll::TypedStorage<1, 1, bool> mAdjustForWeather;
    ::ll::TypedStorage<4, 4, int> mMinHeight;
    ::ll::TypedStorage<4, 4, int> mMaxHeight;
    ::ll::TypedStorage<4, 4, int> mRarity;
    ::ll::TypedStorage<4, 4, int> mSurfaceCap;
    ::ll::TypedStorage<4, 4, int> mUndergroundCap;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty> mMinDifficulty;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty> mMaxDifficulty;
    ::ll::TypedStorage<4, 4, int> mMinSpawnDistance;
    ::ll::TypedStorage<4, 4, int> mMaxSpawnDistance;
    ::ll::TypedStorage<4, 4, int> mSpawnDistanceCap;
    ::ll::TypedStorage<1, 1, bool> mSurfaceSpawner;
    ::ll::TypedStorage<1, 1, bool> mUndergroundSpawner;
    ::ll::TypedStorage<1, 1, bool> mWaterSpawner;
    ::ll::TypedStorage<1, 1, bool> mBubbleSpawner;
    ::ll::TypedStorage<1, 1, bool> mLavaSpawner;
    ::ll::TypedStorage<4, 4, uint> mPlayerInVillageDistance;
    ::ll::TypedStorage<4, 4, uint> mPlayerInVillageBorderTolerance;
    ::ll::TypedStorage<1, 1, bool> mExperimentalSpawner;
    ::ll::TypedStorage<8, 8, uint64> mMinWorldAge;
    ::ll::TypedStorage<8, 8, uint64> mMaxWorldAge;
    ::ll::TypedStorage<4, 4, int> mMinDelay;
    ::ll::TypedStorage<4, 4, int> mMaxDelay;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobSpawnHerdInfo>> mHerdList;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobSpawnerPermutation>> mPermutationList;
    ::ll::TypedStorage<8, 32, ::std::string> mMobEventName;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mSpawnOnBlockList;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mSpawnAboveBlockList;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mSpawnOnBlockPreventedList;
    ::ll::TypedStorage<4, 4, int> mAboveBlockDistance;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobSpawnerPermutation>> mGuaranteedList;
    ::ll::TypedStorage<8, 32, ::std::string> mMobToDelayId;
    ::ll::TypedStorage<4, 4, int> mDelaySpawnChance;
    ::ll::TypedStorage<1, 1, bool> mPersistence;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobSpawnRules();

    MCAPI MobSpawnRules(::MobSpawnRules&&);

    MCAPI MobSpawnRules(::MobSpawnRules const&);

    MCAPI ::MobSpawnRules& addPermutation(int weight, int guaranteedCount, ::ActorDefinitionIdentifier const& id);

    MCAPI bool canSpawnInConditions(::SpawnConditions const& conditions, ::BlockSource& region) const;

    MCAPI ::MobSpawnRules& operator=(::MobSpawnRules&&);

    MCAPI ::MobSpawnRules& operator=(::MobSpawnRules const&);

    MCAPI ::MobSpawnHerdInfo const& selectRandomHerd(::IRandom& random) const;

    MCAPI ~MobSpawnRules();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& LOW_END_MAX_SPAWN_DISTANCE();

    MCAPI static int const& MAX_DEFAULT_SPAWN_DISTANCE();

    MCAPI static uint64 const& MAX_WORLD_AGE();

    MCAPI static int const& MIN_DEFAULT_SPAWN_DISTANCE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::MobSpawnRules&&);

    MCAPI void* $ctor(::MobSpawnRules const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
