/**
 * @file  MobSpawnRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobSpawnRules.
 *
 */
class MobSpawnRules {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNRULES
public:
    class MobSpawnRules& operator=(class MobSpawnRules const &) = delete;
#endif

public:
    /**
     * @hash   1659099208
     * @symbol ??0MobSpawnRules@@QEAA@XZ
     */
    MCAPI MobSpawnRules();
    /**
     * @hash   -712940687
     * @symbol ??0MobSpawnRules@@QEAA@$$QEAV0@@Z
     */
    MCAPI MobSpawnRules(class MobSpawnRules &&);
    /**
     * @hash   891436961
     * @symbol ??0MobSpawnRules@@QEAA@AEBV0@@Z
     */
    MCAPI MobSpawnRules(class MobSpawnRules const &);
    /**
     * @hash   371378120
     * @symbol ?addHerd@MobSpawnRules@@QEAAAEAV1@HHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class MobSpawnRules & addHerd(int, int, std::string const &);
    /**
     * @hash   -1609823702
     * @symbol ?addPermutation@MobSpawnRules@@QEAAAEAV1@HHAEBUActorDefinitionIdentifier@@@Z
     */
    MCAPI class MobSpawnRules & addPermutation(int, int, struct ActorDefinitionIdentifier const &);
    /**
     * @hash   -2021646598
     * @symbol ?canSpawnInConditions@MobSpawnRules@@QEBA_NAEBVSpawnConditions@@AEAVBlockSource@@@Z
     */
    MCAPI bool canSpawnInConditions(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @hash   1303921326
     * @symbol ?getAboveBlockDistance@MobSpawnRules@@QEBAHXZ
     */
    MCAPI int getAboveBlockDistance() const;
    /**
     * @hash   -2143528113
     * @symbol ?getDelayRange@MobSpawnRules@@QEBA?BU?$pair@HH@std@@XZ
     */
    MCAPI struct std::pair<int, int> const getDelayRange() const;
    /**
     * @hash   -1503202900
     * @symbol ?getDelaySpawnChance@MobSpawnRules@@QEBAHXZ
     */
    MCAPI int getDelaySpawnChance() const;
    /**
     * @hash   1211861174
     * @symbol ?getGuaranteedPermutations@MobSpawnRules@@QEBAAEBV?$vector@VMobSpawnerPermutation@@V?$allocator@VMobSpawnerPermutation@@@std@@@std@@XZ
     */
    MCAPI std::vector<class MobSpawnerPermutation> const & getGuaranteedPermutations() const;
    /**
     * @hash   1894767846
     * @symbol ?getHerdListMutable@MobSpawnRules@@QEAAAEAV?$vector@UMobSpawnHerdInfo@@V?$allocator@UMobSpawnHerdInfo@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct MobSpawnHerdInfo> & getHerdListMutable();
    /**
     * @hash   603354272
     * @symbol ?getMobToDelayId@MobSpawnRules@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const getMobToDelayId() const;
    /**
     * @hash   -1877672010
     * @symbol ?getPermutations@MobSpawnRules@@QEBAAEBV?$vector@VMobSpawnerPermutation@@V?$allocator@VMobSpawnerPermutation@@@std@@@std@@XZ
     */
    MCAPI std::vector<class MobSpawnerPermutation> const & getPermutations() const;
    /**
     * @hash   2070051336
     * @symbol ?getPersistence@MobSpawnRules@@QEBA_NXZ
     */
    MCAPI bool getPersistence() const;
    /**
     * @hash   -1525904151
     * @symbol ?getPopulationCap@MobSpawnRules@@QEBAHAEBVSpawnConditions@@@Z
     */
    MCAPI int getPopulationCap(class SpawnConditions const &) const;
    /**
     * @hash   -1325913538
     * @symbol ?getSpawnAboveBlockList@MobSpawnRules@@QEBAAEBV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnAboveBlockList() const;
    /**
     * @hash   -1109565786
     * @symbol ?getSpawnAboveBlockListMutable@MobSpawnRules@@QEAAAEAV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnAboveBlockListMutable();
    /**
     * @hash   -1403850728
     * @symbol ?getSpawnCount@MobSpawnRules@@QEBAHAEBVSpawnConditions@@AEAVBlockSource@@AEAVRandom@@AEBUMobSpawnHerdInfo@@@Z
     */
    MCAPI int getSpawnCount(class SpawnConditions const &, class BlockSource &, class Random &, struct MobSpawnHerdInfo const &) const;
    /**
     * @hash   -1063346680
     * @symbol ?getSpawnOnBlockList@MobSpawnRules@@QEBAAEBV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnOnBlockList() const;
    /**
     * @hash   1775074844
     * @symbol ?getSpawnOnBlockListMutable@MobSpawnRules@@QEAAAEAV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnOnBlockListMutable();
    /**
     * @hash   -978994416
     * @symbol ?getSpawnOnBlockPreventedList@MobSpawnRules@@QEBAAEBV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnOnBlockPreventedList() const;
    /**
     * @hash   2071477076
     * @symbol ?getSpawnOnBlockPreventedListMutable@MobSpawnRules@@QEAAAEAV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnOnBlockPreventedListMutable();
    /**
     * @hash   1324607654
     * @symbol ?isLavaSpawner@MobSpawnRules@@QEBA_NXZ
     */
    MCAPI bool isLavaSpawner() const;
    /**
     * @hash   -111683770
     * @symbol ?isUnderwaterSpawner@MobSpawnRules@@QEBA_NXZ
     */
    MCAPI bool isUnderwaterSpawner() const;
    /**
     * @hash   -1600269209
     * @symbol ?selectRandomHerd@MobSpawnRules@@QEBAAEBUMobSpawnHerdInfo@@AEAVRandom@@@Z
     */
    MCAPI struct MobSpawnHerdInfo const & selectRandomHerd(class Random &) const;
    /**
     * @hash   1028493730
     * @symbol ?setAboveBlockDistance@MobSpawnRules@@QEAAAEAV1@H@Z
     */
    MCAPI class MobSpawnRules & setAboveBlockDistance(int);
    /**
     * @hash   -1327999124
     * @symbol ?setBrightnessRange@MobSpawnRules@@QEAAAEAV1@HH_N@Z
     */
    MCAPI class MobSpawnRules & setBrightnessRange(int, int, bool);
    /**
     * @hash   -850517956
     * @symbol ?setBubbleSpawner@MobSpawnRules@@QEAAAEAV1@_N@Z
     */
    MCAPI class MobSpawnRules & setBubbleSpawner(bool);
    /**
     * @hash   260747158
     * @symbol ?setDelayRange@MobSpawnRules@@QEAAAEAV1@HHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class MobSpawnRules & setDelayRange(int, int, std::string);
    /**
     * @hash   -682587886
     * @symbol ?setDelaySpawnChance@MobSpawnRules@@QEAAAEAV1@H@Z
     */
    MCAPI class MobSpawnRules & setDelaySpawnChance(int);
    /**
     * @hash   488416265
     * @symbol ?setDifficultyRange@MobSpawnRules@@QEAAAEAV1@W4Difficulty@@0@Z
     */
    MCAPI class MobSpawnRules & setDifficultyRange(enum Difficulty, enum Difficulty);
    /**
     * @hash   -1923671367
     * @symbol ?setExperimentalGameplay@MobSpawnRules@@QEAAAEAV1@XZ
     */
    MCAPI class MobSpawnRules & setExperimentalGameplay();
    /**
     * @hash   1310614841
     * @symbol ?setHardcodedSpawnRuleCallback@MobSpawnRules@@QEAAAEAV1@V?$function@$$A6A_NAEBVSpawnConditions@@AEAVBlockSource@@@Z@std@@@Z
     */
    MCAPI class MobSpawnRules & setHardcodedSpawnRuleCallback(class std::function<bool (class SpawnConditions const &, class BlockSource &)>);
    /**
     * @hash   569264835
     * @symbol ?setHeightRange@MobSpawnRules@@QEAAAEAV1@HH@Z
     */
    MCAPI class MobSpawnRules & setHeightRange(int, int);
    /**
     * @hash   2018713483
     * @symbol ?setLavaSpawner@MobSpawnRules@@QEAAAEAV1@XZ
     */
    MCAPI class MobSpawnRules & setLavaSpawner();
    /**
     * @hash   -2072358024
     * @symbol ?setMobEventType@MobSpawnRules@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class MobSpawnRules & setMobEventType(std::string const &);
    /**
     * @hash   -2004554234
     * @symbol ?setPersistence@MobSpawnRules@@QEAAAEAV1@_N@Z
     */
    MCAPI class MobSpawnRules & setPersistence(bool);
    /**
     * @hash   -1076813172
     * @symbol ?setPlayerInVillageBorderTolerance@MobSpawnRules@@QEAAAEAV1@I@Z
     */
    MCAPI class MobSpawnRules & setPlayerInVillageBorderTolerance(unsigned int);
    /**
     * @hash   -70900102
     * @symbol ?setPlayerInVillageDistance@MobSpawnRules@@QEAAAEAV1@I@Z
     */
    MCAPI class MobSpawnRules & setPlayerInVillageDistance(unsigned int);
    /**
     * @hash   -409901581
     * @symbol ?setPopulationCap@MobSpawnRules@@QEAAAEAV1@HH@Z
     */
    MCAPI class MobSpawnRules & setPopulationCap(int, int);
    /**
     * @hash   1089684114
     * @symbol ?setRarity@MobSpawnRules@@QEAAAEAV1@H@Z
     */
    MCAPI class MobSpawnRules & setRarity(int);
    /**
     * @hash   -125349502
     * @symbol ?setSpawnDistanceCap@MobSpawnRules@@QEAAAEAV1@H@Z
     */
    MCAPI class MobSpawnRules & setSpawnDistanceCap(int);
    /**
     * @hash   441621697
     * @symbol ?setSpawnDistances@MobSpawnRules@@QEAAAEAV1@HH@Z
     */
    MCAPI class MobSpawnRules & setSpawnDistances(int, int);
    /**
     * @hash   792605673
     * @symbol ?setSurfaceSpawner@MobSpawnRules@@QEAAAEAV1@XZ
     */
    MCAPI class MobSpawnRules & setSurfaceSpawner();
    /**
     * @hash   1507042361
     * @symbol ?setUndergroundSpawner@MobSpawnRules@@QEAAAEAV1@XZ
     */
    MCAPI class MobSpawnRules & setUndergroundSpawner();
    /**
     * @hash   -1570005269
     * @symbol ?setUnderwaterSpawner@MobSpawnRules@@QEAAAEAV1@XZ
     */
    MCAPI class MobSpawnRules & setUnderwaterSpawner();
    /**
     * @hash   -476409591
     * @symbol ?setWorldAgeRange@MobSpawnRules@@QEAAAEAV1@_K0@Z
     */
    MCAPI class MobSpawnRules & setWorldAgeRange(unsigned __int64, unsigned __int64);
    /**
     * @hash   739184120
     * @symbol ??1MobSpawnRules@@QEAA@XZ
     */
    MCAPI ~MobSpawnRules();
    /**
     * @hash   950452925
     * @symbol ?LOW_END_MAX_SPAWN_DISTANCE@MobSpawnRules@@2HB
     */
    MCAPI static int const LOW_END_MAX_SPAWN_DISTANCE;
    /**
     * @hash   -416961129
     * @symbol ?MAX_DEFAULT_SPAWN_DISTANCE@MobSpawnRules@@2HB
     */
    MCAPI static int const MAX_DEFAULT_SPAWN_DISTANCE;
    /**
     * @hash   1166886268
     * @symbol ?MAX_WORLD_AGE@MobSpawnRules@@2_KB
     */
    MCAPI static unsigned __int64 const MAX_WORLD_AGE;
    /**
     * @hash   21262135
     * @symbol ?MIN_DEFAULT_SPAWN_DISTANCE@MobSpawnRules@@2HB
     */
    MCAPI static int const MIN_DEFAULT_SPAWN_DISTANCE;

};