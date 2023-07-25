#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class optional_ref;
// clang-format on

namespace MoveTowardsClosestSpaceSystem {
/**
 * @symbol ?createSystems\@MoveTowardsClosestSpaceSystem\@\@YA?AV?$array\@UTickingSystemWithInfo\@\@$01\@std\@\@XZ
 */
MCAPI class std::array<struct TickingSystemWithInfo, 2> createSystems();
/**
 * @symbol
 * ?moveTowardsClosestSpace\@MoveTowardsClosestSpaceSystem\@\@YAXAEBVAABB\@\@AEBV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVIConstBlockSource\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@AEAVVec3\@\@\@Z
 */
MCAPI void
moveTowardsClosestSpace(class AABB const&, std::vector<class AABB> const&, class IConstBlockSource const&, class optional_ref<class GetCollisionShapeInterface const>, class Vec3&);

}; // namespace MoveTowardsClosestSpaceSystem
