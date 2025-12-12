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
    // vIndex: 0
    virtual ~NetherDimension() /*override*/ = default;

    // vIndex: 14
    virtual void init(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    // vIndex: 24
    virtual ::BiomeIdType getDefaultBiomeId() const /*override*/;

    // vIndex: 1
    virtual bool isNaturalDimension() const /*override*/;

    // vIndex: 21
    virtual bool isValidSpawn(int x, int z) const /*override*/;

    // vIndex: 28
    virtual bool showSky() const /*override*/;

    // vIndex: 29
    virtual float getTimeOfDay(int time, float a) const /*override*/;

    // vIndex: 25
    virtual bool mayRespawnViaBed() const /*override*/;

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

    // vIndex: 41
    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) /*override*/;

    // vIndex: 42
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
