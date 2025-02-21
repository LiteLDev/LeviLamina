#include "mc/world/phys/AABB.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

AABB::operator BoundingBox() const { return BoundingBox{BlockPos{this->x}, BlockPos{this->y}}; }

bool AABB::intersects(::AABB const& c) const {
    return this->min.x<c.max.x&& this->max.x> c.min.x && this->min.y<c.max.y&& this->max.y> c.min.y
        && this->min.z<c.max.z&& this->max.z>                                               c.min.z;
}