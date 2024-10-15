#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/storage/StorageVersion.h"

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

    MCVAPI std::unique_ptr<class WorldGenerator>
           createGenerator(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCVAPI void deserialize(class CompoundTag const& tag);

    MCVAPI void fixWallChunk(class ChunkSource& source, class LevelChunk& lc);

    MCVAPI short getCloudHeight() const;

    MCVAPI class HashedString getDefaultBiome() const;

    MCVAPI class BlockPos getSpawnPos() const;

    MCVAPI int getSpawnYPosition() const;

    MCVAPI float getSunIntensity(float a, class Vec3 const& viewVector, float minInfluenceAngle) const;

    MCVAPI float getTimeOfDay(int time, float a) const;

    MCVAPI bool hasGround() const;

    MCVAPI void init(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

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

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForIDimension();

    MCAPI static void** $vftableForLevelListener();

    MCAPI static void** $vftableForSavedData();

    MCAPI void* ctor$(class ILevel& level, class Scheduler& context);

    MCAPI void _upgradeOldLimboEntity$(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility$(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    MCAPI std::unique_ptr<class WorldGenerator>
          createGenerator$(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI void deserialize$(class CompoundTag const& tag);

    MCAPI void fixWallChunk$(class ChunkSource& source, class LevelChunk& lc);

    MCAPI short getCloudHeight$() const;

    MCAPI class HashedString getDefaultBiome$() const;

    MCAPI class BlockPos getSpawnPos$() const;

    MCAPI int getSpawnYPosition$() const;

    MCAPI float getSunIntensity$(float a, class Vec3 const& viewVector, float minInfluenceAngle) const;

    MCAPI float getTimeOfDay$(int time, float a) const;

    MCAPI bool hasGround$() const;

    MCAPI void init$(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI bool isDay$() const;

    MCAPI bool isNaturalDimension$() const;

    MCAPI bool isValidSpawn$(int x, int z) const;

    MCAPI bool levelChunkNeedsUpgrade$(class LevelChunk const& lc) const;

    MCAPI bool mayRespawnViaBed$() const;

    MCAPI void serialize$(class CompoundTag& tag) const;

    MCAPI void startLeaveGame$();

    MCAPI void tick$();

    MCAPI class Vec3 translatePosAcrossDimension$(class Vec3 const& originalPos, DimensionType fromId) const;

    MCAPI void upgradeLevelChunk$(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    MCAPI static float const& AMBIENT_MULTIPLIER();

    // NOLINTEND
};
