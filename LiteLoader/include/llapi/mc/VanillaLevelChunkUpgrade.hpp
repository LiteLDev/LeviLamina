/**
 * @file  VanillaLevelChunkUpgrade.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VanillaLevelChunkUpgrade.
 *
 */
namespace VanillaLevelChunkUpgrade {

#define AFTER_EXTRA
// Add Member There
enum class Axis;

#undef AFTER_EXTRA
    /**
     * @hash   145920860
     * @symbol  ?_updateBelowZero\@VanillaLevelChunkUpgrade\@\@YA_NAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI bool _updateBelowZero(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @hash   1658920342
     * @symbol  ?_upgradeLevelChunkLegacy\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void _upgradeLevelChunkLegacy(class LevelChunk &, class BlockSource &);
    /**
     * @hash   -1588415649
     * @symbol  ?_upgradeLevelChunkViaMetaData\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI void _upgradeLevelChunkViaMetaData(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @hash   711498923
     * @symbol  ?addBiomeSpecificVillageSkins\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool addBiomeSpecificVillageSkins(class CompoundTag &, class BlockSource &);
    /**
     * @hash   -694276442
     * @symbol  ?convertOcelotTagToCat\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertOcelotTagToCat(class CompoundTag &);
    /**
     * @hash   -1769768842
     * @symbol  ?convertVillagerV1TagToV2\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertVillagerV1TagToV2(class CompoundTag &);
    /**
     * @hash   1718805210
     * @symbol  ?convertVillagerV2TagToV1\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertVillagerV2TagToV1(class CompoundTag &);
    /**
     * @hash   -279994094
     * @symbol  ?convertZombieVillagerV1TagToV2\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertZombieVillagerV1TagToV2(class CompoundTag &);
    /**
     * @hash   -1087740426
     * @symbol  ?convertZombieVillagerV2TagToV1\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertZombieVillagerV2TagToV1(class CompoundTag &);
    /**
     * @hash   -801527500
     * @symbol  ?fillNegativeSubChunksWithAir\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void fillNegativeSubChunksWithAir(class LevelChunk &, class BlockSource &);
    /**
     * @hash   757129360
     * @symbol  ?fillNegativeSubChunksWithGeneration\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0\@Z
     */
    MCAPI void fillNegativeSubChunksWithGeneration(class LevelChunk &, class LevelChunk &);
    /**
     * @hash   -60258999
     * @symbol  ?fillNegativeSubChunksWithGenerationOrAir\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI void fillNegativeSubChunksWithGenerationOrAir(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @hash   1005101287
     * @symbol  ?fixBlockStatesOnChunkBorderAxis\@VanillaLevelChunkUpgrade\@\@YAXAEAVBlockSource\@\@AEBVLevelChunk\@\@EVBlockPos\@\@W4Axis\@1\@\@Z
     */
    MCAPI void fixBlockStatesOnChunkBorderAxis(class BlockSource &, class LevelChunk const &, unsigned char, class BlockPos, enum class VanillaLevelChunkUpgrade::Axis);
    /**
     * @hash   970659543
     * @symbol  ?fixStemBlockStates\@VanillaLevelChunkUpgrade\@\@YAXAEAVBlockSource\@\@VBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void fixStemBlockStates(class BlockSource &, class BlockPos, class Block const &);
    /**
     * @hash   -1452597842
     * @symbol  ?fixUselessDynamicWater\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void fixUselessDynamicWater(class LevelChunk &, class BlockSource &);
    /**
     * @hash   481097872
     * @symbol  ?fixWallBlockStates\@VanillaLevelChunkUpgrade\@\@YAXAEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI void fixWallBlockStates(class BlockSource &, class BlockPos);
    /**
     * @hash   -807065708
     * @symbol  ?fixWallChunk\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void fixWallChunk(class LevelChunk &, class BlockSource &);
    /**
     * @hash   509519413
     * @symbol  ?getV1CareerFromDefinitionsList\@VanillaLevelChunkUpgrade\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBVListTag\@\@\@Z
     */
    MCAPI std::string const & getV1CareerFromDefinitionsList(class ListTag const *);
    /**
     * @hash   -621074164
     * @symbol  ?isWallBlock\@VanillaLevelChunkUpgrade\@\@YA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isWallBlock(class Block const &);
    /**
     * @hash   -2078532216
     * @symbol  ?levelChunkNeedsUpgrade\@VanillaLevelChunkUpgrade\@\@YA_NAEBVLevelChunk\@\@\@Z
     */
    MCAPI bool levelChunkNeedsUpgrade(class LevelChunk const &);
    /**
     * @hash   -1449484980
     * @symbol  ?upgradeArmorStandComponents\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool upgradeArmorStandComponents(class CompoundTag &);
    /**
     * @hash   -1991679581
     * @symbol  ?upgradeLevelChunk\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI void upgradeLevelChunk(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @hash   786712911
     * @symbol  ?upgradeOldLimboEntity\@VanillaLevelChunkUpgrade\@\@YAXAEAVCompoundTag\@\@W4LimboEntitiesVersion\@\@_N\@Z
     */
    MCAPI void upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion, bool);
    /**
     * @hash   1633064565
     * @symbol  ?upgradeWorldHeight\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI void upgradeWorldHeight(class LevelChunk &, class LevelChunk &, class BlockSource &);

};