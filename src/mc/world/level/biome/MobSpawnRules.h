#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Difficulty.h"

class MobSpawnRules {
public:
    // NOLINTBEGIN
    // symbol: ??0MobSpawnRules@@QEAA@XZ
    MCAPI MobSpawnRules();

    // symbol: ??0MobSpawnRules@@QEAA@$$QEAV0@@Z
    MCAPI MobSpawnRules(class MobSpawnRules&&);

    // symbol: ??0MobSpawnRules@@QEAA@AEBV0@@Z
    MCAPI MobSpawnRules(class MobSpawnRules const&);

    // symbol: ?addHerd@MobSpawnRules@@QEAAAEAV1@HHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class MobSpawnRules& addHerd(int minCount, int maxCount, std::string const& herdEvent);

    // symbol: ?addPermutation@MobSpawnRules@@QEAAAEAV1@HHAEBUActorDefinitionIdentifier@@@Z
    MCAPI class MobSpawnRules&
    addPermutation(int weight, int guaranteedCount, struct ActorDefinitionIdentifier const& id);

    // symbol: ?canSpawnInConditions@MobSpawnRules@@QEBA_NAEBVSpawnConditions@@AEAVBlockSource@@@Z
    MCAPI bool canSpawnInConditions(class SpawnConditions const& conditions, class BlockSource& region) const;

    // symbol: ?getAboveBlockDistance@MobSpawnRules@@QEBAHXZ
    MCAPI int getAboveBlockDistance() const;

    // symbol: ?getDelayRange@MobSpawnRules@@QEBA?BU?$pair@HH@std@@XZ
    MCAPI std::pair<int, int> const getDelayRange() const;

    // symbol: ?getDelaySpawnChance@MobSpawnRules@@QEBAHXZ
    MCAPI int getDelaySpawnChance() const;

    // symbol:
    // ?getGuaranteedPermutations@MobSpawnRules@@QEBAAEBV?$vector@VMobSpawnerPermutation@@V?$allocator@VMobSpawnerPermutation@@@std@@@std@@XZ
    MCAPI std::vector<class MobSpawnerPermutation> const& getGuaranteedPermutations() const;

    // symbol:
    // ?getHerdListMutable@MobSpawnRules@@QEAAAEAV?$vector@UMobSpawnHerdInfo@@V?$allocator@UMobSpawnHerdInfo@@@std@@@std@@XZ
    MCAPI std::vector<struct MobSpawnHerdInfo>& getHerdListMutable();

    // symbol: ?getMobToDelayId@MobSpawnRules@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const getMobToDelayId() const;

    // symbol:
    // ?getPermutations@MobSpawnRules@@QEBAAEBV?$vector@VMobSpawnerPermutation@@V?$allocator@VMobSpawnerPermutation@@@std@@@std@@XZ
    MCAPI std::vector<class MobSpawnerPermutation> const& getPermutations() const;

    // symbol: ?getPersistence@MobSpawnRules@@QEBA_NXZ
    MCAPI bool getPersistence() const;

    // symbol: ?getPopulationCap@MobSpawnRules@@QEBAHAEBVSpawnConditions@@@Z
    MCAPI int getPopulationCap(class SpawnConditions const& conditions) const;

    // symbol:
    // ?getSpawnAboveBlockList@MobSpawnRules@@QEBAAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@XZ
    MCAPI std::vector<class BlockDescriptor> const& getSpawnAboveBlockList() const;

    // symbol:
    // ?getSpawnAboveBlockListMutable@MobSpawnRules@@QEAAAEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@XZ
    MCAPI std::vector<class BlockDescriptor>& getSpawnAboveBlockListMutable();

    // symbol:
    // ?getSpawnCount@MobSpawnRules@@QEBAHAEBVSpawnConditions@@AEAVBlockSource@@AEAVRandom@@AEBUMobSpawnHerdInfo@@@Z
    MCAPI int getSpawnCount(
        class SpawnConditions const&   conditions,
        class BlockSource&             region,
        class Random&                  random,
        struct MobSpawnHerdInfo const& herdInfo
    ) const;

    // symbol:
    // ?getSpawnOnBlockList@MobSpawnRules@@QEBAAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@XZ
    MCAPI std::vector<class BlockDescriptor> const& getSpawnOnBlockList() const;

    // symbol:
    // ?getSpawnOnBlockListMutable@MobSpawnRules@@QEAAAEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@XZ
    MCAPI std::vector<class BlockDescriptor>& getSpawnOnBlockListMutable();

    // symbol:
    // ?getSpawnOnBlockPreventedList@MobSpawnRules@@QEBAAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@XZ
    MCAPI std::vector<class BlockDescriptor> const& getSpawnOnBlockPreventedList() const;

    // symbol:
    // ?getSpawnOnBlockPreventedListMutable@MobSpawnRules@@QEAAAEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@XZ
    MCAPI std::vector<class BlockDescriptor>& getSpawnOnBlockPreventedListMutable();

    // symbol: ?isLavaSpawner@MobSpawnRules@@QEBA_NXZ
    MCAPI bool isLavaSpawner() const;

    // symbol: ?isUnderwaterSpawner@MobSpawnRules@@QEBA_NXZ
    MCAPI bool isUnderwaterSpawner() const;

    // symbol: ??4MobSpawnRules@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class MobSpawnRules& operator=(class MobSpawnRules&&);

    // symbol: ??4MobSpawnRules@@QEAAAEAV0@AEBV0@@Z
    MCAPI class MobSpawnRules& operator=(class MobSpawnRules const&);

