
#include "MoreDimensionManager.h"

void MoreDimensionManager::AddDimension(std::string_view dimensionName, AutomaticID<Dimension, int> dimensionId) {
    MoreDimensionMap.emplace(dimensionId.id, DimensionInfo(dimensionName, dimensionId));
}
