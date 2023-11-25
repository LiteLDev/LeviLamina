#pragma once

#include "ll/api/Logger.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/levelgen/GeneratorType.h"

namespace {
ll::Logger loggerMoreDimMag("MoreDimensionManager");
}

class MoreDimensionManager {
public:
    struct DimensionInfo {
        DimensionInfo(std::string_view dimensionName, AutomaticID<Dimension, int> dimensionId)
        : name(dimensionName),
          id(dimensionId){};

        std::string                 name;
        AutomaticID<Dimension, int> id;
        uint                        seed          = 123;
        GeneratorType               generatorType = GeneratorType::Overworld;
    };
    std::unordered_map<int, DimensionInfo> MoreDimensionMap;

    LLAPI void AddDimension(std::string_view dimensionName, AutomaticID<Dimension, int> dimensionId);
};