    // symbol: ?selectRandomHerd@MobSpawnRules@@QEBAAEBUMobSpawnHerdInfo@@AEAVRandom@@@Z
    MCAPI struct MobSpawnHerdInfo const& selectRandomHerd(class Random& random) const;

    // symbol: ?setAboveBlockDistance@MobSpawnRules@@QEAAAEAV1@H@Z
    MCAPI class MobSpawnRules& setAboveBlockDistance(int distance);

    // symbol: ?setBrightnessRange@MobSpawnRules@@QEAAAEAV1@HH_N@Z
    MCAPI class MobSpawnRules& setBrightnessRange(int minBrightness, int maxBrightness, bool adjustForWeather);

    // symbol: ?setBubbleSpawner@MobSpawnRules@@QEAAAEAV1@_N@Z
    MCAPI class MobSpawnRules& setBubbleSpawner(bool);

    // symbol:
    // ?setDelayRange@MobSpawnRules@@QEAAAEAV1@HHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class MobSpawnRules& setDelayRange(int min, int max, std::string const& id);

    // symbol: ?setDelaySpawnChance@MobSpawnRules@@QEAAAEAV1@H@Z
    MCAPI class MobSpawnRules& setDelaySpawnChance(int chance);

    // symbol: ?setDifficultyRange@MobSpawnRules@@QEAAAEAV1@W4Difficulty@@0@Z
    MCAPI class MobSpawnRules& setDifficultyRange(::Difficulty minDifficulty, ::Difficulty maxDifficulty);

    // symbol: ?setExperimentalGameplay@MobSpawnRules@@QEAAAEAV1@XZ
    MCAPI class MobSpawnRules& setExperimentalGameplay();

    // symbol:
    // ?setHardcodedSpawnRuleCallback@MobSpawnRules@@QEAAAEAV1@V?$function@$$A6A_NAEBVSpawnConditions@@AEAVBlockSource@@@Z@std@@@Z
    MCAPI class MobSpawnRules&
    setHardcodedSpawnRuleCallback(std::function<bool(class SpawnConditions const&, class BlockSource&)> callback);

    // symbol: ?setHeightRange@MobSpawnRules@@QEAAAEAV1@HH@Z
    MCAPI class MobSpawnRules& setHeightRange(int minHeight, int maxHeight);

    // symbol: ?setLavaSpawner@MobSpawnRules@@QEAAAEAV1@XZ
    MCAPI class MobSpawnRules& setLavaSpawner();

    // symbol:
    // ?setMobEventType@MobSpawnRules@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class MobSpawnRules& setMobEventType(std::string const& eventName);

    // symbol: ?setPersistence@MobSpawnRules@@QEAAAEAV1@_N@Z
    MCAPI class MobSpawnRules& setPersistence(bool persistence);

    // symbol: ?setPlayerInVillageBorderTolerance@MobSpawnRules@@QEAAAEAV1@I@Z
    MCAPI class MobSpawnRules& setPlayerInVillageBorderTolerance(uint tolerance);

    // symbol: ?setPlayerInVillageDistance@MobSpawnRules@@QEAAAEAV1@I@Z
    MCAPI class MobSpawnRules& setPlayerInVillageDistance(uint distance);

    // symbol: ?setPopulationCap@MobSpawnRules@@QEAAAEAV1@HH@Z
    MCAPI class MobSpawnRules& setPopulationCap(int surfaceCap, int undergroundCap);

    // symbol: ?setRarity@MobSpawnRules@@QEAAAEAV1@H@Z
    MCAPI class MobSpawnRules& setRarity(int rarity);

    // symbol: ?setSpawnDistanceCap@MobSpawnRules@@QEAAAEAV1@H@Z
    MCAPI class MobSpawnRules& setSpawnDistanceCap(int max);

    // symbol: ?setSpawnDistances@MobSpawnRules@@QEAAAEAV1@HH@Z
    MCAPI class MobSpawnRules& setSpawnDistances(int min, int max);

    // symbol: ?setSurfaceSpawner@MobSpawnRules@@QEAAAEAV1@XZ
    MCAPI class MobSpawnRules& setSurfaceSpawner();

    // symbol: ?setUndergroundSpawner@MobSpawnRules@@QEAAAEAV1@XZ
    MCAPI class MobSpawnRules& setUndergroundSpawner();

    // symbol: ?setUnderwaterSpawner@MobSpawnRules@@QEAAAEAV1@XZ
    MCAPI class MobSpawnRules& setUnderwaterSpawner();

    // symbol: ?setWorldAgeRange@MobSpawnRules@@QEAAAEAV1@_K0@Z
    MCAPI class MobSpawnRules& setWorldAgeRange(uint64 min, uint64 max);

    // symbol: ??1MobSpawnRules@@QEAA@XZ
    MCAPI ~MobSpawnRules();

    // symbol: ?LOW_END_MAX_SPAWN_DISTANCE@MobSpawnRules@@2HB
    MCAPI static int const LOW_END_MAX_SPAWN_DISTANCE;

    // symbol: ?MAX_DEFAULT_SPAWN_DISTANCE@MobSpawnRules@@2HB
    MCAPI static int const MAX_DEFAULT_SPAWN_DISTANCE;

    // symbol: ?MAX_WORLD_AGE@MobSpawnRules@@2_KB
    MCAPI static uint64 const MAX_WORLD_AGE;

    // symbol: ?MIN_DEFAULT_SPAWN_DISTANCE@MobSpawnRules@@2HB
    MCAPI static int const MIN_DEFAULT_SPAWN_DISTANCE;

    // NOLINTEND
};
