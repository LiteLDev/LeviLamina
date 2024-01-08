#pragma once

#include <atomic>
#include <mutex>

#include "mc/world/AutomaticID.h"
#include "mc/world/level/levelgen/GeneratorType.h"

namespace ll::dimension {

class FakeDimensionId;
class CustomDimensionManager {
    CustomDimensionManager();
    ~CustomDimensionManager();

    std::atomic<int> mNewDimensionId;
    std::mutex       mMapMutex;

public:
    LLNDAPI static CustomDimensionManager& getInstance();

    struct DimensionInfo {
        const std::string           name;
        AutomaticID<Dimension, int> id;
        uint                        seed          = 123;
        GeneratorType               generatorType = GeneratorType::Overworld;
    };
    std::unique_ptr<FakeDimensionId>               fakeDimensionIdInstance;
    std::unordered_map<std::string, DimensionInfo> customDimensionMap;     // save all dimension info
    std::unordered_map<std::string, DimensionInfo> registeredDimensionMap; // save registry dimension info

    LLNDAPI AutomaticID<Dimension, int>
            AddDimension(std::string_view dimensionName, uint seed, GeneratorType generatorType);
};

} // namespace ll::dimension
