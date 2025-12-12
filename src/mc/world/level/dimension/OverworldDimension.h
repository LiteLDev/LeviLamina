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
class LevelChunk;
class Vec3;
class WorldGenerator;
struct DerivedDimensionArguments;
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
    virtual ~OverworldDimension() /*override*/ = default;

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const /*override*/;

    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const /*override*/;

    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) /*override*/;

    virtual void fixWallChunk(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual short getCloudHeight() const /*override*/;

    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const
        /*override*/;

    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) /*override*/;

    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OverworldDimension(::DerivedDimensionArguments&& args);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DerivedDimensionArguments&& args);
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
