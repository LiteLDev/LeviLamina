#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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

class TheEndDimension : public ::Dimension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk251623;
    // NOLINTEND

public:
    // prevent constructor by default
    TheEndDimension& operator=(TheEndDimension const&);
    TheEndDimension(TheEndDimension const&);
    TheEndDimension();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TheEndDimension() /*override*/ = default;

    // vIndex: 37
    virtual void startLeaveGame() /*override*/;

    // vIndex: 12
    virtual void init(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    // vIndex: 13
    virtual void tick() /*override*/;

    // vIndex: 23
    virtual ::HashedString getDefaultBiome() const /*override*/;

    // vIndex: 1
    virtual bool isNaturalDimension() const /*override*/;

    // vIndex: 19
    virtual bool isValidSpawn(int x, int z) const /*override*/;

    // vIndex: 22
    virtual short getCloudHeight() const /*override*/;

    // vIndex: 29
    virtual bool isDay() const /*override*/;

    // vIndex: 24
    virtual bool mayRespawnViaBed() const /*override*/;

    // vIndex: 25
    virtual bool hasGround() const /*override*/;

    // vIndex: 26
    virtual ::BlockPos getSpawnPos() const /*override*/;

    // vIndex: 27
    virtual int getSpawnYPosition() const /*override*/;

    // vIndex: 9
    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const /*override*/;

    // vIndex: 1
    virtual void deserialize(::CompoundTag const& tag) /*override*/;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag) const /*override*/;

    // vIndex: 30
    virtual float getTimeOfDay(int time, float a) const /*override*/;

    // vIndex: 15
    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    // vIndex: 18
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const /*override*/;

    // vIndex: 16
    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) /*override*/;

    // vIndex: 17
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
    MCAPI TheEndDimension(::ILevel& level, ::Scheduler& context);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& AMBIENT_MULTIPLIER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ILevel& level, ::Scheduler& context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $startLeaveGame();

    MCAPI void $init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI void $tick();

    MCAPI ::HashedString $getDefaultBiome() const;

    MCFOLD bool $isNaturalDimension() const;

    MCFOLD bool $isValidSpawn(int x, int z) const;

    MCFOLD short $getCloudHeight() const;

    MCFOLD bool $isDay() const;

    MCFOLD bool $mayRespawnViaBed() const;

    MCFOLD bool $hasGround() const;

    MCAPI ::BlockPos $getSpawnPos() const;

    MCAPI int $getSpawnYPosition() const;

    MCAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;

    MCAPI void $deserialize(::CompoundTag const& tag);

    MCAPI void $serialize(::CompoundTag& tag) const;

    MCFOLD float $getTimeOfDay(int time, float a) const;

    MCAPI ::std::unique_ptr<::WorldGenerator>
    $createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCFOLD bool $levelChunkNeedsUpgrade(::LevelChunk const& lc) const;

    MCAPI void $upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk);

    MCFOLD void $fixWallChunk(::ChunkSource& source, ::LevelChunk& lc);

    MCFOLD void $_upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCFOLD ::std::unique_ptr<::ChunkSource>
    $_wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource> storageSource, ::StorageVersion levelVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForIDimension();

    MCAPI static void** $vftableForSavedData();

    MCAPI static void** $vftableForLevelListener();
    // NOLINTEND
};
