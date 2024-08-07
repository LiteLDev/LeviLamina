#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/enums/StorageVersion.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class NetherDimension : public ::Dimension {
public:
    // prevent constructor by default
    NetherDimension& operator=(NetherDimension const&);
    NetherDimension(NetherDimension const&);
    NetherDimension();

public:
    // NOLINTBEGIN
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator(class br::worldgen::StructureSetRegistry const&);

    MCVAPI void fixWallChunk(class ChunkSource& source, class LevelChunk& lc);

    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;

    MCVAPI class HashedString getDefaultBiome() const;

    MCVAPI float getTimeOfDay(int time, float a) const;

    MCVAPI void init(class br::worldgen::StructureSetRegistry const&);

    MCVAPI bool isNaturalDimension() const;

    MCVAPI bool isValidSpawn(int x, int z) const;

    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const& lc) const;

    MCVAPI bool mayRespawnViaBed() const;

    MCVAPI bool showSky() const;

    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const& originalPos, DimensionType fromId) const;

    MCVAPI void upgradeLevelChunk(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    MCAPI NetherDimension(class ILevel& level, class Scheduler& callbackContext);

    // NOLINTEND
};
