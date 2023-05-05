#include "llapi/mc/Village.hpp"
#include "llapi/mc/Dimension.hpp"

Dimension* Village::getDimension() {
    auto dim = &dAccess<Dimension, 2>(this);
    return dim;
}

int Village::getDimensionId() {
    return getDimension()->getDimensionId();
}
