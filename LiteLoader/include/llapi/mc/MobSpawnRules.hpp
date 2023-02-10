/**
 * @file  MobSpawnRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1749482975
     * @symbol  ??0MobSpawnRules\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MobSpawnRules(class MobSpawnRules &&);
    /**
     * @hash   1139067441
     * @symbol  ??0MobSpawnRules\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobSpawnRules(class MobSpawnRules const &);
    /**
     * @hash   -1757637096
     * @symbol  ??0MobSpawnRules\@\@QEAA\@XZ
     */
    MCAPI MobSpawnRules();
    /**
     * @hash   1249655240
     * @symbol  ?addHerd\@MobSpawnRules\@\@QEAAAEAV1\@HHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules & addHerd(int, int, std::string const &);
    /**
     * @hash   -731561958
     * @symbol  ?addPermutation\@MobSpawnRules\@\@QEAAAEAV1\@HHAEBUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI class MobSpawnRules & addPermutation(int, int, struct ActorDefinitionIdentifier const &);
    /**
     * @hash   -1143384854
     * @symbol  ?canSpawnInConditions\@MobSpawnRules\@\@QEBA_NAEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool canSpawnInConditions(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @hash   738671806
     * @symbol  ?getAboveBlockDistance\@MobSpawnRules\@\@QEBAHXZ
     */
    MCAPI int getAboveBlockDistance() const;
    /**
     * @hash   -1265235617
     * @symbol  ?getDelayRange\@MobSpawnRules\@\@QEBA?BU?$pair\@HH\@std\@\@XZ
     */
    MCAPI struct std::pair<int, int> const getDelayRange() const;
    /**
     * @hash   -624910404
     * @symbol  ?getDelaySpawnChance\@MobSpawnRules\@\@QEBAHXZ
     */
    MCAPI int getDelaySpawnChance() const;
    /**
     * @hash   2010321478
     * @symbol  ?getGuaranteedPermutations\@MobSpawnRules\@\@QEBAAEBV?$vector\@VMobSpawnerPermutation\@\@V?$allocator\@VMobSpawnerPermutation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerPermutation> const & getGuaranteedPermutations() const;
    /**
     * @hash   1049195478
     * @symbol  ?getHerdListMutable\@MobSpawnRules\@\@QEAAAEAV?$vector\@UMobSpawnHerdInfo\@\@V?$allocator\@UMobSpawnHerdInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct MobSpawnHerdInfo> & getHerdListMutable();
    /**
     * @hash   1481646768
     * @symbol  ?getMobToDelayId\@MobSpawnRules\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getMobToDelayId() const;
    /**
     * @hash   -1978600074
     * @symbol  ?getPermutations\@MobSpawnRules\@\@QEBAAEBV?$vector\@VMobSpawnerPermutation\@\@V?$allocator\@VMobSpawnerPermutation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerPermutation> const & getPermutations() const;
    /**
     * @hash   -1346623464
     * @symbol  ?getPersistence\@MobSpawnRules\@\@QEBA_NXZ
     */
    MCAPI bool getPersistence() const;
    /**
     * @hash   -647611655
     * @symbol  ?getPopulationCap\@MobSpawnRules\@\@QEBAHAEBVSpawnConditions\@\@\@Z
     */
    MCAPI int getPopulationCap(class SpawnConditions const &) const;
    /**
     * @hash   -1219650002
     * @symbol  ?getSpawnAboveBlockList\@MobSpawnRules\@\@QEBAAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnAboveBlockList() const;
    /**
     * @hash   -1003302250
     * @symbol  ?getSpawnAboveBlockListMutable\@MobSpawnRules\@\@QEAAAEAV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnAboveBlockListMutable();
    /**
     * @hash   -525558232
     * @symbol  ?getSpawnCount\@MobSpawnRules\@\@QEBAHAEBVSpawnConditions\@\@AEAVBlockSource\@\@AEAVRandom\@\@AEBUMobSpawnHerdInfo\@\@\@Z
     */
    MCAPI int getSpawnCount(class SpawnConditions const &, class BlockSource &, class Random &, struct MobSpawnHerdInfo const &) const;
    /**
     * @hash   -731689352
     * @symbol  ?getSpawnOnBlockList\@MobSpawnRules\@\@QEBAAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnOnBlockList() const;
    /**
     * @hash   2106732172
     * @symbol  ?getSpawnOnBlockListMutable\@MobSpawnRules\@\@QEAAAEAV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnOnBlockListMutable();
    /**
     * @hash   -1174667792
     * @symbol  ?getSpawnOnBlockPreventedList\@MobSpawnRules\@\@QEBAAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnOnBlockPreventedList() const;
    /**
     * @hash   1875803700
     * @symbol  ?getSpawnOnBlockPreventedListMutable\@MobSpawnRules\@\@QEAAAEAV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnOnBlockPreventedListMutable();
    /**
     * @hash   373156150
     * @symbol  ?isLavaSpawner\@MobSpawnRules\@\@QEBA_NXZ
     */
    MCAPI bool isLavaSpawner() const;
    /**
     * @hash   766639478
     * @symbol  ?isUnderwaterSpawner\@MobSpawnRules\@\@QEBA_NXZ
     */
    MCAPI bool isUnderwaterSpawner() const;
    /**
     * @hash   -721945961
     * @symbol  ?selectRandomHerd\@MobSpawnRules\@\@QEBAAEBUMobSpawnHerdInfo\@\@AEAVRandom\@\@\@Z
     */
    MCAPI struct MobSpawnHerdInfo const & selectRandomHerd(class Random &) const;
    /**
     * @hash   1906601714
     * @symbol  ?setAboveBlockDistance\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules & setAboveBlockDistance(int);
    /**
     * @hash   -449891140
     * @symbol  ?setBrightnessRange\@MobSpawnRules\@\@QEAAAEAV1\@HH_N\@Z
     */
    MCAPI class MobSpawnRules & setBrightnessRange(int, int, bool);
    /**
     * @hash   27590028
     * @symbol  ?setBubbleSpawner\@MobSpawnRules\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class MobSpawnRules & setBubbleSpawner(bool);
    /**
     * @hash   -1906250072
     * @symbol  ?setDelayRange\@MobSpawnRules\@\@QEAAAEAV1\@HHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules & setDelayRange(int, int, std::string const &);
    /**
     * @hash   195397090
     * @symbol  ?setDelaySpawnChance\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules & setDelaySpawnChance(int);
    /**
     * @hash   1366401241
     * @symbol  ?setDifficultyRange\@MobSpawnRules\@\@QEAAAEAV1\@W4Difficulty\@\@0\@Z
     */
    MCAPI class MobSpawnRules & setDifficultyRange(enum class Difficulty, enum class Difficulty);
    /**
     * @hash   -1045686391
     * @symbol  ?setExperimentalGameplay\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setExperimentalGameplay();
    /**
     * @hash   -2106367479
     * @symbol  ?setHardcodedSpawnRuleCallback\@MobSpawnRules\@\@QEAAAEAV1\@V?$function\@$$A6A_NAEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules & setHardcodedSpawnRuleCallback(class std::function<bool (class SpawnConditions const &, class BlockSource &)>);
    /**
     * @hash   1447326691
     * @symbol  ?setHeightRange\@MobSpawnRules\@\@QEAAAEAV1\@HH\@Z
     */
    MCAPI class MobSpawnRules & setHeightRange(int, int);
    /**
     * @hash   -1398191957
     * @symbol  ?setLavaSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setLavaSpawner();
    /**
     * @hash   -1194296168
     * @symbol  ?setMobEventType\@MobSpawnRules\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules & setMobEventType(std::string const &);
    /**
     * @hash   -1126492378
     * @symbol  ?setPersistence\@MobSpawnRules\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class MobSpawnRules & setPersistence(bool);
    /**
     * @hash   -198751316
     * @symbol  ?setPlayerInVillageBorderTolerance\@MobSpawnRules\@\@QEAAAEAV1\@I\@Z
     */
    MCAPI class MobSpawnRules & setPlayerInVillageBorderTolerance(unsigned int);
    /**
     * @hash   807161754
     * @symbol  ?setPlayerInVillageDistance\@MobSpawnRules\@\@QEAAAEAV1\@I\@Z
     */
    MCAPI class MobSpawnRules & setPlayerInVillageDistance(unsigned int);
    /**
     * @hash   468160275
     * @symbol  ?setPopulationCap\@MobSpawnRules\@\@QEAAAEAV1\@HH\@Z
     */
    MCAPI class MobSpawnRules & setPopulationCap(int, int);
    /**
     * @hash   1967745970
     * @symbol  ?setRarity\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules & setRarity(int);
    /**
     * @hash   752712354
     * @symbol  ?setSpawnDistanceCap\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules & setSpawnDistanceCap(int);
    /**
     * @hash   1319683553
     * @symbol  ?setSpawnDistances\@MobSpawnRules\@\@QEAAAEAV1\@HH\@Z
     */
    MCAPI class MobSpawnRules & setSpawnDistances(int, int);
    /**
     * @hash   1670667529
     * @symbol  ?setSurfaceSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setSurfaceSpawner();
    /**
     * @hash   -1909863079
     * @symbol  ?setUndergroundSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setUndergroundSpawner();
    /**
     * @hash   -691943413
     * @symbol  ?setUnderwaterSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setUnderwaterSpawner();
    /**
     * @hash   401652265
     * @symbol  ?setWorldAgeRange\@MobSpawnRules\@\@QEAAAEAV1\@_K0\@Z
     */
    MCAPI class MobSpawnRules & setWorldAgeRange(unsigned __int64, unsigned __int64);
    /**
     * @hash   986937608
     * @symbol  ??1MobSpawnRules\@\@QEAA\@XZ
     */
    MCAPI ~MobSpawnRules();
    /**
     * @hash   1993852909
     * @symbol  ?LOW_END_MAX_SPAWN_DISTANCE\@MobSpawnRules\@\@2HB
     */
    MCAPI static int const LOW_END_MAX_SPAWN_DISTANCE;
    /**
     * @hash   626438855
     * @symbol  ?MAX_DEFAULT_SPAWN_DISTANCE\@MobSpawnRules\@\@2HB
     */
    MCAPI static int const MAX_DEFAULT_SPAWN_DISTANCE;
    /**
     * @hash   -2084681044
     * @symbol  ?MAX_WORLD_AGE\@MobSpawnRules\@\@2_KB
     */
    MCAPI static unsigned __int64 const MAX_WORLD_AGE;
    /**
     * @hash   1064662119
     * @symbol  ?MIN_DEFAULT_SPAWN_DISTANCE\@MobSpawnRules\@\@2HB
     */
    MCAPI static int const MIN_DEFAULT_SPAWN_DISTANCE;

};