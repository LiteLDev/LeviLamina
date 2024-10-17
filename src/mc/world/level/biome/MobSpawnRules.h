#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Difficulty.h"

class MobSpawnRules {
public:
    // NOLINTBEGIN
    MCAPI MobSpawnRules();

    MCAPI MobSpawnRules(class MobSpawnRules&&);

    MCAPI MobSpawnRules(class MobSpawnRules const&);

    MCAPI class MobSpawnRules& addHerd(int minCount, int maxCount, std::string const& herdEvent);

    MCAPI class MobSpawnRules&
    addPermutation(int weight, int guaranteedCount, struct ActorDefinitionIdentifier const& id);

    MCAPI bool canSpawnInConditions(class SpawnConditions const& conditions, class BlockSource& region) const;

    MCAPI int getAboveBlockDistance() const;

    MCAPI std::pair<int, int> const getDelayRange() const;

    MCAPI int getDelaySpawnChance() const;

    MCAPI std::vector<class MobSpawnerPermutation> const& getGuaranteedPermutations() const;

    MCAPI std::vector<struct MobSpawnHerdInfo>& getHerdListMutable();

    MCAPI std::string const getMobToDelayId() const;

    MCAPI std::vector<class MobSpawnerPermutation> const& getPermutations() const;

    MCAPI bool getPersistence() const;

    MCAPI int getPopulationCap(class SpawnConditions const& conditions) const;

    MCAPI std::vector<class BlockDescriptor> const& getSpawnAboveBlockList() const;

    MCAPI std::vector<class BlockDescriptor>& getSpawnAboveBlockListMutable();

    MCAPI int getSpawnCount(
        class SpawnConditions const&   conditions,
        class BlockSource&             region,
        class Random&                  random,
        struct MobSpawnHerdInfo const& herdInfo
    ) const;

    MCAPI std::vector<class BlockDescriptor> const& getSpawnOnBlockList() const;

    MCAPI std::vector<class BlockDescriptor>& getSpawnOnBlockListMutable();

    MCAPI std::vector<class BlockDescriptor> const& getSpawnOnBlockPreventedList() const;

    MCAPI std::vector<class BlockDescriptor>& getSpawnOnBlockPreventedListMutable();

    MCAPI bool isLavaSpawner() const;

    MCAPI bool isUnderwaterSpawner() const;

    MCAPI class MobSpawnRules& operator=(class MobSpawnRules&&);

    MCAPI class MobSpawnRules& operator=(class MobSpawnRules const&);

    MCAPI struct MobSpawnHerdInfo const& selectRandomHerd(class Random& random) const;

    MCAPI class MobSpawnRules& setAboveBlockDistance(int distance);

    MCAPI class MobSpawnRules& setBrightnessRange(int minBrightness, int maxBrightness, bool adjustForWeather);

    MCAPI class MobSpawnRules& setBubbleSpawner(bool isBubbleSpawner);

    MCAPI class MobSpawnRules& setDelayRange(int min, int max, std::string const& id);

    MCAPI class MobSpawnRules& setDelaySpawnChance(int chance);

    MCAPI class MobSpawnRules& setDifficultyRange(::Difficulty minDifficulty, ::Difficulty maxDifficulty);

    MCAPI class MobSpawnRules& setExperimentalGameplay();

    MCAPI class MobSpawnRules&
    setHardcodedSpawnRuleCallback(std::function<bool(class SpawnConditions const&, class BlockSource&)> callback);

    MCAPI class MobSpawnRules& setHeightRange(int minHeight, int maxHeight);

    MCAPI class MobSpawnRules& setLavaSpawner();

    MCAPI class MobSpawnRules& setMobEventType(std::string const& eventName);

    MCAPI class MobSpawnRules& setPersistence(bool persistence);

    MCAPI class MobSpawnRules& setPlayerInVillageBorderTolerance(uint tolerance);

    MCAPI class MobSpawnRules& setPlayerInVillageDistance(uint distance);

    MCAPI class MobSpawnRules& setPopulationCap(int surfaceCap, int undergroundCap);

    MCAPI class MobSpawnRules& setRarity(int rarity);

    MCAPI class MobSpawnRules& setSpawnDistanceCap(int max);

    MCAPI class MobSpawnRules& setSpawnDistances(int min, int max);

    MCAPI class MobSpawnRules& setSurfaceSpawner();

    MCAPI class MobSpawnRules& setUndergroundSpawner();

    MCAPI class MobSpawnRules& setUnderwaterSpawner();

    MCAPI class MobSpawnRules& setWorldAgeRange(uint64 min, uint64 max);

    MCAPI ~MobSpawnRules();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class MobSpawnRules const&);

    MCAPI void* ctor$();

    MCAPI void* ctor$(class MobSpawnRules&&);

    MCAPI void dtor$();

    MCAPI static int const& LOW_END_MAX_SPAWN_DISTANCE();

    MCAPI static int const& MAX_DEFAULT_SPAWN_DISTANCE();

    MCAPI static uint64 const& MAX_WORLD_AGE();

    MCAPI static int const& MIN_DEFAULT_SPAWN_DISTANCE();

    // NOLINTEND
};
