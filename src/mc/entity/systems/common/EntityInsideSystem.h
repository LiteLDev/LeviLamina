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
// symbol: ?createCleanupSystem@EntityInsideSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createCleanupSystem();

// symbol: ?createSystem@EntityInsideSystem@@YA?AUTickingSystemWithInfo@@_N@Z
MCAPI struct TickingSystemWithInfo createSystem(bool);

// symbol: ?isAir@EntityInsideSystem@@YA_NAEBVBlock@@@Z
MCAPI bool isAir(class Block const&);

// symbol: ?isSlidingDown@EntityInsideSystem@@YA_NAEBVBlockPos@@AEBVVec3@@1AEBVVec2@@@Z
MCAPI bool isSlidingDown(class BlockPos const&, class Vec3 const&, class Vec3 const&, class Vec2 const&);

// symbol: ?onBoatAboveBubbleColumn@EntityInsideSystem@@YAXAEAVActor@@@Z
MCAPI void onBoatAboveBubbleColumn(class Actor&);

// symbol:
// ?tickBoatInsideBubbleColumnBlock@EntityInsideSystem@@YAXAEBUInsideBubbleColumnBlockComponent@@AEAUFallDistanceComponent@@AEAUStateVectorComponent@@AEAVActorOwnerComponent@@@Z
MCAPI void
tickBoatInsideBubbleColumnBlock(struct InsideBubbleColumnBlockComponent const&, struct FallDistanceComponent&, struct StateVectorComponent&, class ActorOwnerComponent&);

// symbol:
// ?tickInsideBubbleColumnBlock@EntityInsideSystem@@YAXAEBUInsideBubbleColumnBlockComponent@@AEAUFallDistanceComponent@@AEAUStateVectorComponent@@V?$optional_ref@$$CBUMovementAbilitiesComponent@@@@@Z
MCAPI void
tickInsideBubbleColumnBlock(struct InsideBubbleColumnBlockComponent const&, struct FallDistanceComponent&, struct StateVectorComponent&, class optional_ref<struct MovementAbilitiesComponent const>);

// symbol:
// ?tickInsideCactusBlock@EntityInsideSystem@@YAXAEBU?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@AEAUInsideBlockComponent@@@Z
MCAPI void
tickInsideCactusBlock(struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag> const&, struct InsideBlockComponent&);

// symbol:
// ?tickInsideHoneyBlock@EntityInsideSystem@@YAXAEBU?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@AEBUAABBShapeComponent@@AEAUStateVectorComponent@@AEAUFallDistanceComponent@@@Z
MCAPI void
tickInsideHoneyBlock(struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag> const&, struct AABBShapeComponent const&, struct StateVectorComponent&, struct FallDistanceComponent&);

// symbol:
// ?tickInsidePowderSnowBlock@EntityInsideSystem@@YAXAEBVStrictEntityContext@@V?$EntityModifier@UBlockMovementSlowdownAppliedComponent@@VFreezingComponent@@UIgnoresEntityInsideFlagComponent@@UInsideBubbleColumnBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UEndPortalBlockFlag@@@@UInsideGenericBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UPowderSnowBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@USweetBerryBushBlockFlag@@@@U?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@V?$FlagComponent@UWebBlockTag@@@@@@@Z
MCAPI void
tickInsidePowderSnowBlock(class StrictEntityContext const&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>);

// symbol:
// ?tickInsideWaterLilyBlock@EntityInsideSystem@@YAXAEBU?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@AEAUStateVectorComponent@@@Z
MCAPI void
tickInsideWaterLilyBlock(struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag> const&, struct StateVectorComponent&);

// symbol:
// ?tickMovementSlowdown@EntityInsideSystem@@YAXAEBVStrictEntityContext@@AEAUBlockMovementSlowdownMultiplierComponent@@V?$EntityModifier@UBlockMovementSlowdownAppliedComponent@@VFreezingComponent@@UIgnoresEntityInsideFlagComponent@@UInsideBubbleColumnBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UEndPortalBlockFlag@@@@UInsideGenericBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UPowderSnowBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@USweetBerryBushBlockFlag@@@@U?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@V?$FlagComponent@UWebBlockTag@@@@@@VVec3@@@Z
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

// symbol:
// ?tickSetEntityInside@EntityInsideSystem@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUDimensionTypeComponent@@AEAUInsideBlockComponent@@V?$EntityModifier@UBlockMovementSlowdownAppliedComponent@@VFreezingComponent@@UIgnoresEntityInsideFlagComponent@@UInsideBubbleColumnBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UEndPortalBlockFlag@@@@UInsideGenericBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UPowderSnowBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@USweetBerryBushBlockFlag@@@@U?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@V?$FlagComponent@UWebBlockTag@@@@@@AEBULocalConstBlockSourceFactoryComponent@@AEAVLocalConstBlockSource@@@Z
MCAPI void tickSetEntityInside(class StrictEntityContext const&, struct AABBShapeComponent const&, struct DimensionTypeComponent const&, struct InsideBlockComponent&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, struct LocalConstBlockSourceFactoryComponent const&, class LocalConstBlockSource&);

// symbol:
// ?tickSpectatorSkipEntityInside@EntityInsideSystem@@YAXAEBVStrictEntityContext@@AEBUActorGameTypeComponent@@V?$EntityModifier@UBlockMovementSlowdownAppliedComponent@@VFreezingComponent@@UIgnoresEntityInsideFlagComponent@@UInsideBubbleColumnBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UEndPortalBlockFlag@@@@UInsideGenericBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UPowderSnowBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@USweetBerryBushBlockFlag@@@@U?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@V?$FlagComponent@UWebBlockTag@@@@@@AEBUExternalDataInterface@@@Z
MCAPI void
tickSpectatorSkipEntityInside(class StrictEntityContext const&, struct ActorGameTypeComponent const&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, struct ExternalDataInterface const&);
// NOLINTEND

}; // namespace EntityInsideSystem
