#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/world/level/chunk/Axis.h"

namespace VanillaLevelChunkUpgrade {
// NOLINTBEGIN
MCAPI bool _updateBelowZero(class LevelChunk& lc, class LevelChunk& generatedChunk, class BlockSource& region);

MCAPI void _upgradeLevelChunkLegacy(class LevelChunk& lc, class BlockSource& region);

MCAPI void
_upgradeLevelChunkViaMetaData(class LevelChunk& lc, class LevelChunk& generatedChunk, class BlockSource& region);

MCAPI bool addBiomeSpecificVillageSkins(class CompoundTag& tag, class BlockSource& region);

MCAPI bool convertOcelotTagToCat(class CompoundTag& tag);

MCAPI bool convertVillagerV1TagToV2(class CompoundTag& tag);

MCAPI bool convertVillagerV2TagToV1(class CompoundTag& tag);

MCAPI bool convertZombieVillagerV1TagToV2(class CompoundTag& tag);

MCAPI bool convertZombieVillagerV2TagToV1(class CompoundTag& tag);

MCAPI void fillNegativeSubChunksWithAir(class LevelChunk& lc, class BlockSource& region);

MCAPI void fillNegativeSubChunksWithGeneration(class LevelChunk& lc, class LevelChunk& generatedChunk);

MCAPI void fillNegativeSubChunksWithGenerationOrAir(
    class LevelChunk&  lc,
    class LevelChunk&  generatedChunk,
    class BlockSource& region
);

MCAPI void fixBlockStatesOnChunkBorderAxis(
    class BlockSource&               region,
    class LevelChunk const&          levelChunk,
    uchar                            chunkAxisPos,
    class BlockPos                   pos,
    ::VanillaLevelChunkUpgrade::Axis fixAxis
);

MCAPI void fixStemBlockStates(class BlockSource& region, class BlockPos updatePos, class Block const& block);

MCAPI void fixUselessDynamicWater(class LevelChunk& lc, class BlockSource& region);

MCAPI void fixWallBlockStates(class BlockSource& region, class BlockPos updatePos);

MCAPI void fixWallChunk(class LevelChunk& lc, class BlockSource& region);

MCAPI std::string const& getV1CareerFromDefinitionsList(class ListTag const*);

MCAPI bool isWallBlock(class Block const& testBlock);

MCAPI bool levelChunkNeedsUpgrade(class LevelChunk const& lc);

MCAPI bool upgradeArmorStandComponents(class CompoundTag& tag);

MCAPI void upgradeLevelChunk(class LevelChunk& lc, class LevelChunk& generatedChunk, class BlockSource& region);

MCAPI void upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers, bool);

MCAPI void upgradeWorldHeight(class LevelChunk& lc, class LevelChunk& generatedChunk, class BlockSource& region);
// NOLINTEND

}; // namespace VanillaLevelChunkUpgrade
