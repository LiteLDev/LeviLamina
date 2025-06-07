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
class HashedString;
class ILevel;
class LevelChunk;
class Scheduler;
class Vec3;
class WorldGenerator;
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
    virtual ::HashedString getDefaultBiome() const /*override*/;

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

    // vIndex: 39
    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) /*override*/;

    // vIndex: 40
    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherDimension(::ILevel& level, ::Scheduler& callbackContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ILevel& level, ::Scheduler& callbackContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCNAPI ::HashedString $getDefaultBiome() const;

    MCNAPI bool $isNaturalDimension() const;

    MCNAPI bool $isValidSpawn(int x, int z) const;

    MCNAPI bool $showSky() const;

    MCNAPI float $getTimeOfDay(int time, float a) const;

    MCNAPI bool $mayRespawnViaBed() const;

    MCNAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;

    MCNAPI ::std::unique_ptr<::WorldGenerator>
    $createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCNAPI bool $levelChunkNeedsUpgrade(::LevelChunk const& lc) const;

    MCNAPI void $upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk);

    MCNAPI void $fixWallChunk(::ChunkSource& source, ::LevelChunk& lc);

    MCNAPI void $_upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCNAPI ::std::unique_ptr<::ChunkSource>
    $_wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource> storageSource, ::StorageVersion levelVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForIDimension();

    MCNAPI static void** $vftableForSavedData();

    MCNAPI static void** $vftableForLevelListener();
    // NOLINTEND
};
