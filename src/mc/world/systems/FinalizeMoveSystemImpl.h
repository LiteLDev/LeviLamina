#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace FinalizeMoveSystemImpl {
/**
 * @symbol
 * ?tickFinalizeMoveSystem\@FinalizeMoveSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUMoveRequestComponent\@\@AEBUOffsetsComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBUAbilitiesComponent\@\@\@\@V?$Optional\@USlideOffsetComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UCollisionFlag\@\@\@\@V?$FlagComponent\@UHorizontalCollisionFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@\@Z
 */
MCAPI void tickFinalizeMoveSystem(class StrictEntityContext&, struct AABBShapeComponent const&, struct MoveRequestComponent const&, struct OffsetsComponent const&, struct StateVectorComponent&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct AbilitiesComponent const>, class Optional<struct SlideOffsetComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct CollisionFlag>, class FlagComponent<struct HorizontalCollisionFlag>, class FlagComponent<struct VerticalCollisionFlag>>&);

}; // namespace FinalizeMoveSystemImpl
