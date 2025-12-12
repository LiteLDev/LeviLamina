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
struct BiomeIdType;
struct DerivedDimensionArguments;
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class NetherDimension : public ::Dimension {
public:
    // prevent constructor by default
    NetherDimension();

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

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const /*override*/;

    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const /*override*/;

    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) /*override*/;

    virtual void fixWallChunk(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) /*override*/;

    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NetherDimension(::DerivedDimensionArguments&& args);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DerivedDimensionArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI ::BiomeIdType $getDefaultBiomeId() const;

    MCFOLD bool $isNaturalDimension() const;

    MCFOLD bool $isValidSpawn(int x, int z) const;

    MCFOLD bool $showSky() const;

    MCFOLD float $getTimeOfDay(int time, float a) const;

    MCFOLD bool $mayRespawnViaBed() const;

    MCAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;

    MCAPI ::std::unique_ptr<::WorldGenerator>
    $createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCFOLD bool $levelChunkNeedsUpgrade(::LevelChunk const& lc) const;

    MCFOLD void $upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk);

    MCFOLD void $fixWallChunk(::ChunkSource& source, ::LevelChunk& lc);

    MCFOLD void $_upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCFOLD ::std::unique_ptr<::ChunkSource>
    $_wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource> storageSource, ::StorageVersion levelVersion);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForIDimension();

    MCNAPI static void** $vftableForSavedData();

    MCNAPI static void** $vftableForLevelListener();
    // NOLINTEND
};
