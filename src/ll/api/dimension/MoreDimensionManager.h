
#ifndef LITELOADER_MOREDIMENSIONMANAGER_H
#define LITELOADER_MOREDIMENSIONMANAGER_H
#include "ll/api/Logger.h"
#include "mc/world/level/dimension/Dimension.h"

class MoreDimensionManager {
public:
    ll::Logger loggerMoreDimMag = ll::Logger("MoreDimensionManager");
    struct DimensionInfo {
        DimensionInfo(std::string_view dimensionName, AutomaticID<Dimension, int> dimensionId)
        : name(dimensionName),
          id(dimensionId){};

        std::string                 name;
        AutomaticID<Dimension, int> id;
        int                         seaLevel                = 5;
        bool                        hasWeather              = false;
        int                         dimensionBrightnessRamp = 0; // 0 Overworld, 1 Nether, 2 TheEnd
    };
    std::unordered_map<int, DimensionInfo> MoreDimensionMap;

    void AddDimension(std::string_view dimensionName, AutomaticID<Dimension, int> dimensionId);
};


#endif // LITELOADER_MOREDIMENSIONMANAGER_H
