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
class LevelChunk;
class Vec3;
class WorldGenerator;
struct BiomeIdType;
struct DerivedDimensionArguments;
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
    virtual ~TheEndDimension() /*override*/ = default;

    virtual void startLeaveGame() /*override*/;

    virtual void init(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    virtual void tick() /*override*/;

    virtual ::BiomeIdType getDefaultBiomeId() const /*override*/;

    virtual bool isNaturalDimension() const /*override*/;

    virtual bool isValidSpawn(int x, int z) const /*override*/;

    virtual short getCloudHeight() const /*override*/;

    virtual bool mayRespawnViaBed() const /*override*/;

    virtual ::BlockPos getSpawnPos() const /*override*/;

    virtual int getSpawnYPosition() const /*override*/;

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const /*override*/;

    virtual void deserialize(::CompoundTag const& tag) /*override*/;

    virtual void serialize(::CompoundTag& tag) const /*override*/;

    virtual float getTimeOfDay(int time, float a) const /*override*/;

    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const /*override*/;

    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) /*override*/;

    virtual void fixWallChunk(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual ::Dimension::DirectionalLightState getDimensionDirectionalLightSourceState(float a) const /*override*/;

    virtual void setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
    ) /*override*/;

    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) /*override*/;

    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TheEndDimension(::DerivedDimensionArguments&& args);

    MCAPI_C void _handleSoundEffects() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DerivedDimensionArguments&& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $startLeaveGame();

    MCAPI void $init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI void $tick();

    MCAPI ::BiomeIdType $getDefaultBiomeId() const;

    MCFOLD bool $isNaturalDimension() const;

    MCFOLD bool $isValidSpawn(int x, int z) const;

    MCFOLD short $getCloudHeight() const;

    MCFOLD bool $mayRespawnViaBed() const;

    MCAPI ::BlockPos $getSpawnPos() const;

    MCFOLD int $getSpawnYPosition() const;

    MCAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;

    MCAPI void $deserialize(::CompoundTag const& tag);

    MCAPI void $serialize(::CompoundTag& tag) const;

    MCFOLD float $getTimeOfDay(int time, float a) const;

    MCAPI ::std::unique_ptr<::WorldGenerator>
    $createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCFOLD bool $levelChunkNeedsUpgrade(::LevelChunk const& lc) const;

    MCFOLD void $upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk);

    MCFOLD void $fixWallChunk(::ChunkSource& source, ::LevelChunk& lc);

    MCAPI ::Dimension::DirectionalLightState $getDimensionDirectionalLightSourceState(float a) const;

    MCAPI void $setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
    );

    MCFOLD void $_upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers);

#ifdef LL_PLAT_C
    MCFOLD ::std::unique_ptr<::ChunkSource>
    $_wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource> storageSource, ::StorageVersion levelVersion);
#endif


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
