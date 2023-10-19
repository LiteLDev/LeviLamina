#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/enums/StorageVersion.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"

class EndDragonFight;
class TheEndDimension : public ::Dimension {
    std::unique_ptr<EndDragonFight> mDragonFight;
public:
    // prevent constructor by default
    TheEndDimension& operator=(TheEndDimension const&);
    TheEndDimension(TheEndDimension const&);
    TheEndDimension();

public:
    // NOLINTBEGIN
    // vIndex: 8, symbol:
    // ?createGenerator@TheEndDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@XZ
    virtual std::unique_ptr<class WorldGenerator> createGenerator();

    // vIndex: 9, symbol: ?upgradeLevelChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
    virtual void upgradeLevelChunk(class ChunkSource&, class LevelChunk&, class LevelChunk&);
    
    // vIndex: 10, symbol: ?fixWallChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void fixWallChunk(class ChunkSource&, class LevelChunk&);

    // vIndex: 11, symbol: ?levelChunkNeedsUpgrade@TheEndDimension@@UEBA_NAEBVLevelChunk@@@Z
    virtual bool levelChunkNeedsUpgrade(class LevelChunk const&) const;

    // vIndex: 29, symbol: ?translatePosAcrossDimension@TheEndDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
    virtual class Vec3 translatePosAcrossDimension(class Vec3 const&, DimensionType) const;

    // vIndex: 37, symbol: ?_upgradeOldLimboEntity@TheEndDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
    virtual void _upgradeOldLimboEntity(class CompoundTag&, ::LimboEntitiesVersion);

    // vIndex: 38, symbol:
    // ?_wrapStorageForVersionCompatibility@TheEndDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    virtual std::unique_ptr<class ChunkSource>
           _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, ::StorageVersion);

    // symbol: ?_upgradeOldLimboEntity@TheEndDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
    // MCVAPI void _upgradeOldLimboEntity(class CompoundTag&, ::LimboEntitiesVersion);

    // symbol:
    // ?_wrapStorageForVersionCompatibility@TheEndDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    // MCVAPI std::unique_ptr<class ChunkSource>
    //        _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, ::StorageVersion);

    // symbol:
    // ?createGenerator@TheEndDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@XZ
    // MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();

    // symbol: ?deserialize@TheEndDimension@@UEAAXAEBVCompoundTag@@@Z
    MCVAPI void deserialize(class CompoundTag const&);

    // symbol: ?fixWallChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    // MCVAPI void fixWallChunk(class ChunkSource&, class LevelChunk&);

    // symbol: ?getCloudHeight@TheEndDimension@@UEBAFXZ
    MCVAPI short getCloudHeight() const;

    // symbol: ?getDefaultBiome@TheEndDimension@@UEBA?AVHashedString@@XZ
    MCVAPI class HashedString getDefaultBiome() const;

    // symbol: ?getSpawnPos@TheEndDimension@@UEBA?AVBlockPos@@XZ
    MCVAPI class BlockPos getSpawnPos() const;

    // symbol: ?getSpawnYPosition@TheEndDimension@@UEBAHXZ
    MCVAPI int getSpawnYPosition() const;

    // symbol: ?getSunIntensity@TheEndDimension@@UEBAMMAEBVVec3@@M@Z
    MCVAPI float getSunIntensity(float, class Vec3 const&, float) const;

    // symbol: ?getTimeOfDay@TheEndDimension@@UEBAMHM@Z
    MCVAPI float getTimeOfDay(int, float) const;

    // symbol: ?hasGround@TheEndDimension@@UEBA_NXZ
    MCVAPI bool hasGround() const;

    // symbol: ?init@TheEndDimension@@UEAAXXZ
    MCVAPI void init();

    // symbol: ?isDay@TheEndDimension@@UEBA_NXZ
    MCVAPI bool isDay() const;

    // symbol: ?isFoggyAt@TheEndDimension@@UEBA_NHH@Z
    MCVAPI bool isFoggyAt(int, int) const;

    // symbol: ?isNaturalDimension@TheEndDimension@@UEBA_NXZ
    MCVAPI bool isNaturalDimension() const;

    // symbol: ?isValidSpawn@TheEndDimension@@UEBA_NHH@Z
    MCVAPI bool isValidSpawn(int, int) const;

    // symbol: ?levelChunkNeedsUpgrade@TheEndDimension@@UEBA_NAEBVLevelChunk@@@Z
    // MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const&) const;

    // symbol: ?mayRespawnViaBed@TheEndDimension@@UEBA_NXZ
    MCVAPI bool mayRespawnViaBed() const;

    // symbol: ?serialize@TheEndDimension@@UEBAXAEAVCompoundTag@@@Z
    MCVAPI void serialize(class CompoundTag&) const;

    // symbol: ?startLeaveGame@TheEndDimension@@UEAAXXZ
    MCVAPI void startLeaveGame();

    // symbol: ?tick@TheEndDimension@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ?translatePosAcrossDimension@TheEndDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
    // MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const&, DimensionType) const;

    // symbol: ?upgradeLevelChunk@TheEndDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
    // MCVAPI void upgradeLevelChunk(class ChunkSource&, class LevelChunk&, class LevelChunk&);

    // symbol: ?AMBIENT_MULTIPLIER@TheEndDimension@@2MB
    MCAPI static float const AMBIENT_MULTIPLIER;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?makeStructureFeatures@TheEndDimension@@CA?AV?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@AEAVDimension@@I@Z
    MCAPI static std::unique_ptr<class StructureFeatureRegistry> makeStructureFeatures(class Dimension&, uint);

    // NOLINTEND
};
