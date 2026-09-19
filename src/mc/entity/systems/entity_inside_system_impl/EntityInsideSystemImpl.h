#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownImmunityComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct CactusBlockFlag;
struct EndPortalBlockFlag;
struct FreezingComponent;
struct HoneyBlockFlag;
struct IgnoresEntityInsideFlagComponent;
struct InsideBubbleColumnBlockComponent;
struct InsideGenericBlockComponent;
struct InsideOnewayBlockComponent;
struct PowderSnowBlockFlag;
struct SweetBerryBushBlockFlag;
struct WaterlilyBlockFlag;
struct WebBlockFlag;
// clang-format on

namespace EntityInsideSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tickPowderSnowMovementSlowdown(
    ::StrictEntityContext const&                                        entity,
    ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag> const& insidePowderSnowBlockComponent,
    ::BlockMovementSlowdownMultiplierComponent&                         blockMovementSlowdownMultiplierComponent,
    ::Optional<::BlockMovementSlowdownImmunityComponent const>          immunityComponent,
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
        ::InsideBlockWithPosAndBlockComponent<::WebBlockFlag>> modifier
);

MCAPI void tickWebMovementSlowdown(
    ::StrictEntityContext const&                                 entity,
    ::InsideBlockWithPosAndBlockComponent<::WebBlockFlag> const& insideWebBlockComponent,
    ::BlockMovementSlowdownMultiplierComponent&                  blockMovementSlowdownMultiplierComponent,
    ::Optional<::BlockMovementSlowdownImmunityComponent const>   immunityComponent,
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
        ::InsideBlockWithPosAndBlockComponent<::WebBlockFlag>> modifier
);
// NOLINTEND

} // namespace EntityInsideSystemImpl
