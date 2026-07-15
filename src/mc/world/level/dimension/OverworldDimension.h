#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class LevelChunk;
class Vec3;
class WorldGenerator;
struct DimensionType;
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
// clang-format on

class OverworldDimension : public ::Dimension {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OverworldDimension() /*override*/ = default;

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const /*override*/;

    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const&) /*override*/;

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const /*override*/;

    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&) /*override*/;

    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&) /*override*/;

    virtual short getCloudHeight() const /*override*/;

    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const
        /*override*/;

    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion) /*override*/;

    virtual ::std::unique_ptr<::ChunkSource>
        _wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource>, ::StorageVersion) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
