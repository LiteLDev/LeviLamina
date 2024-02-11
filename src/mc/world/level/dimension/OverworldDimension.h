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
namespace mce { class Color; }
// clang-format on

class OverworldDimension : public ::Dimension {
public:
    // prevent constructor by default
    OverworldDimension& operator=(OverworldDimension const&);
    OverworldDimension(OverworldDimension const&);
    OverworldDimension();

public:
    // NOLINTBEGIN
    // symbol: ?_upgradeOldLimboEntity@OverworldDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    // symbol:
    // ?_wrapStorageForVersionCompatibility@OverworldDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    // symbol:
    // ?createGenerator@OverworldDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@AEBVStructureSetRegistry@worldgen@br@@@Z
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator(class br::worldgen::StructureSetRegistry const&);

    // symbol: ?fixWallChunk@OverworldDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void fixWallChunk(class ChunkSource& source, class LevelChunk& lc);

    // symbol: ?getBrightnessDependentFogColor@OverworldDimension@@UEBA?AVColor@mce@@AEBV23@M@Z
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const& baseColor, float brightness) const;

    // symbol: ?getCloudHeight@OverworldDimension@@UEBAFXZ
    MCVAPI short getCloudHeight() const;

    // symbol: ?hasPrecipitationFog@OverworldDimension@@UEBA_NXZ
    MCVAPI bool hasPrecipitationFog() const;

    // symbol: ?levelChunkNeedsUpgrade@OverworldDimension@@UEBA_NAEBVLevelChunk@@@Z
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const& lc) const;

    // symbol: ?translatePosAcrossDimension@OverworldDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const& originalPos, DimensionType fromId) const;

    // symbol: ?upgradeLevelChunk@OverworldDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
    MCVAPI void upgradeLevelChunk(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    // NOLINTEND
};
