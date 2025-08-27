#include "mc/world/level/dimension/VanillaDimensions.h"

std::string VanillaDimensions::toString(DimensionType const& dimension) {
    auto&       dimNameMap = VanillaDimensions::DimensionMap();
    std::string dimName;
    if (dimNameMap.contains(dimension)) {
        dimName = dimNameMap.at(dimension);
    } else {
        dimName = fmt::format("dimension.dimensionName{}", dimension.id);
    }
    return dimName;
}
