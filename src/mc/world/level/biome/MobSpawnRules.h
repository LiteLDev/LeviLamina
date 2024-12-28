#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Difficulty.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockSource;
class MobSpawnerData;
class MobSpawnerPermutation;
class Random;
class SpawnConditions;
struct ActorDefinitionIdentifier;
struct MobSpawnHerdInfo;
// clang-format on

class MobSpawnRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9c06bc;
    ::ll::UntypedStorage<4, 4>  mUnkd8718f;
    ::ll::UntypedStorage<4, 4>  mUnk10240b;
    ::ll::UntypedStorage<4, 4>  mUnk8c1335;
    ::ll::UntypedStorage<4, 4>  mUnk8e1387;
    ::ll::UntypedStorage<1, 1>  mUnk6eb12e;
    ::ll::UntypedStorage<4, 4>  mUnkf7398d;
    ::ll::UntypedStorage<4, 4>  mUnk3309d0;
    ::ll::UntypedStorage<4, 4>  mUnk1e8675;
    ::ll::UntypedStorage<4, 4>  mUnk3ade4e;
    ::ll::UntypedStorage<4, 4>  mUnk75c012;
    ::ll::UntypedStorage<4, 4>  mUnk16bafa;
    ::ll::UntypedStorage<4, 4>  mUnk5da43d;
    ::ll::UntypedStorage<4, 4>  mUnk8fd342;
    ::ll::UntypedStorage<4, 4>  mUnke5872a;
    ::ll::UntypedStorage<4, 4>  mUnk6e66eb;
    ::ll::UntypedStorage<1, 1>  mUnk2563fa;
    ::ll::UntypedStorage<1, 1>  mUnk6bd693;
    ::ll::UntypedStorage<1, 1>  mUnkef850c;
    ::ll::UntypedStorage<1, 1>  mUnkab1106;
    ::ll::UntypedStorage<1, 1>  mUnk7ef38d;
    ::ll::UntypedStorage<4, 4>  mUnk72fc26;
    ::ll::UntypedStorage<4, 4>  mUnk46f75e;
    ::ll::UntypedStorage<1, 1>  mUnk18ecd0;
    ::ll::UntypedStorage<8, 8>  mUnka90688;
    ::ll::UntypedStorage<8, 8>  mUnke11f7c;
    ::ll::UntypedStorage<4, 4>  mUnk7ca176;
    ::ll::UntypedStorage<4, 4>  mUnk371bf6;
    ::ll::UntypedStorage<8, 24> mUnk3c801b;
    ::ll::UntypedStorage<8, 24> mUnkeb5390;
    ::ll::UntypedStorage<8, 32> mUnk90cf78;
    ::ll::UntypedStorage<8, 24> mUnk4d674b;
    ::ll::UntypedStorage<8, 24> mUnk3ece83;
    ::ll::UntypedStorage<8, 24> mUnk1d4d01;
    ::ll::UntypedStorage<4, 4>  mUnk45133a;
    ::ll::UntypedStorage<8, 24> mUnk87ca41;
    ::ll::UntypedStorage<8, 32> mUnkf0a3ab;
    ::ll::UntypedStorage<4, 4>  mUnkda3621;
    ::ll::UntypedStorage<1, 1>  mUnkf5d9fe;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobSpawnRules();

    MCAPI MobSpawnRules(::MobSpawnRules&&);

    MCAPI MobSpawnRules(::MobSpawnRules const&);

    MCAPI ::MobSpawnRules& addPermutation(int weight, int guaranteedCount, ::ActorDefinitionIdentifier const& id);

    MCAPI bool canSpawnInConditions(::SpawnConditions const& conditions, ::BlockSource& region) const;

    MCAPI int getAboveBlockDistance() const;

    MCAPI ::std::pair<int, int> const getDelayRange() const;

    MCAPI int getDelaySpawnChance() const;

    MCAPI ::std::vector<::MobSpawnerPermutation> const& getGuaranteedPermutations() const;

    MCAPI ::std::vector<::MobSpawnHerdInfo>& getHerdListMutable();

    MCAPI ::std::string const getMobToDelayId() const;

    MCAPI ::std::vector<::MobSpawnerPermutation> const& getPermutations() const;

    MCAPI bool getPersistence() const;

    MCAPI int getPopulationCap(::SpawnConditions const& conditions) const;

    MCAPI ::std::vector<::BlockDescriptor> const& getSpawnAboveBlockList() const;

    MCAPI ::std::vector<::BlockDescriptor>& getSpawnAboveBlockListMutable();

    MCAPI int getSpawnCount(
        ::SpawnConditions const&  conditions,
        ::BlockSource&            region,
        ::Random&                 random,
        ::MobSpawnHerdInfo const& herdInfo
    ) const;

    MCAPI ::std::vector<::BlockDescriptor> const& getSpawnOnBlockList() const;

    MCAPI ::std::vector<::BlockDescriptor>& getSpawnOnBlockListMutable();

    MCAPI ::std::vector<::BlockDescriptor> const& getSpawnOnBlockPreventedList() const;

    MCAPI ::std::vector<::BlockDescriptor>& getSpawnOnBlockPreventedListMutable();

    MCAPI bool isLavaSpawner() const;

    MCAPI bool isUnderwaterSpawner() const;

    MCAPI ::MobSpawnRules& operator=(::MobSpawnRules&&);

    MCAPI ::MobSpawnRules& operator=(::MobSpawnRules const&);

    MCAPI ::MobSpawnHerdInfo const& selectRandomHerd(::Random& random) const;

    MCAPI ::MobSpawnRules& setAboveBlockDistance(int distance);

    MCAPI ::MobSpawnRules& setBrightnessRange(int minBrightness, int maxBrightness, bool adjustForWeather);

    MCAPI ::MobSpawnRules& setBubbleSpawner(bool isBubbleSpawner);

    MCAPI ::MobSpawnRules& setDelayRange(int min, int max, ::std::string const& id);

    MCAPI ::MobSpawnRules& setDelaySpawnChance(int chance);

    MCAPI ::MobSpawnRules& setDifficultyRange(::Difficulty minDifficulty, ::Difficulty maxDifficulty);

    MCAPI ::MobSpawnRules& setExperimentalGameplay();

    MCAPI ::MobSpawnRules&
    setHardcodedSpawnRuleCallback(::std::function<bool(::SpawnConditions const&, ::BlockSource&)> callback);

    MCAPI ::MobSpawnRules& setHeightRange(int minHeight, int maxHeight);

    MCAPI ::MobSpawnRules& setLavaSpawner();

    MCAPI ::MobSpawnRules& setMobEventType(::std::string const& eventName);

    MCAPI ::MobSpawnRules& setPersistence(bool persistence);

    MCAPI ::MobSpawnRules& setPlayerInVillageBorderTolerance(uint tolerance);

    MCAPI ::MobSpawnRules& setPlayerInVillageDistance(uint distance);

    MCAPI ::MobSpawnRules& setPopulationCap(int surfaceCap, int undergroundCap);

    MCAPI ::MobSpawnRules& setRarity(int rarity);

    MCAPI ::MobSpawnRules& setSpawnDistanceCap(int max);

    MCAPI ::MobSpawnRules& setSpawnDistances(int min, int max);

    MCAPI ::MobSpawnRules& setSurfaceSpawner();

    MCAPI ::MobSpawnRules& setUndergroundSpawner();

    MCAPI ::MobSpawnRules& setUnderwaterSpawner();

    MCAPI ::MobSpawnRules& setWorldAgeRange(uint64 min, uint64 max);

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
