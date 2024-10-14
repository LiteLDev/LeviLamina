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

    MCVAPI std::unique_ptr<class WorldGenerator>
           createGenerator(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCVAPI void fixWallChunk(class ChunkSource& source, class LevelChunk& lc);

    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;

    MCVAPI class HashedString getDefaultBiome() const;

    MCVAPI float getTimeOfDay(int time, float a) const;

    MCVAPI void init(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCVAPI bool isNaturalDimension() const;

    MCVAPI bool isValidSpawn(int x, int z) const;

    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const& lc) const;

    MCVAPI bool mayRespawnViaBed() const;

    MCVAPI bool showSky() const;

    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const& originalPos, DimensionType fromId) const;

    MCVAPI void upgradeLevelChunk(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    MCAPI NetherDimension(class ILevel& level, class Scheduler& callbackContext);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForIDimension();

    MCAPI static void** $vftableForLevelListener();

    MCAPI static void** $vftableForSavedData();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _upgradeOldLimboEntity$(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility$(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    MCAPI std::unique_ptr<class WorldGenerator>
          createGenerator$(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI void fixWallChunk$(class ChunkSource& source, class LevelChunk& lc);

    MCAPI bool forceCheckAllNeighChunkSavedStat$() const;

    MCAPI class HashedString getDefaultBiome$() const;

    MCAPI float getTimeOfDay$(int time, float a) const;

    MCAPI void init$(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI bool isNaturalDimension$() const;

    MCAPI bool isValidSpawn$(int x, int z) const;

    MCAPI bool levelChunkNeedsUpgrade$(class LevelChunk const& lc) const;

    MCAPI bool mayRespawnViaBed$() const;

    MCAPI bool showSky$() const;

    MCAPI class Vec3 translatePosAcrossDimension$(class Vec3 const& originalPos, DimensionType fromId) const;

    MCAPI void upgradeLevelChunk$(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    // NOLINTEND
};
