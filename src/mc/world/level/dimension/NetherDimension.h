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
struct BiomeIdType;
struct DimensionType;
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class NetherDimension : public ::Dimension {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherDimension() /*override*/ = default;

    virtual void init(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    virtual ::BiomeIdType getDefaultBiomeId() const /*override*/;

    virtual bool isNaturalDimension() const /*override*/;

    virtual bool isValidSpawn(int x, int z) const /*override*/;

    virtual bool showSky() const /*override*/;

    virtual float getTimeOfDay(int time, float a) const /*override*/;

    virtual bool mayRespawnViaBed() const /*override*/;

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const /*override*/;

    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const&) /*override*/;

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const /*override*/;

    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&) /*override*/;

    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&) /*override*/;

    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion) /*override*/;

    virtual ::std::unique_ptr<::ChunkSource>
        _wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource>, ::StorageVersion) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
