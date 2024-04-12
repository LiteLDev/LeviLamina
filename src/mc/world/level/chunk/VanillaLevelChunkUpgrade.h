#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/world/level/chunk/Axis.h"

namespace VanillaLevelChunkUpgrade {
// NOLINTBEGIN
// symbol: ?_updateBelowZero@VanillaLevelChunkUpgrade@@YA_NAEAVLevelChunk@@0AEAVBlockSource@@@Z
MCAPI bool _updateBelowZero(class LevelChunk& lc, class LevelChunk& generatedChunk, class BlockSource& region);

// symbol: ?_upgradeLevelChunkLegacy@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
MCAPI void _upgradeLevelChunkLegacy(class LevelChunk& lc, class BlockSource& region);

// symbol: ?_upgradeLevelChunkViaMetaData@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
MCAPI void
_upgradeLevelChunkViaMetaData(class LevelChunk& lc, class LevelChunk& generatedChunk, class BlockSource& region);

// symbol: ?addBiomeSpecificVillageSkins@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@AEAVBlockSource@@@Z
MCAPI bool addBiomeSpecificVillageSkins(class CompoundTag& tag, class BlockSource& region);

// symbol: ?convertOcelotTagToCat@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
MCAPI bool convertOcelotTagToCat(class CompoundTag& tag);

// symbol: ?convertVillagerV1TagToV2@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
MCAPI bool convertVillagerV1TagToV2(class CompoundTag& tag);

// symbol: ?convertVillagerV2TagToV1@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
MCAPI bool convertVillagerV2TagToV1(class CompoundTag& tag);

// symbol: ?convertZombieVillagerV1TagToV2@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
MCAPI bool convertZombieVillagerV1TagToV2(class CompoundTag& tag);

// symbol: ?convertZombieVillagerV2TagToV1@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
MCAPI bool convertZombieVillagerV2TagToV1(class CompoundTag& tag);

// symbol: ?fillNegativeSubChunksWithAir@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
MCAPI void fillNegativeSubChunksWithAir(class LevelChunk& lc, class BlockSource& region);

// symbol: ?fillNegativeSubChunksWithGeneration@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0@Z
MCAPI void fillNegativeSubChunksWithGeneration(class LevelChunk& lc, class LevelChunk& generatedChunk);

// symbol: ?fillNegativeSubChunksWithGenerationOrAir@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
MCAPI void fillNegativeSubChunksWithGenerationOrAir(
    class LevelChunk&  lc,
    class LevelChunk&  generatedChunk,
    class BlockSource& region
);

// symbol:
// ?fixBlockStatesOnChunkBorderAxis@VanillaLevelChunkUpgrade@@YAXAEAVBlockSource@@AEBVLevelChunk@@EVBlockPos@@W4Axis@1@@Z
MCAPI void fixBlockStatesOnChunkBorderAxis(
    class BlockSource&               region,
    class LevelChunk const&          levelChunk,
    uchar                            chunkAxisPos,
    class BlockPos                   pos,
    ::VanillaLevelChunkUpgrade::Axis fixAxis
);

// symbol: ?fixStemBlockStates@VanillaLevelChunkUpgrade@@YAXAEAVBlockSource@@VBlockPos@@AEBVBlock@@@Z
MCAPI void fixStemBlockStates(class BlockSource& region, class BlockPos updatePos, class Block const& block);

// symbol: ?fixUselessDynamicWater@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
MCAPI void fixUselessDynamicWater(class LevelChunk& lc, class BlockSource& region);

// symbol: ?fixWallBlockStates@VanillaLevelChunkUpgrade@@YAXAEAVBlockSource@@VBlockPos@@@Z
MCAPI void fixWallBlockStates(class BlockSource& region, class BlockPos updatePos);

// symbol: ?fixWallChunk@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
MCAPI void fixWallChunk(class LevelChunk& lc, class BlockSource& region);

// symbol:
// ?getV1CareerFromDefinitionsList@VanillaLevelChunkUpgrade@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVListTag@@@Z
MCAPI std::string const& getV1CareerFromDefinitionsList(class ListTag const*);

// symbol: ?isWallBlock@VanillaLevelChunkUpgrade@@YA_NAEBVBlock@@@Z
MCAPI bool isWallBlock(class Block const& testBlock);

// symbol: ?levelChunkNeedsUpgrade@VanillaLevelChunkUpgrade@@YA_NAEBVLevelChunk@@@Z
MCAPI bool levelChunkNeedsUpgrade(class LevelChunk const& lc);

// symbol: ?upgradeArmorStandComponents@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
MCAPI bool upgradeArmorStandComponents(class CompoundTag& tag);

// symbol: ?upgradeOldLimboEntity@VanillaLevelChunkUpgrade@@YAXAEAVCompoundTag@@W4LimboEntitiesVersion@@_N@Z
MCAPI void upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers, bool);
// NOLINTEND

}; // namespace VanillaLevelChunkUpgrade
