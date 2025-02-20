#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class Block;
class FreezingComponent;
class LocalConstBlockSource;
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct ActorGameTypeComponent;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct CactusBlockFlag;
struct DepenetrationComponent;
struct DimensionTypeComponent;
struct EndPortalBlockFlag;
struct ExternalDataInterface;
struct FallDistanceComponent;
struct HoneyBlockFlag;
struct IgnoresEntityInsideFlagComponent;
struct InsideBlockComponent;
struct InsideBubbleColumnBlockComponent;
struct InsideGenericBlockComponent;
struct InsideOnewayBlockComponent;
struct InsideWebBlockComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MovementAbilitiesComponent;
struct PowderSnowBlockFlag;
struct StateVectorComponent;
struct SweetBerryBushBlockFlag;
struct TickingSystemWithInfo;
struct WaterlilyBlockFlag;
// clang-format on

namespace EntityInsideSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createCleanupSystem();

MCAPI bool isAir(::Block const& block);

MCAPI void onBoatAboveBubbleColumn(::Actor& actor);

MCAPI void tickBoatInsideBubbleColumnBlock(
    ::InsideBubbleColumnBlockComponent const& insideBlocks,
    ::FallDistanceComponent&                  fallDistanceComponent,
    ::StateVectorComponent&                   svc,
    ::ActorOwnerComponent&                    actorOwnerComponent
);

MCAPI void tickInsideBubbleColumnBlock(
    ::InsideBubbleColumnBlockComponent const&          insideBlocks,
    ::FallDistanceComponent&                           fallDistanceComponent,
    ::StateVectorComponent&                            svc,
    ::optional_ref<::MovementAbilitiesComponent const> abilitiesComponent
);

MCAPI void tickInsideCactusBlock(
    ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag> const& cactus,
    ::InsideBlockComponent&                                         insideBlock
);

MCAPI void tickInsideHoneyBlock(
    ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag> const& insideHoneyBlockComponent,
    ::AABBShapeComponent const&                                    aabbShapeComponent,
    ::StateVectorComponent&                                        stateVectorComponent,
    ::FallDistanceComponent&                                       fallDistanceComponent
);

MCAPI void tickInsideOnewayBlock(
    ::InsideOnewayBlockComponent const& insideOnewayBlockComponent,
    ::DepenetrationComponent&           depenetrationComponent
);

MCAPI void tickInsidePowderSnowBlock(
    ::StrictEntityContext const& entity,
    ::EntityModifier<
        ::BlockMovementSlowdownAppliedComponent,
        ::FreezingComponent,
        ::IgnoresEntityInsideFlagComponent,
        ::InsideBubbleColumnBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
        ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
        ::InsideGenericBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
        ::InsideOnewayBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
        ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
        ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
        ::InsideWebBlockComponent> modifier
);

MCAPI void tickInsideWaterLilyBlock(
    ::InsideBlockWithPosComponent<::WaterlilyBlockFlag> const& insideWaterlilyBlockComponent,
    ::StateVectorComponent&                                    stateVectorComponent
);

MCAPI void tickMovementSlowdown(
    ::StrictEntityContext const&                entity,
    ::BlockMovementSlowdownMultiplierComponent& blockMovementSlowdownMultiplierComponent,
    ::EntityModifier<
        ::BlockMovementSlowdownAppliedComponent,
        ::FreezingComponent,
        ::IgnoresEntityInsideFlagComponent,
        ::InsideBubbleColumnBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
        ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
        ::InsideGenericBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
        ::InsideOnewayBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
        ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
        ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
        ::InsideWebBlockComponent> modifier,
    ::Vec3                         multiplicationModifier
);

MCAPI void tickSetEntityInside(
    ::StrictEntityContext const&    entity,
    ::AABBShapeComponent const&     aabbShape,
    ::DimensionTypeComponent const& dimension,
    ::InsideBlockComponent&         insideBlock,
    ::EntityModifier<
        ::BlockMovementSlowdownAppliedComponent,
        ::FreezingComponent,
        ::IgnoresEntityInsideFlagComponent,
        ::InsideBubbleColumnBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
        ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
        ::InsideGenericBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
        ::InsideOnewayBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
        ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
        ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
        ::InsideWebBlockComponent>                 modifier,
    ::LocalConstBlockSourceFactoryComponent const& factory,
    ::LocalConstBlockSource&                       localBlockSource
);

MCAPI void tickSpectatorSkipEntityInside(
    ::StrictEntityContext const&    entity,
    ::ActorGameTypeComponent const& gameType,
    ::EntityModifier<
        ::BlockMovementSlowdownAppliedComponent,
        ::FreezingComponent,
        ::IgnoresEntityInsideFlagComponent,
        ::InsideBubbleColumnBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
        ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
        ::InsideGenericBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
        ::InsideOnewayBlockComponent,
        ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
        ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
        ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
        ::InsideWebBlockComponent> modifier,
    ::ExternalDataInterface const& externalData
);
// NOLINTEND

} // namespace EntityInsideSystem
