#pragma once

#include "ll/api/Logger.h"
#include "ll/api/dimension/FakeDimensionId.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/levelgen/GeneratorType.h"
#include <atomic>
#include <mutex>

namespace {
ll::Logger loggerMoreDimMag("MoreDimensionManager");
}

class MoreDimensionManager {
    MoreDimensionManager();
    ~MoreDimensionManager();

    std::atomic<int> new_dimension_id_ = 3;
    std::mutex       map_mutex_;

public:
    LLNDAPI static MoreDimensionManager& getInstance();

    struct DimensionInfo {
        const std::string           name;
        AutomaticID<Dimension, int> id;
        uint                        seed          = 123;
        GeneratorType               generatorType = GeneratorType::Overworld;
    };
    std::unique_ptr<FakeDimensionId> fakeDimensionIdInstance = nullptr;
    std::unordered_map<std::string, DimensionInfo> MoreDimensionMap; // save all dimension info
    std::unordered_map<std::string, DimensionInfo> RegistryDimensionMap; // save registry dimension info

    LLNDAPI AutomaticID<Dimension, int>
          AddDimension(std::string_view dimensionName, uint seed, GeneratorType generatorType);
};
