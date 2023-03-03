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
     * @symbol  ?_updateBelowZero\@VanillaLevelChunkUpgrade\@\@YA_NAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI bool _updateBelowZero(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @symbol  ?_upgradeLevelChunkLegacy\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void _upgradeLevelChunkLegacy(class LevelChunk &, class BlockSource &);
    /**
     * @symbol  ?_upgradeLevelChunkViaMetaData\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI void _upgradeLevelChunkViaMetaData(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @symbol  ?addBiomeSpecificVillageSkins\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI bool addBiomeSpecificVillageSkins(class CompoundTag &, class BlockSource &);
    /**
     * @symbol  ?convertOcelotTagToCat\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertOcelotTagToCat(class CompoundTag &);
    /**
     * @symbol  ?convertVillagerV1TagToV2\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertVillagerV1TagToV2(class CompoundTag &);
    /**
     * @symbol  ?convertVillagerV2TagToV1\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertVillagerV2TagToV1(class CompoundTag &);
    /**
     * @symbol  ?convertZombieVillagerV1TagToV2\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertZombieVillagerV1TagToV2(class CompoundTag &);
    /**
     * @symbol  ?convertZombieVillagerV2TagToV1\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool convertZombieVillagerV2TagToV1(class CompoundTag &);
    /**
     * @symbol  ?fillNegativeSubChunksWithAir\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void fillNegativeSubChunksWithAir(class LevelChunk &, class BlockSource &);
    /**
     * @symbol  ?fillNegativeSubChunksWithGeneration\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0\@Z
     */
    MCAPI void fillNegativeSubChunksWithGeneration(class LevelChunk &, class LevelChunk &);
    /**
     * @symbol  ?fillNegativeSubChunksWithGenerationOrAir\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI void fillNegativeSubChunksWithGenerationOrAir(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @symbol  ?fixBlockStatesOnChunkBorderAxis\@VanillaLevelChunkUpgrade\@\@YAXAEAVBlockSource\@\@AEBVLevelChunk\@\@EVBlockPos\@\@W4Axis\@1\@\@Z
     */
    MCAPI void fixBlockStatesOnChunkBorderAxis(class BlockSource &, class LevelChunk const &, unsigned char, class BlockPos, enum class VanillaLevelChunkUpgrade::Axis);
    /**
     * @symbol  ?fixStemBlockStates\@VanillaLevelChunkUpgrade\@\@YAXAEAVBlockSource\@\@VBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI void fixStemBlockStates(class BlockSource &, class BlockPos, class Block const &);
    /**
     * @symbol  ?fixUselessDynamicWater\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void fixUselessDynamicWater(class LevelChunk &, class BlockSource &);
    /**
     * @symbol  ?fixWallBlockStates\@VanillaLevelChunkUpgrade\@\@YAXAEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI void fixWallBlockStates(class BlockSource &, class BlockPos);
    /**
     * @symbol  ?fixWallChunk\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void fixWallChunk(class LevelChunk &, class BlockSource &);
    /**
     * @symbol  ?getV1CareerFromDefinitionsList\@VanillaLevelChunkUpgrade\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBVListTag\@\@\@Z
     */
    MCAPI std::string const & getV1CareerFromDefinitionsList(class ListTag const *);
    /**
     * @symbol  ?isWallBlock\@VanillaLevelChunkUpgrade\@\@YA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isWallBlock(class Block const &);
    /**
     * @symbol  ?levelChunkNeedsUpgrade\@VanillaLevelChunkUpgrade\@\@YA_NAEBVLevelChunk\@\@\@Z
     */
    MCAPI bool levelChunkNeedsUpgrade(class LevelChunk const &);
    /**
     * @symbol  ?upgradeArmorStandComponents\@VanillaLevelChunkUpgrade\@\@YA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool upgradeArmorStandComponents(class CompoundTag &);
    /**
     * @symbol  ?upgradeLevelChunk\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI void upgradeLevelChunk(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @symbol  ?upgradeOldLimboEntity\@VanillaLevelChunkUpgrade\@\@YAXAEAVCompoundTag\@\@W4LimboEntitiesVersion\@\@_N\@Z
     */
    MCAPI void upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion, bool);
    /**
     * @symbol  ?upgradeWorldHeight\@VanillaLevelChunkUpgrade\@\@YAXAEAVLevelChunk\@\@0AEAVBlockSource\@\@\@Z
     */
    MCAPI void upgradeWorldHeight(class LevelChunk &, class LevelChunk &, class BlockSource &);

};