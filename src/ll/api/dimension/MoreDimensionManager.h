#pragma once

#include "ll/api/Logger.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/levelgen/GeneratorType.h"

namespace {
ll::Logger loggerMoreDimMag("MoreDimensionManager");
}

class MoreDimensionManager {
    const std::string dimensionConfigPath = R"(worlds\Bedrock level\dimension_config.json)";

    void              init();
    void              setDimensionConfigPath();

public:
    MoreDimensionManager() { init(); };

    static MoreDimensionManager getInstance() { return {}; }

    struct DimensionInfo {
        DimensionInfo(std::string_view dimensionName, AutomaticID<Dimension, int> dimensionId, uint sd)
        : name(dimensionName),
          id(dimensionId),
          seed(sd){};

        std::string                 name;
        AutomaticID<Dimension, int> id;
        uint                        seed          = 123;
        GeneratorType               generatorType = GeneratorType::Overworld;
    };
    std::unordered_map<int, DimensionInfo> MoreDimensionMap;

    AutomaticID<Dimension, int> getNewDimensionId();

    LLAPI bool AddDimension(std::string_view dimensionName, uint seed, AutomaticID<Dimension, int> dimensionId);
    LLAPI AutomaticID<Dimension, int> AddDimension(std::string_view dimensionName, uint seed);
};
