#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/dimension/VanillaDimensions.h"

// auto generated inclusion list
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/enums/StorageVersion.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on
namespace unity_5c986e6b9d6571cc96912b0bfa0329e2 {
MCAPI DimensionHeightRange computeOverworldHeightRange(ILevel&);
}
using namespace unity_5c986e6b9d6571cc96912b0bfa0329e2;

class OverworldDimension : public ::Dimension {
public:
    OverworldDimension(ILevel& ilevel, Scheduler& scheduler)
    : Dimension(ilevel, VanillaDimensions::Overworld, computeOverworldHeightRange(ilevel), scheduler, "Overworld") {
        mHasWeather            = true;
        mDefaultBrightness.sky = Brightness::MAX;
        mSeaLevel              = 63;
        if (getLevel().getLevelData().getGenerator() == GeneratorType::Flat) {
            mSeaLevel = 5;
        }
        mDimensionBrightnessRamp = std::make_unique<OverworldBrightnessRamp>();
        mDimensionBrightnessRamp->buildBrightnessRamp();
    };

    // prevent constructor by default
    OverworldDimension& operator=(OverworldDimension const&);
    OverworldDimension(OverworldDimension const&);
    OverworldDimension();

public:
    // NOLINTBEGIN
    // virtual ~OverworldDimension();

    // symbol:
    // ?createGenerator@OverworldDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@XZ
    virtual std::unique_ptr<class WorldGenerator> createGenerator();

    // symbol: ?upgradeLevelChunk@OverworldDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@1@Z
    virtual void upgradeLevelChunk(class ChunkSource&, class LevelChunk&, class LevelChunk&);

    // symbol: ?fixWallChunk@OverworldDimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    virtual void fixWallChunk(class ChunkSource&, class LevelChunk&);

    // symbol: ?levelChunkNeedsUpgrade@OverworldDimension@@UEBA_NAEBVLevelChunk@@@Z
    virtual bool levelChunkNeedsUpgrade(class LevelChunk const&) const;

    // symbol: ?translatePosAcrossDimension@OverworldDimension@@UEBA?AVVec3@@AEBV2@V?$AutomaticID@VDimension@@H@@@Z
    virtual class Vec3 translatePosAcrossDimension(class Vec3 const&, DimensionType) const;

    // symbol: ?_upgradeOldLimboEntity@OverworldDimension@@EEAAXAEAVCompoundTag@@W4LimboEntitiesVersion@@@Z
    virtual void _upgradeOldLimboEntity(class CompoundTag&, ::LimboEntitiesVersion);

    // symbol:
    // ?_wrapStorageForVersionCompatibility@OverworldDimension@@EEAA?AV?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@V23@W4StorageVersion@@@Z
    virtual std::unique_ptr<class ChunkSource>
        _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, ::StorageVersion);

    // Reload function
    // symbol: ?getBrightnessDependentFogColor@OverworldDimension@@UEBA?AVColor@mce@@AEBV23@M@Z
    virtual class mce::Color getBrightnessDependentFogColor(class mce::Color const&, float) const;

    // symbol: ?getCloudHeight@OverworldDimension@@UEBAFXZ
    virtual short getCloudHeight() const;

    // symbol: ?hasPrecipitationFog@OverworldDimension@@UEBA_NXZ
    virtual bool hasPrecipitationFog() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?makeStructureFeatures@OverworldDimension@@CA?AV?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@I_NAEBVBaseGameVersion@@AEBVExperiments@@@Z
    MCAPI static std::unique_ptr<class StructureFeatureRegistry>
    makeStructureFeatures(uint, bool, class BaseGameVersion const&, class Experiments const&);

    // NOLINTEND
};
