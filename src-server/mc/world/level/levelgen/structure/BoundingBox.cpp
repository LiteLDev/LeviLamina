#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/phys/AABB.h"

BoundingBox::operator class AABB() const { return AABB{this->x, this->y + 1}; }
