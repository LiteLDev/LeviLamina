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

class NetherDimension : public ::Dimension {
public:
    // prevent constructor by default
    NetherDimension& operator=(NetherDimension const&);
    NetherDimension(NetherDimension const&);
    NetherDimension();

public:
    // NOLINTBEGIN
    // symbol: ?_upgradeOldLimboEntity@NetherDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
    virtual void _upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    // symbol:
    // ?_wrapStorageForVersionCompatibility@NetherDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    virtual std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    // symbol:
    // ?createGenerator@NetherDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@AEBVStructureSetRegistry@worldgen@br@@@Z
    virtual std::unique_ptr<class WorldGenerator> createGenerator(class br::worldgen::StructureSetRegistry const&);

    // symbol: ?fixWallChunk@NetherDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void fixWallChunk(class ChunkSource& source, class LevelChunk& lc);

    // symbol: ?forceCheckAllNeighChunkSavedStat@NetherDimension@@UEBA_NXZ
    virtual bool forceCheckAllNeighChunkSavedStat() const;

    // symbol: ?getDefaultBiome@NetherDimension@@UEBA?AVHashedString@@XZ
    virtual class HashedString getDefaultBiome() const;

    // symbol: ?getTimeOfDay@NetherDimension@@UEBAMHM@Z
    virtual float getTimeOfDay(int time, float a) const;

    // symbol: ?init@NetherDimension@@UEAAXAEBVStructureSetRegistry@worldgen@br@@@Z
    virtual void init(class br::worldgen::StructureSetRegistry const&);

    // symbol: ?isFoggyAt@NetherDimension@@UEBA_NHH@Z
    virtual bool isFoggyAt(int x, int z) const;

    // symbol: ?isNaturalDimension@NetherDimension@@UEBA_NXZ
    virtual bool isNaturalDimension() const;

    // symbol: ?isValidSpawn@NetherDimension@@UEBA_NHH@Z
    virtual bool isValidSpawn(int x, int z) const;

    // symbol: ?levelChunkNeedsUpgrade@NetherDimension@@UEBA_NAEBVLevelChunk@@@Z
    virtual bool levelChunkNeedsUpgrade(class LevelChunk const& lc) const;

    // symbol: ?mayRespawnViaBed@NetherDimension@@UEBA_NXZ
    virtual bool mayRespawnViaBed() const;

    // symbol: ?showSky@NetherDimension@@UEBA_NXZ
    virtual bool showSky() const;

    // symbol: ?translatePosAcrossDimension@NetherDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
    virtual class Vec3 translatePosAcrossDimension(class Vec3 const& originalPos, DimensionType fromId) const;

    // symbol: ?upgradeLevelChunk@NetherDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
    virtual void upgradeLevelChunk(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    // symbol: ??0NetherDimension@@QEAA@AEAVILevel@@AEAVScheduler@@@Z
    MCAPI NetherDimension(class ILevel& level, class Scheduler& callbackContext);

    // NOLINTEND
};
