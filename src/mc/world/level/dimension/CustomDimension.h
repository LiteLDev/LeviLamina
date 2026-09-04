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
struct DerivedDimensionArguments;
struct DimensionType;
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
// clang-format on

class CustomDimension : public ::Dimension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::unique_ptr<::WorldGenerator>(::Dimension&)>> mGeneratorCreator;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomDimension();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomDimension() /*override*/ = default;

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const /*override*/;

    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const&) /*override*/;

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const /*override*/;

    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&) /*override*/;

    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&) /*override*/;

    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const
        /*override*/;

    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion) /*override*/;

    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CustomDimension(::DerivedDimensionArguments&& args, ::DimensionType id, ::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DerivedDimensionArguments&& args, ::DimensionType id, ::std::string const& name);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;

    MCAPI ::std::unique_ptr<::WorldGenerator> $createGenerator(::br::worldgen::StructureSetRegistry const&);

    MCFOLD bool $levelChunkNeedsUpgrade(::LevelChunk const&) const;

    MCFOLD void $upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);

    MCFOLD void $fixWallChunk(::ChunkSource&, ::LevelChunk&);

    MCAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;

    MCFOLD void $_upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion);

    MCAPI ::std::unique_ptr<::ChunkSource>
    $_wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource> storageSource, ::StorageVersion levelVersion);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSavedData();

    MCNAPI static void** $vftableForIDimension();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForLevelListener();
    // NOLINTEND
};
