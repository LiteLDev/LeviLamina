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
    // prevent constructor by default
    TheEndDimension& operator=(TheEndDimension const&);
    TheEndDimension(TheEndDimension const&);
    TheEndDimension();

    std::unique_ptr<EndDragonFight> mDragonFight;

public:
    // NOLINTBEGIN
    // vIndex: 8, symbol:
    // ?createGenerator@TheEndDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@AEBVStructureSetRegistry@worldgen@br@@@Z
    virtual std::unique_ptr<class WorldGenerator> createGenerator(class br::worldgen::StructureSetRegistry const&);

    // vIndex: 9, symbol: ?upgradeLevelChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
    virtual void upgradeLevelChunk(class ChunkSource&, class LevelChunk&, class LevelChunk&);

    // vIndex: 10, symbol: ?fixWallChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void fixWallChunk(class ChunkSource&, class LevelChunk&);

    // vIndex: 11, symbol: ?levelChunkNeedsUpgrade@TheEndDimension@@UEBA_NAEBVLevelChunk@@@Z
    virtual bool levelChunkNeedsUpgrade(class LevelChunk const&) const;

    // vIndex: 29, symbol:
    // ?translatePosAcrossDimension@TheEndDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
    virtual class Vec3 translatePosAcrossDimension(class Vec3 const&, DimensionType) const;

    // vIndex: 37, symbol: ?_upgradeOldLimboEntity@TheEndDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
    virtual void _upgradeOldLimboEntity(class CompoundTag&, ::LimboEntitiesVersion);

    // vIndex: 38, symbol:
    // ?_wrapStorageForVersionCompatibility@TheEndDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    virtual std::unique_ptr<class ChunkSource>
        _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, ::StorageVersion);

    // Dimension function reload
    // symbol: ?isNaturalDimension@TheEndDimension@@UEBA_NXZ
    virtual bool isNaturalDimension() const;

    // symbol: ?init@TheEndDimension@@UEAAXAEBVStructureSetRegistry@worldgen@br@@@Z
    virtual void init(class br::worldgen::StructureSetRegistry const&);

    // symbol: ?tick@TheEndDimension@@UEAAXXZ
    virtual void tick();

    // symbol: ?isValidSpawn@TheEndDimension@@UEBA_NHH@Z
    virtual bool isValidSpawn(int, int) const;

    // symbol: ?isFoggyAt@TheEndDimension@@UEBA_NHH@Z
    virtual bool isFoggyAt(int, int) const;

    // symbol: ?getCloudHeight@TheEndDimension@@UEBAFXZ
    virtual short getCloudHeight() const;

    // symbol: ?getDefaultBiome@TheEndDimension@@UEBA?AVHashedString@@XZ
    virtual class HashedString getDefaultBiome() const;

    // symbol: ?mayRespawnViaBed@TheEndDimension@@UEBA_NXZ
    virtual bool mayRespawnViaBed() const;

    // symbol: ?hasGround@TheEndDimension@@UEBA_NXZ
    virtual bool hasGround() const;

    // symbol: ?getSpawnPos@TheEndDimension@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getSpawnPos() const;

    // symbol: ?getSpawnYPosition@TheEndDimension@@UEBAHXZ
    virtual int getSpawnYPosition() const;

    // symbol: ?isDay@TheEndDimension@@UEBA_NXZ
    virtual bool isDay() const;

    // symbol: ?getTimeOfDay@TheEndDimension@@UEBAMHM@Z
    virtual float getTimeOfDay(int, float) const;

    // symbol: ?getSunIntensity@TheEndDimension@@UEBAMMAEBVVec3@@M@Z
    virtual float getSunIntensity(float, class Vec3 const&, float) const;

    // symbol: ?startLeaveGame@TheEndDimension@@UEAAXXZ
    virtual void startLeaveGame();

    // SavedData Function reload
    // symbol: ?deserialize@TheEndDimension@@UEAAXAEBVCompoundTag@@@Z
    virtual void deserialize(class CompoundTag const&);

    // symbol: ?serialize@TheEndDimension@@UEBAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag&) const;

    // symbol: ?AMBIENT_MULTIPLIER@TheEndDimension@@2MB
    MCAPI static float const AMBIENT_MULTIPLIER;

    // NOLINTEND
};
