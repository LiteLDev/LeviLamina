
#ifndef LITELOADER_MOREDIMENSION_H
#define LITELOADER_MOREDIMENSION_H
#include "ll/api/Logger.h"
#include "ll/api/dimension/MoreDimensionManager.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/OverworldBrightnessRamp.h"
#include "mc/world/level/dimension/NetherBrightnessRamp.h"

namespace {
ll::Logger loggerMoreDim("MoreDimension");
}

class MoreDimension: public Dimension {
public:
    MoreDimension(ILevel& ilevel, Scheduler& scheduler, MoreDimensionManager::DimensionInfo& dimensionInfo)
    : Dimension(
        ilevel,
        dimensionInfo.id,
        DimensionHeightRange(-64, 320),
        scheduler,
        dimensionInfo.name
    ) {
        loggerMoreDim.debug("MoreDimension::MoreDimension dimension name:{}",dimensionInfo.name);
        mDefaultBrightness.sky   = Brightness::MAX;
        mSeaLevel                = dimensionInfo.seaLevel;
        mHasWeather              = dimensionInfo.hasWeather;
        switch (dimensionInfo.dimensionBrightnessRamp) {
        case 0:
            mDimensionBrightnessRamp = std::make_unique<OverworldBrightnessRamp>();
        case 1:
            mDimensionBrightnessRamp = std::make_unique<NetherBrightnessRamp>();
        default:
            mDimensionBrightnessRamp = std::make_unique<OverworldBrightnessRamp>();
        }
        mDimensionBrightnessRamp->buildBrightnessRamp();
    }
    void init() final;
};


#endif // LITELOADER_MOREDIMENSION_HP
