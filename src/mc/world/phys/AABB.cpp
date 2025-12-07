#include "mc/world/phys/AABB.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

AABB::operator BoundingBox() const { return BoundingBox{BlockPos{this->x}, BlockPos{this->y}}; }

bool AABB::intersects(::AABB const& c) const { return this->min.lt(c.max) && this->max.ge(c.min); }
