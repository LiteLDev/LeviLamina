#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/enums/StorageVersion.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class EndDragonFight;

class TheEndDimension : public ::Dimension {
public:
    std::unique_ptr<EndDragonFight> mDragonFight;
    // prevent constructor by default
    TheEndDimension& operator=(TheEndDimension const&);
    TheEndDimension(TheEndDimension const&);
    TheEndDimension();

public:
    // NOLINTBEGIN
    // symbol: ?_upgradeOldLimboEntity@TheEndDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
    virtual void _upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    // symbol:
    // ?_wrapStorageForVersionCompatibility@TheEndDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    virtual std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    // symbol:
    // ?createGenerator@TheEndDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@AEBVStructureSetRegistry@worldgen@br@@@Z
    virtual std::unique_ptr<class WorldGenerator> createGenerator(class br::worldgen::StructureSetRegistry const&);

    // symbol: ?deserialize@TheEndDimension@@UEAAXAEBVCompoundTag@@@Z
    virtual void deserialize(class CompoundTag const& tag);

    // symbol: ?fixWallChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void fixWallChunk(class ChunkSource& source, class LevelChunk& lc);

    // symbol: ?getCloudHeight@TheEndDimension@@UEBAFXZ
    virtual short getCloudHeight() const;

    // symbol: ?getDefaultBiome@TheEndDimension@@UEBA?AVHashedString@@XZ
    virtual class HashedString getDefaultBiome() const;

    // symbol: ?getSpawnPos@TheEndDimension@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getSpawnPos() const;

    // symbol: ?getSpawnYPosition@TheEndDimension@@UEBAHXZ
    virtual int getSpawnYPosition() const;

    // symbol: ?getSunIntensity@TheEndDimension@@UEBAMMAEBVVec3@@M@Z
    virtual float getSunIntensity(float a, class Vec3 const& viewVector, float minInfluenceAngle) const;

    // symbol: ?getTimeOfDay@TheEndDimension@@UEBAMHM@Z
    virtual float getTimeOfDay(int time, float a) const;

    // symbol: ?hasGround@TheEndDimension@@UEBA_NXZ
    virtual bool hasGround() const;

    // symbol: ?init@TheEndDimension@@UEAAXAEBVStructureSetRegistry@worldgen@br@@@Z
    virtual void init(class br::worldgen::StructureSetRegistry const&);

    // symbol: ?isDay@TheEndDimension@@UEBA_NXZ
    virtual bool isDay() const;

    // symbol: ?isFoggyAt@TheEndDimension@@UEBA_NHH@Z
    virtual bool isFoggyAt(int x, int z) const;

    // symbol: ?isNaturalDimension@TheEndDimension@@UEBA_NXZ
    virtual bool isNaturalDimension() const;

    // symbol: ?isValidSpawn@TheEndDimension@@UEBA_NHH@Z
    virtual bool isValidSpawn(int x, int z) const;

    // symbol: ?levelChunkNeedsUpgrade@TheEndDimension@@UEBA_NAEBVLevelChunk@@@Z
    virtual bool levelChunkNeedsUpgrade(class LevelChunk const& lc) const;

    // symbol: ?mayRespawnViaBed@TheEndDimension@@UEBA_NXZ
    virtual bool mayRespawnViaBed() const;

    // symbol: ?serialize@TheEndDimension@@UEBAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag& tag) const;

    // symbol: ?startLeaveGame@TheEndDimension@@UEAAXXZ
    virtual void startLeaveGame();

    // symbol: ?tick@TheEndDimension@@UEAAXXZ
    virtual void tick();

    // symbol: ?translatePosAcrossDimension@TheEndDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
    virtual class Vec3 translatePosAcrossDimension(class Vec3 const& originalPos, DimensionType fromId) const;

    // symbol: ?upgradeLevelChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
    virtual void upgradeLevelChunk(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    // symbol: ?AMBIENT_MULTIPLIER@TheEndDimension@@2MB
    MCAPI static float const AMBIENT_MULTIPLIER;

    // NOLINTEND
};
