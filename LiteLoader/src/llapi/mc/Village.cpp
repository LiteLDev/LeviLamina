#include "llapi/mc/Village.hpp"
#include "llapi/mc/Dimension.hpp"

Dimension* Village::getDimension() {
    return dAccess<Dimension*>(this, 0x10);
}

int Village::getDimensionId() {
    return getDimension()->getDimensionId();
}
