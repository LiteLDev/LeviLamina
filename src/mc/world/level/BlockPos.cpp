#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/phys/AABB.h"

BlockPos::operator AABB() const { return AABB{*this, *this + 1}; }
BlockPos::operator BoundingBox() const { return BoundingBox{*this, *this}; }
Vec3 BlockPos::bottomCenter() const { return Vec3{*this} + Vec3{0.5f, 0, 0.5f}; }
Vec3 BlockPos::center() const { return Vec3{*this} + 0.5f; }
