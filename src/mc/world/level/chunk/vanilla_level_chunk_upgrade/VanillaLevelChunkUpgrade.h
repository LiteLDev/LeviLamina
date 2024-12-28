#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/LimboEntitiesVersion.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class LevelChunk;
class ListTag;
// clang-format on

namespace VanillaLevelChunkUpgrade {
// functions
// NOLINTBEGIN
MCAPI bool _updateBelowZero(::LevelChunk& lc, ::LevelChunk& generatedChunk, ::BlockSource& region);

MCAPI void _upgradeLevelChunkLegacy(::LevelChunk& lc, ::BlockSource& region);

MCAPI void _upgradeLevelChunkViaMetaData(::LevelChunk& lc, ::LevelChunk& generatedChunk, ::BlockSource& region);

MCAPI bool addBiomeSpecificVillageSkins(::CompoundTag& tag, ::BlockSource& region);

MCAPI bool convertOcelotTagToCat(::CompoundTag& tag);

MCAPI bool convertVillagerV1TagToV2(::CompoundTag& tag);

MCAPI bool convertVillagerV2TagToV1(::CompoundTag& tag);

MCAPI bool convertZombieVillagerV1TagToV2(::CompoundTag& tag);

MCAPI bool convertZombieVillagerV2TagToV1(::CompoundTag& tag);

MCAPI void fillNegativeSubChunksWithAir(::LevelChunk& lc, ::BlockSource& region);

MCAPI void fillNegativeSubChunksWithGeneration(::LevelChunk& lc, ::LevelChunk& generatedChunk);

MCAPI void
fillNegativeSubChunksWithGenerationOrAir(::LevelChunk& lc, ::LevelChunk& generatedChunk, ::BlockSource& region);

MCAPI void fixStemBlockStates(::BlockSource& region, ::BlockPos updatePos, ::Block const& block);

MCAPI void fixUselessDynamicWater(::LevelChunk& lc, ::BlockSource& region);

MCAPI void fixWallBlockStates(::BlockSource& region, ::BlockPos updatePos);

MCAPI void fixWallChunk(::LevelChunk& lc, ::BlockSource& region);

MCAPI ::std::string const& getV1CareerFromDefinitionsList(::ListTag const* definitionsList);

MCAPI bool isWallBlock(::Block const& testBlock);

MCAPI bool levelChunkNeedsUpgrade(::LevelChunk const& lc);

MCAPI void replaceSkullsWithFlattenedVersions(::LevelChunk& levelChunk);

MCAPI bool upgradeArmorStandComponents(::CompoundTag& tag);

MCAPI void upgradeLevelChunk(::LevelChunk& lc, ::LevelChunk& generatedChunk, ::BlockSource& region);

MCAPI void upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers, bool isTemplateWorld);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::vector<::std::string> const& V1_VILLAGER_BEHAVIORS();

MCAPI ::std::vector<::std::string> const& V1_VILLAGER_CAREERS();
// NOLINTEND

} // namespace VanillaLevelChunkUpgrade
