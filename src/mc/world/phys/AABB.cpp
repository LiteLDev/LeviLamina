#include "mc/world/phys/AABB.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

AABB::operator class BoundingBox() const { return BoundingBox{BlockPos{this->x}, BlockPos{this->y}}; }
