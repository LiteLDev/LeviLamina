#include "llapi/mc/Village.hpp"
#include "llapi/mc/Dimension.hpp"

int Village::getDimensionId() {
    auto dim = (Dimension*)*((uintptr_t *)this + 2);
    return dim->getDimensionId();
}