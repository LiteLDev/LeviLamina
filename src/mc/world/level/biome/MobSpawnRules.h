#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobSpawnRules {

public:
    // prevent constructor by default
    MobSpawnRules& operator=(MobSpawnRules const&) = delete;

public:
    /**
     * @symbol ??0MobSpawnRules\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobSpawnRules(class MobSpawnRules const&); // NOLINT
    /**
     * @symbol ??0MobSpawnRules\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI MobSpawnRules(class MobSpawnRules&&); // NOLINT
    /**
     * @symbol ??0MobSpawnRules\@\@QEAA\@XZ
     */
    MCAPI MobSpawnRules(); // NOLINT
    /**
     * @symbol
     * ?addHerd\@MobSpawnRules\@\@QEAAAEAV1\@HHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules& addHerd(int, int, std::string const&); // NOLINT
    /**
     * @symbol ?addPermutation\@MobSpawnRules\@\@QEAAAEAV1\@HHAEBUActorDefinitionIdentifier\@\@\@Z
     */
    MCAPI class MobSpawnRules& addPermutation(int, int, struct ActorDefinitionIdentifier const&); // NOLINT
    /**
     * @symbol ?canSpawnInConditions\@MobSpawnRules\@\@QEBA_NAEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool canSpawnInConditions(class SpawnConditions const&, class BlockSource&) const; // NOLINT
    /**
     * @symbol ?getAboveBlockDistance\@MobSpawnRules\@\@QEBAHXZ
     */
    MCAPI int getAboveBlockDistance() const; // NOLINT
    /**
     * @symbol ?getDelayRange\@MobSpawnRules\@\@QEBA?BU?$pair\@HH\@std\@\@XZ
     */
    MCAPI struct std::pair<int, int> const getDelayRange() const; // NOLINT
    /**
     * @symbol ?getDelaySpawnChance\@MobSpawnRules\@\@QEBAHXZ
     */
    MCAPI int getDelaySpawnChance() const; // NOLINT
    /**
     * @symbol
     * ?getGuaranteedPermutations\@MobSpawnRules\@\@QEBAAEBV?$vector\@VMobSpawnerPermutation\@\@V?$allocator\@VMobSpawnerPermutation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerPermutation> const& getGuaranteedPermutations() const; // NOLINT
    /**
     * @symbol
     * ?getHerdListMutable\@MobSpawnRules\@\@QEAAAEAV?$vector\@UMobSpawnHerdInfo\@\@V?$allocator\@UMobSpawnHerdInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct MobSpawnHerdInfo>& getHerdListMutable(); // NOLINT
    /**
     * @symbol
     * ?getMobToDelayId\@MobSpawnRules\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getMobToDelayId() const; // NOLINT
    /**
     * @symbol
     * ?getPermutations\@MobSpawnRules\@\@QEBAAEBV?$vector\@VMobSpawnerPermutation\@\@V?$allocator\@VMobSpawnerPermutation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class MobSpawnerPermutation> const& getPermutations() const; // NOLINT
    /**
     * @symbol ?getPersistence\@MobSpawnRules\@\@QEBA_NXZ
     */
    MCAPI bool getPersistence() const; // NOLINT
    /**
     * @symbol ?getPopulationCap\@MobSpawnRules\@\@QEBAHAEBVSpawnConditions\@\@\@Z
     */
    MCAPI int getPopulationCap(class SpawnConditions const&) const; // NOLINT
    /**
     * @symbol
     * ?getSpawnAboveBlockList\@MobSpawnRules\@\@QEBAAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<
        class BlockLegacy const*,
        struct std::hash<class BlockLegacy const*>,
        struct std::equal_to<class BlockLegacy const*>,
        class std::allocator<class BlockLegacy const*>> const&
    getSpawnAboveBlockList() const; // NOLINT
    /**
     * @symbol
     * ?getSpawnAboveBlockListMutable\@MobSpawnRules\@\@QEAAAEAV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<
        class BlockLegacy const*,
        struct std::hash<class BlockLegacy const*>,
        struct std::equal_to<class BlockLegacy const*>,
        class std::allocator<class BlockLegacy const*>>&
    getSpawnAboveBlockListMutable(); // NOLINT
    /**
     * @symbol
     * ?getSpawnCount\@MobSpawnRules\@\@QEBAHAEBVSpawnConditions\@\@AEAVBlockSource\@\@AEAVRandom\@\@AEBUMobSpawnHerdInfo\@\@\@Z
     */
    MCAPI int
    getSpawnCount(class SpawnConditions const&, class BlockSource&, class Random&, struct MobSpawnHerdInfo const&)
        const; // NOLINT
    /**
     * @symbol
     * ?getSpawnOnBlockList\@MobSpawnRules\@\@QEBAAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<
        class BlockLegacy const*,
        struct std::hash<class BlockLegacy const*>,
        struct std::equal_to<class BlockLegacy const*>,
        class std::allocator<class BlockLegacy const*>> const&
    getSpawnOnBlockList() const; // NOLINT
    /**
     * @symbol
     * ?getSpawnOnBlockListMutable\@MobSpawnRules\@\@QEAAAEAV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<
        class BlockLegacy const*,
        struct std::hash<class BlockLegacy const*>,
        struct std::equal_to<class BlockLegacy const*>,
        class std::allocator<class BlockLegacy const*>>&
    getSpawnOnBlockListMutable(); // NOLINT
    /**
     * @symbol
     * ?getSpawnOnBlockPreventedList\@MobSpawnRules\@\@QEBAAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<
        class BlockLegacy const*,
        struct std::hash<class BlockLegacy const*>,
        struct std::equal_to<class BlockLegacy const*>,
        class std::allocator<class BlockLegacy const*>> const&
    getSpawnOnBlockPreventedList() const; // NOLINT
    /**
     * @symbol
     * ?getSpawnOnBlockPreventedListMutable\@MobSpawnRules\@\@QEAAAEAV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<
        class BlockLegacy const*,
        struct std::hash<class BlockLegacy const*>,
        struct std::equal_to<class BlockLegacy const*>,
        class std::allocator<class BlockLegacy const*>>&
    getSpawnOnBlockPreventedListMutable(); // NOLINT
    /**
     * @symbol ?isLavaSpawner\@MobSpawnRules\@\@QEBA_NXZ
     */
    MCAPI bool isLavaSpawner() const; // NOLINT
    /**
     * @symbol ?isUnderwaterSpawner\@MobSpawnRules\@\@QEBA_NXZ
     */
    MCAPI bool isUnderwaterSpawner() const; // NOLINT
    /**
     * @symbol ?selectRandomHerd\@MobSpawnRules\@\@QEBAAEBUMobSpawnHerdInfo\@\@AEAVRandom\@\@\@Z
     */
    MCAPI struct MobSpawnHerdInfo const& selectRandomHerd(class Random&) const; // NOLINT
    /**
     * @symbol ?setAboveBlockDistance\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules& setAboveBlockDistance(int); // NOLINT
    /**
     * @symbol ?setBrightnessRange\@MobSpawnRules\@\@QEAAAEAV1\@HH_N\@Z
     */
    MCAPI class MobSpawnRules& setBrightnessRange(int, int, bool); // NOLINT
    /**
     * @symbol ?setBubbleSpawner\@MobSpawnRules\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class MobSpawnRules& setBubbleSpawner(bool); // NOLINT
    /**
     * @symbol
     * ?setDelayRange\@MobSpawnRules\@\@QEAAAEAV1\@HHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules& setDelayRange(int, int, std::string const&); // NOLINT
    /**
     * @symbol ?setDelaySpawnChance\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules& setDelaySpawnChance(int); // NOLINT
    /**
     * @symbol ?setDifficultyRange\@MobSpawnRules\@\@QEAAAEAV1\@W4Difficulty\@\@0\@Z
     */
    MCAPI class MobSpawnRules& setDifficultyRange(enum class Difficulty, enum class Difficulty); // NOLINT
    /**
     * @symbol ?setExperimentalGameplay\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules& setExperimentalGameplay(); // NOLINT
    /**
     * @symbol
     * ?setHardcodedSpawnRuleCallback\@MobSpawnRules\@\@QEAAAEAV1\@V?$function\@$$A6A_NAEBVSpawnConditions\@\@AEAVBlockSource\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules&
        setHardcodedSpawnRuleCallback(class std::function<
                                      bool(class SpawnConditions const&, class BlockSource&)>); // NOLINT
    /**
     * @symbol ?setHeightRange\@MobSpawnRules\@\@QEAAAEAV1\@HH\@Z
     */
    MCAPI class MobSpawnRules& setHeightRange(int, int); // NOLINT
    /**
     * @symbol ?setLavaSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules& setLavaSpawner(); // NOLINT
    /**
     * @symbol
     * ?setMobEventType\@MobSpawnRules\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class MobSpawnRules& setMobEventType(std::string const&); // NOLINT
    /**
     * @symbol ?setPersistence\@MobSpawnRules\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class MobSpawnRules& setPersistence(bool); // NOLINT
    /**
     * @symbol ?setPlayerInVillageBorderTolerance\@MobSpawnRules\@\@QEAAAEAV1\@I\@Z
     */
    MCAPI class MobSpawnRules& setPlayerInVillageBorderTolerance(unsigned int); // NOLINT
    /**
     * @symbol ?setPlayerInVillageDistance\@MobSpawnRules\@\@QEAAAEAV1\@I\@Z
     */
    MCAPI class MobSpawnRules& setPlayerInVillageDistance(unsigned int); // NOLINT
    /**
     * @symbol ?setPopulationCap\@MobSpawnRules\@\@QEAAAEAV1\@HH\@Z
     */
    MCAPI class MobSpawnRules& setPopulationCap(int, int); // NOLINT
    /**
     * @symbol ?setRarity\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules& setRarity(int); // NOLINT
    /**
     * @symbol ?setSpawnDistanceCap\@MobSpawnRules\@\@QEAAAEAV1\@H\@Z
     */
    MCAPI class MobSpawnRules& setSpawnDistanceCap(int); // NOLINT
    /**
     * @symbol ?setSpawnDistances\@MobSpawnRules\@\@QEAAAEAV1\@HH\@Z
     */
    MCAPI class MobSpawnRules& setSpawnDistances(int, int); // NOLINT
    /**
     * @symbol ?setSurfaceSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules& setSurfaceSpawner(); // NOLINT
    /**
     * @symbol ?setUndergroundSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules& setUndergroundSpawner(); // NOLINT
    /**
     * @symbol ?setUnderwaterSpawner\@MobSpawnRules\@\@QEAAAEAV1\@XZ
     */
    MCAPI class MobSpawnRules& setUnderwaterSpawner(); // NOLINT
    /**
     * @symbol ?setWorldAgeRange\@MobSpawnRules\@\@QEAAAEAV1\@_K0\@Z
     */
    MCAPI class MobSpawnRules& setWorldAgeRange(unsigned __int64, unsigned __int64); // NOLINT
    /**
     * @symbol ??1MobSpawnRules\@\@QEAA\@XZ
     */
    MCAPI ~MobSpawnRules(); // NOLINT
    /**
     * @symbol ?LOW_END_MAX_SPAWN_DISTANCE\@MobSpawnRules\@\@2HB
     */
    MCAPI static int const LOW_END_MAX_SPAWN_DISTANCE; // NOLINT
    /**
     * @symbol ?MAX_DEFAULT_SPAWN_DISTANCE\@MobSpawnRules\@\@2HB
     */
    MCAPI static int const MAX_DEFAULT_SPAWN_DISTANCE; // NOLINT
    /**
     * @symbol ?MAX_WORLD_AGE\@MobSpawnRules\@\@2_KB
     */
    MCAPI static unsigned __int64 const MAX_WORLD_AGE; // NOLINT
    /**
     * @symbol ?MIN_DEFAULT_SPAWN_DISTANCE\@MobSpawnRules\@\@2HB
     */
    MCAPI static int const MIN_DEFAULT_SPAWN_DISTANCE; // NOLINT
};
