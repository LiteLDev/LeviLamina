/**
 * @file  VanillaLevelChunkUpgrade.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -99618484
     * @symbol ?_updateBelowZero@VanillaLevelChunkUpgrade@@YA_NAEAVLevelChunk@@0AEAVBlockSource@@@Z
     */
    MCAPI bool _updateBelowZero(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @hash   1413365622
     * @symbol ?_upgradeLevelChunkLegacy@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
     */
    MCAPI void _upgradeLevelChunkLegacy(class LevelChunk &, class BlockSource &);
    /**
     * @hash   -1833847361
     * @symbol ?_upgradeLevelChunkViaMetaData@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
     */
    MCAPI void _upgradeLevelChunkViaMetaData(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @hash   466021083
     * @symbol ?addBiomeSpecificVillageSkins@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCAPI bool addBiomeSpecificVillageSkins(class CompoundTag &, class BlockSource &);
    /**
     * @hash   -939723530
     * @symbol ?convertOcelotTagToCat@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool convertOcelotTagToCat(class CompoundTag &);
    /**
     * @hash   -2015169802
     * @symbol ?convertVillagerV1TagToV2@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool convertVillagerV1TagToV2(class CompoundTag &);
    /**
     * @hash   1473404250
     * @symbol ?convertVillagerV2TagToV1@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool convertVillagerV2TagToV1(class CompoundTag &);
    /**
     * @hash   -525379678
     * @symbol ?convertZombieVillagerV1TagToV2@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool convertZombieVillagerV1TagToV2(class CompoundTag &);
    /**
     * @hash   -1333003002
     * @symbol ?convertZombieVillagerV2TagToV1@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool convertZombieVillagerV2TagToV1(class CompoundTag &);
    /**
     * @hash   -1046774700
     * @symbol ?fillNegativeSubChunksWithAir@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
     */
    MCAPI void fillNegativeSubChunksWithAir(class LevelChunk &, class BlockSource &);
    /**
     * @hash   511866784
     * @symbol ?fillNegativeSubChunksWithGeneration@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0@Z
     */
    MCAPI void fillNegativeSubChunksWithGeneration(class LevelChunk &, class LevelChunk &);
    /**
     * @hash   -305521575
     * @symbol ?fillNegativeSubChunksWithGenerationOrAir@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
     */
    MCAPI void fillNegativeSubChunksWithGenerationOrAir(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @hash   759838711
     * @symbol ?fixBlockStatesOnChunkBorderAxis@VanillaLevelChunkUpgrade@@YAXAEAVBlockSource@@AEBVLevelChunk@@EVBlockPos@@W4Axis@1@@Z
     */
    MCAPI void fixBlockStatesOnChunkBorderAxis(class BlockSource &, class LevelChunk const &, unsigned char, class BlockPos, enum class VanillaLevelChunkUpgrade::Axis);
    /**
     * @hash   725381591
     * @symbol ?fixStemBlockStates@VanillaLevelChunkUpgrade@@YAXAEAVBlockSource@@VBlockPos@@AEBVBlock@@@Z
     */
    MCAPI void fixStemBlockStates(class BlockSource &, class BlockPos, class Block const &);
    /**
     * @hash   -1697906546
     * @symbol ?fixUselessDynamicWater@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
     */
    MCAPI void fixUselessDynamicWater(class LevelChunk &, class BlockSource &);
    /**
     * @hash   235789168
     * @symbol ?fixWallBlockStates@VanillaLevelChunkUpgrade@@YAXAEAVBlockSource@@VBlockPos@@@Z
     */
    MCAPI void fixWallBlockStates(class BlockSource &, class BlockPos);
    /**
     * @hash   -1052420540
     * @symbol ?fixWallChunk@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
     */
    MCAPI void fixWallChunk(class LevelChunk &, class BlockSource &);
    /**
     * @hash   264118453
     * @symbol ?getV1CareerFromDefinitionsList@VanillaLevelChunkUpgrade@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVListTag@@@Z
     */
    MCAPI std::string const & getV1CareerFromDefinitionsList(class ListTag const *);
    /**
     * @hash   -866475124
     * @symbol ?isWallBlock@VanillaLevelChunkUpgrade@@YA_NAEBVBlock@@@Z
     */
    MCAPI bool isWallBlock(class Block const &);
    /**
     * @hash   1970987992
     * @symbol ?levelChunkNeedsUpgrade@VanillaLevelChunkUpgrade@@YA_NAEBVLevelChunk@@@Z
     */
    MCAPI bool levelChunkNeedsUpgrade(class LevelChunk const &);
    /**
     * @hash   -1695024324
     * @symbol ?upgradeArmorStandComponents@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     */
    MCAPI bool upgradeArmorStandComponents(class CompoundTag &);
    /**
     * @hash   2057748371
     * @symbol ?upgradeLevelChunk@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
     */
    MCAPI void upgradeLevelChunk(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @hash   541173567
     * @symbol ?upgradeOldLimboEntity@VanillaLevelChunkUpgrade@@YAXAEAVCompoundTag@@W4LimboEntitiesVersion@@_N@Z
     */
    MCAPI void upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion, bool);
    /**
     * @hash   1387525221
     * @symbol ?upgradeWorldHeight@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
     */
    MCAPI void upgradeWorldHeight(class LevelChunk &, class LevelChunk &, class BlockSource &);

};