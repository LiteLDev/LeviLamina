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
class EndChaosLightManager;
class EndDragonFight;
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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EndDragonFight>>       mDragonFight;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EndChaosLightManager>> mEndChaosLightManager;
    // NOLINTEND

public:
    // prevent constructor by default
    TheEndDimension();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TheEndDimension() /*override*/ = default;

    // vIndex: 37
    virtual void startLeaveGame() /*override*/;

    // vIndex: 14
    virtual void init(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    // vIndex: 15
    virtual void tick() /*override*/;

    // vIndex: 24
    virtual ::HashedString getDefaultBiome() const /*override*/;

    // vIndex: 1
    virtual bool isNaturalDimension() const /*override*/;

    // vIndex: 21
    virtual bool isValidSpawn(int x, int z) const /*override*/;

    // vIndex: 23
    virtual short getCloudHeight() const /*override*/;

    // vIndex: 25
    virtual bool mayRespawnViaBed() const /*override*/;

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

    // vIndex: 29
    virtual float getTimeOfDay(int time, float a) const /*override*/;

    // vIndex: 17
    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    // vIndex: 20
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const /*override*/;

    // vIndex: 18
    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) /*override*/;

    // vIndex: 19
    virtual void fixWallChunk(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    // vIndex: 31
    virtual ::Dimension::DirectionalLightState getDimensionDirectionalLightSourceState(float a) const /*override*/;

    // vIndex: 30
    virtual void setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
    ) /*override*/;

    // vIndex: 39
    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) /*override*/;

    // vIndex: 40
    virtual ::std::unique_ptr<::ChunkSource>
        _wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource>, ::StorageVersion) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TheEndDimension(::ILevel& level, ::Scheduler& context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ILevel& level, ::Scheduler& context);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $startLeaveGame();

    MCNAPI void $init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCNAPI void $tick();

    MCNAPI ::HashedString $getDefaultBiome() const;

    MCNAPI bool $isNaturalDimension() const;

    MCNAPI bool $isValidSpawn(int x, int z) const;

    MCNAPI short $getCloudHeight() const;

    MCNAPI bool $mayRespawnViaBed() const;

    MCNAPI ::BlockPos $getSpawnPos() const;

    MCNAPI int $getSpawnYPosition() const;

    MCNAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;

    MCNAPI void $deserialize(::CompoundTag const& tag);

    MCNAPI void $serialize(::CompoundTag& tag) const;

    MCNAPI float $getTimeOfDay(int time, float a) const;

    MCNAPI ::std::unique_ptr<::WorldGenerator>
    $createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCNAPI bool $levelChunkNeedsUpgrade(::LevelChunk const& lc) const;

    MCNAPI void $upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk);

    MCNAPI void $fixWallChunk(::ChunkSource& source, ::LevelChunk& lc);

    MCNAPI ::Dimension::DirectionalLightState $getDimensionDirectionalLightSourceState(float a) const;

    MCNAPI void $setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
    );

    MCNAPI void $_upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers);
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
