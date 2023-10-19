#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/enums/StorageVersion.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"

class NetherDimension : public ::Dimension {
public:
    // prevent constructor by default
    NetherDimension& operator=(NetherDimension const&);
    NetherDimension(NetherDimension const&);
    NetherDimension();

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

    // symbol: ?_upgradeOldLimboEntity@NetherDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
    // MCVAPI void _upgradeOldLimboEntity(class CompoundTag&, ::LimboEntitiesVersion);

    // symbol:
    // ?_wrapStorageForVersionCompatibility@NetherDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    // MCVAPI std::unique_ptr<class ChunkSource>
    //        _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, ::StorageVersion);

    // symbol:
    // ?createGenerator@NetherDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@XZ
    // MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();

    // symbol: ?fixWallChunk@NetherDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    // MCVAPI void fixWallChunk(class ChunkSource&, class LevelChunk&);

    // symbol: ?forceCheckAllNeighChunkSavedStat@NetherDimension@@UEBA_NXZ
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;

    // symbol: ?getDefaultBiome@NetherDimension@@UEBA?AVHashedString@@XZ
    MCVAPI class HashedString getDefaultBiome() const;

    // symbol: ?getTimeOfDay@NetherDimension@@UEBAMHM@Z
    MCVAPI float getTimeOfDay(int, float) const;

    // symbol: ?init@NetherDimension@@UEAAXXZ
    MCVAPI void init();

    // symbol: ?isFoggyAt@NetherDimension@@UEBA_NHH@Z
    MCVAPI bool isFoggyAt(int, int) const;

    // symbol: ?isNaturalDimension@NetherDimension@@UEBA_NXZ
    MCVAPI bool isNaturalDimension() const;

    // symbol: ?isValidSpawn@NetherDimension@@UEBA_NHH@Z
    MCVAPI bool isValidSpawn(int, int) const;

    // symbol: ?levelChunkNeedsUpgrade@NetherDimension@@UEBA_NAEBVLevelChunk@@@Z
    // MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const&) const;

    // symbol: ?mayRespawnViaBed@NetherDimension@@UEBA_NXZ
    MCVAPI bool mayRespawnViaBed() const;

    // symbol: ?showSky@NetherDimension@@UEBA_NXZ
    MCVAPI bool showSky() const;

    // symbol: ?translatePosAcrossDimension@NetherDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
    // MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const&, DimensionType) const;

    // symbol: ?upgradeLevelChunk@NetherDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
    // MCVAPI void upgradeLevelChunk(class ChunkSource&, class LevelChunk&, class LevelChunk&);

    // symbol: ??0NetherDimension@@QEAA@AEAVILevel@@AEAVScheduler@@@Z
    MCAPI NetherDimension(class ILevel&, class Scheduler&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?makeStructureFeatures@NetherDimension@@CA?AV?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@IAEBVBaseGameVersion@@@Z
    MCAPI static std::unique_ptr<class StructureFeatureRegistry>
    makeStructureFeatures(uint, class BaseGameVersion const&);

    // NOLINTEND
};
