#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"
#include "mc/world/level/block/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/world/level/block/components/InsideBlockWithPosComponent.h"

namespace EntityInsideSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createCleanupSystem();

MCAPI struct TickingSystemWithInfo createSystem(bool);

MCAPI bool isAir(class Block const&);

MCAPI bool isSlidingDown(class BlockPos const&, class Vec3 const&, class Vec3 const&, class Vec2 const&);

MCAPI void onBoatAboveBubbleColumn(class Actor&);

MCAPI void
tickBoatInsideBubbleColumnBlock(struct InsideBubbleColumnBlockComponent const&, struct FallDistanceComponent&, struct StateVectorComponent&, class ActorOwnerComponent&);

MCAPI void
tickInsideBubbleColumnBlock(struct InsideBubbleColumnBlockComponent const&, struct FallDistanceComponent&, struct StateVectorComponent&, class optional_ref<struct MovementAbilitiesComponent const>);

MCAPI void
tickInsideCactusBlock(struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag> const&, struct InsideBlockComponent&);

MCAPI void
tickInsideHoneyBlock(struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag> const&, struct AABBShapeComponent const&, struct StateVectorComponent&, struct FallDistanceComponent&);

MCAPI void
tickInsidePowderSnowBlock(class StrictEntityContext const&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>);

MCAPI void
tickInsideWaterLilyBlock(struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag> const&, struct StateVectorComponent&);

MCAPI void tickMovementSlowdown(
    class StrictEntityContext const&,
    struct BlockMovementSlowdownMultiplierComponent&,
    class EntityModifier<
        struct BlockMovementSlowdownAppliedComponent,
        class FreezingComponent,
        struct IgnoresEntityInsideFlagComponent,
        struct InsideBubbleColumnBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
        struct InsideGenericBlockComponent,
        struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
        struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
        struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
        class FlagComponent<struct WebBlockTag>>,
    class Vec3
);

MCAPI void tickSetEntityInside(class StrictEntityContext const&, struct AABBShapeComponent const&, struct DimensionTypeComponent const&, struct InsideBlockComponent&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, struct LocalConstBlockSourceFactoryComponent const&, class LocalConstBlockSource&);

MCAPI void
tickSpectatorSkipEntityInside(class StrictEntityContext const&, struct ActorGameTypeComponent const&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace EntityInsideSystem
