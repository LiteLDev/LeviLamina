#include "mc/world/level/dimension/OverworldDimension.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/dimension/OverworldBrightnessRamp.h"
#include "mc/world/level/dimension/VanillaDimensions.h"

namespace unity_5c986e6b9d6571cc96912b0bfa0329e2 {
MCAPI DimensionHeightRange computeOverworldHeightRange(ILevel&);
}
using namespace unity_5c986e6b9d6571cc96912b0bfa0329e2;

OverworldDimension::OverworldDimension(ILevel& ilevel, Scheduler& scheduler)
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
