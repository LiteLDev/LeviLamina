#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
struct DimensionType;
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class TheEndDimension : public ::Dimension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EndDragonFight>>       mDragonFight;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EndChaosLightManager>> mEndChaosLightManager;
    ::ll::TypedStorage<1, 1, bool>                                      mEnderDragonExists;
    // NOLINTEND

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

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const /*override*/;

    virtual void deserialize(::CompoundTag const& tag) /*override*/;

    virtual void serialize(::CompoundTag& tag) const /*override*/;

    virtual float getTimeOfDay(int time, float a) const /*override*/;

    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const&) /*override*/;

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const /*override*/;

    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&) /*override*/;

    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&) /*override*/;

    virtual ::Dimension::DirectionalLightState getDimensionDirectionalLightSourceState(float a) const /*override*/;

    virtual void setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const&
    ) /*override*/;

    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion) /*override*/;

    virtual ::std::unique_ptr<::ChunkSource>
        _wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource>, ::StorageVersion) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
