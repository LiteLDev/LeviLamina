#include "llapi/mc/Village.hpp"
#include "llapi/mc/Dimension.hpp"

Dimension* Village::getDimension() {
    auto dim = (Dimension*)*((uintptr_t *)this + 2);
    return dim;
}

int Village::getDimensionId() {
    return getDimension()->getDimensionId();
}
