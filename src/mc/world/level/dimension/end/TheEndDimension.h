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

class TheEndDimension : public ::Dimension {
public:
    // prevent constructor by default
    TheEndDimension& operator=(TheEndDimension const&);
    TheEndDimension(TheEndDimension const&);
    TheEndDimension();

public:
    // NOLINTBEGIN
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator(class br::worldgen::StructureSetRegistry const&);

    MCVAPI void deserialize(class CompoundTag const& tag);

    MCVAPI void fixWallChunk(class ChunkSource& source, class LevelChunk& lc);

    MCVAPI short getCloudHeight() const;

    MCVAPI class HashedString getDefaultBiome() const;

    MCVAPI class BlockPos getSpawnPos() const;

    MCVAPI int getSpawnYPosition() const;

    MCVAPI float getSunIntensity(float a, class Vec3 const& viewVector, float minInfluenceAngle) const;

    MCVAPI float getTimeOfDay(int time, float a) const;

    MCVAPI bool hasGround() const;

    MCVAPI void init(class br::worldgen::StructureSetRegistry const&);

    MCVAPI bool isDay() const;

    MCVAPI bool isNaturalDimension() const;

    MCVAPI bool isValidSpawn(int x, int z) const;

    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const& lc) const;

    MCVAPI bool mayRespawnViaBed() const;

    MCVAPI void serialize(class CompoundTag& tag) const;

    MCVAPI void startLeaveGame();

    MCVAPI void tick();

    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const& originalPos, DimensionType fromId) const;

    MCVAPI void upgradeLevelChunk(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    MCAPI TheEndDimension(class ILevel& level, class Scheduler& context);

    MCAPI static float const AMBIENT_MULTIPLIER;

    // NOLINTEND
};
