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
namespace mce { class Color; }
// clang-format on

class OverworldDimension : public ::Dimension {
public:
    // prevent constructor by default
    OverworldDimension& operator=(OverworldDimension const&);
    OverworldDimension(OverworldDimension const&);
    OverworldDimension();

public:
    // NOLINTBEGIN
    virtual void _upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    virtual std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    virtual std::unique_ptr<class WorldGenerator>
           createGenerator(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    virtual void fixWallChunk(class ChunkSource& source, class LevelChunk& lc);

    virtual class mce::Color getBrightnessDependentFogColor(class mce::Color const& baseColor, float brightness) const;

    virtual short getCloudHeight() const;

    virtual bool hasPrecipitationFog() const;

    virtual bool levelChunkNeedsUpgrade(class LevelChunk const& lc) const;

    virtual class Vec3 translatePosAcrossDimension(class Vec3 const& originalPos, DimensionType fromId) const;

    virtual void upgradeLevelChunk(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    MCAPI OverworldDimension(class ILevel& level, class Scheduler& context);

    // NOLINTEND
};
