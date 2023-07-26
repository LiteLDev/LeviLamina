/**
 * @file  MobSpawnRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0MobSpawnRules\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MobSpawnRules(class MobSpawnRules &&);
    /**
     * @symbol  ??0MobSpawnRules\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobSpawnRules(class MobSpawnRules const &);
    /**
     * @symbol  ??0MobSpawnRules\@\@QEAA\@XZ
     */
    MCAPI MobSpawnRules();
    /**
     * @symbol  ?addHerd\@MobSpawnRules\@\@QEAAAEAV1\@HHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules & addHerd(int, int, std::string const &);
    /**
     * @symbol  ?addPermutation\@MobSpawnRules\@\@QEAAAEAV1\@HHAEBUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI class MobSpawnRules & addPermutation(int, int, struct ActorDefinitionIdentifier const &);
    /**
     * @symbol  ?canSpawnInConditions\@MobSpawnRules\@\@QEBA_NAEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool canSpawnInConditions(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @symbol  ?getAboveBlockDistance\@MobSpawnRules\@\@QEBAHXZ
     */
    MCAPI int getAboveBlockDistance() const;
    /**
     * @symbol  ?getDelayRange\@MobSpawnRules\@\@QEBA?BU?$pair\@HH\@std\@\@XZ
     */
    MCAPI struct std::pair<int, int> const getDelayRange() const;
    /**
     * @symbol  ?getDelaySpawnChance\@MobSpawnRules\@\@QEBAHXZ
     */
    MCAPI int getDelaySpawnChance() const;
    /**
     * @symbol  ?getGuaranteedPermutations\@MobSpawnRules\@\@QEBAAEBV?$vector\@VMobSpawnerPermutation\@\@V?$allocator\@VMobSpawnerPermutation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerPermutation> const & getGuaranteedPermutations() const;
    /**
     * @symbol  ?getHerdListMutable\@MobSpawnRules\@\@QEAAAEAV?$vector\@UMobSpawnHerdInfo\@\@V?$allocator\@UMobSpawnHerdInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct MobSpawnHerdInfo> & getHerdListMutable();
    /**
     * @symbol  ?getMobToDelayId\@MobSpawnRules\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getMobToDelayId() const;
    /**
     * @symbol  ?getPermutations\@MobSpawnRules\@\@QEBAAEBV?$vector\@VMobSpawnerPermutation\@\@V?$allocator\@VMobSpawnerPermutation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerPermutation> const & getPermutations() const;
    /**
     * @symbol  ?getPersistence\@MobSpawnRules\@\@QEBA_NXZ
     */
    MCAPI bool getPersistence() const;
    /**
     * @symbol  ?getPopulationCap\@MobSpawnRules\@\@QEBAHAEBVSpawnConditions\@\@\@Z
     */
    MCAPI int getPopulationCap(class SpawnConditions const &) const;
    /**
     * @symbol  ?getSpawnAboveBlockList\@MobSpawnRules\@\@QEBAAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnAboveBlockList() const;
    /**
     * @symbol  ?getSpawnAboveBlockListMutable\@MobSpawnRules\@\@QEAAAEAV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnAboveBlockListMutable();
    /**
     * @symbol  ?getSpawnCount\@MobSpawnRules\@\@QEBAHAEBVSpawnConditions\@\@AEAVBlockSource\@\@AEAVRandom\@\@AEBUMobSpawnHerdInfo\@\@\@Z
     */
    MCAPI int getSpawnCount(class SpawnConditions const &, class BlockSource &, class Random &, struct MobSpawnHerdInfo const &) const;
    /**
     * @symbol  ?getSpawnOnBlockList\@MobSpawnRules\@\@QEBAAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnOnBlockList() const;
    /**
     * @symbol  ?getSpawnOnBlockListMutable\@MobSpawnRules\@\@QEAAAEAV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnOnBlockListMutable();
    /**
     * @symbol  ?getSpawnOnBlockPreventedList\@MobSpawnRules\@\@QEBAAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnOnBlockPreventedList() const;
    /**
     * @symbol  ?getSpawnOnBlockPreventedListMutable\@MobSpawnRules\@\@QEAAAEAV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnOnBlockPreventedListMutable();
    /**
     * @symbol  ?isLavaSpawner\@MobSpawnRules\@\@QEBA_NXZ
     */
    MCAPI bool isLavaSpawner() const;
    /**
     * @symbol  ?isUnderwaterSpawner\@MobSpawnRules\@\@QEBA_NXZ
     */
    MCAPI bool isUnderwaterSpawner() const;
    /**
     * @symbol  ?selectRandomHerd\@MobSpawnRules\@\@QEBAAEBUMobSpawnHerdInfo\@\@AEAVRandom\@\@\@Z
     */
    MCAPI struct MobSpawnHerdInfo const & selectRandomHerd(class Random &) const;
    /**
     * @symbol  ?setAboveBlockDistance\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules & setAboveBlockDistance(int);
    /**
     * @symbol  ?setBrightnessRange\@MobSpawnRules\@\@QEAAAEAV1\@HH_N\@Z
     */
    MCAPI class MobSpawnRules & setBrightnessRange(int, int, bool);
    /**
     * @symbol  ?setBubbleSpawner\@MobSpawnRules\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class MobSpawnRules & setBubbleSpawner(bool);
    /**
     * @symbol  ?setDelayRange\@MobSpawnRules\@\@QEAAAEAV1\@HHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules & setDelayRange(int, int, std::string const &);
    /**
     * @symbol  ?setDelaySpawnChance\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules & setDelaySpawnChance(int);
    /**
     * @symbol  ?setDifficultyRange\@MobSpawnRules\@\@QEAAAEAV1\@W4Difficulty\@\@0\@Z
     */
    MCAPI class MobSpawnRules & setDifficultyRange(enum class Difficulty, enum class Difficulty);
    /**
     * @symbol  ?setExperimentalGameplay\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setExperimentalGameplay();
    /**
     * @symbol  ?setHardcodedSpawnRuleCallback\@MobSpawnRules\@\@QEAAAEAV1\@V?$function\@$$A6A_NAEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules & setHardcodedSpawnRuleCallback(class std::function<bool (class SpawnConditions const &, class BlockSource &)>);
    /**
     * @symbol  ?setHeightRange\@MobSpawnRules\@\@QEAAAEAV1\@HH\@Z
     */
    MCAPI class MobSpawnRules & setHeightRange(int, int);
    /**
     * @symbol  ?setLavaSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setLavaSpawner();
    /**
     * @symbol  ?setMobEventType\@MobSpawnRules\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules & setMobEventType(std::string const &);
    /**
     * @symbol  ?setPersistence\@MobSpawnRules\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class MobSpawnRules & setPersistence(bool);
    /**
     * @symbol  ?setPlayerInVillageBorderTolerance\@MobSpawnRules\@\@QEAAAEAV1\@I\@Z
     */
    MCAPI class MobSpawnRules & setPlayerInVillageBorderTolerance(unsigned int);
    /**
     * @symbol  ?setPlayerInVillageDistance\@MobSpawnRules\@\@QEAAAEAV1\@I\@Z
     */
    MCAPI class MobSpawnRules & setPlayerInVillageDistance(unsigned int);
    /**
     * @symbol  ?setPopulationCap\@MobSpawnRules\@\@QEAAAEAV1\@HH\@Z
     */
    MCAPI class MobSpawnRules & setPopulationCap(int, int);
    /**
     * @symbol  ?setRarity\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules & setRarity(int);
    /**
     * @symbol  ?setSpawnDistanceCap\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules & setSpawnDistanceCap(int);
    /**
     * @symbol  ?setSpawnDistances\@MobSpawnRules\@\@QEAAAEAV1\@HH\@Z
     */
    MCAPI class MobSpawnRules & setSpawnDistances(int, int);
    /**
     * @symbol  ?setSurfaceSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setSurfaceSpawner();
    /**
     * @symbol  ?setUndergroundSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setUndergroundSpawner();
    /**
     * @symbol  ?setUnderwaterSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules & setUnderwaterSpawner();
    /**
     * @symbol  ?setWorldAgeRange\@MobSpawnRules\@\@QEAAAEAV1\@_K0\@Z
     */
    MCAPI class MobSpawnRules & setWorldAgeRange(unsigned __int64, unsigned __int64);
    /**
     * @symbol  ??1MobSpawnRules\@\@QEAA\@XZ
     */
    MCAPI ~MobSpawnRules();
    /**
     * @symbol  ?LOW_END_MAX_SPAWN_DISTANCE\@MobSpawnRules\@\@2HB
     */
    MCAPI static int const LOW_END_MAX_SPAWN_DISTANCE;
    /**
     * @symbol  ?MAX_DEFAULT_SPAWN_DISTANCE\@MobSpawnRules\@\@2HB
     */
    MCAPI static int const MAX_DEFAULT_SPAWN_DISTANCE;
    /**
     * @symbol  ?MAX_WORLD_AGE\@MobSpawnRules\@\@2_KB
     */
    MCAPI static unsigned __int64 const MAX_WORLD_AGE;
    /**
     * @symbol  ?MIN_DEFAULT_SPAWN_DISTANCE\@MobSpawnRules\@\@2HB
     */
    MCAPI static int const MIN_DEFAULT_SPAWN_DISTANCE;

};