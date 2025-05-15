#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class ILevel;
class LevelChunk;
class Scheduler;
class Vec3;
class WorldGenerator;
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
// clang-format on

class OverworldDimension : public ::Dimension {
public:
    // prevent constructor by default
    OverworldDimension();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OverworldDimension() /*override*/ = default;

    // vIndex: 9
    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const /*override*/;

    // vIndex: 17
    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    // vIndex: 20
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const /*override*/;

    // vIndex: 18
    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) /*override*/;

    // vIndex: 19
    virtual void fixWallChunk(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    // vIndex: 23
    virtual short getCloudHeight() const /*override*/;

    // vIndex: 22
    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const
        /*override*/;

    // vIndex: 37
    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) /*override*/;

    // vIndex: 38
    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OverworldDimension(::ILevel& level, ::Scheduler& context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ILevel& level, ::Scheduler& context);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;

    MCAPI ::std::unique_ptr<::WorldGenerator>
    $createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCFOLD bool $levelChunkNeedsUpgrade(::LevelChunk const& lc) const;

    MCAPI void $upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk);

    MCFOLD void $fixWallChunk(::ChunkSource& source, ::LevelChunk& lc);

    MCAPI short $getCloudHeight() const;

    MCAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;

    MCFOLD void $_upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCAPI ::std::unique_ptr<::ChunkSource>
    $_wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource> storageSource, ::StorageVersion levelVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForIDimension();

    MCNAPI static void** $vftableForLevelListener();

    MCNAPI static void** $vftableForSavedData();
    // NOLINTEND
};
