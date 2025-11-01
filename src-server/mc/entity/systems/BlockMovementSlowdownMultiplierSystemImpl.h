#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct FallDistanceComponent;
struct InsideWebBlockComponent;
struct MobEffectsComponent;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct PowderSnowBlockFlag;
struct SpiderFlagComponent;
struct StateVectorComponent;
struct SweetBerryBushBlockFlag;
struct WitherBossFlagComponent;
// clang-format on

namespace BlockMovementSlowdownMultiplierSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void adjustFallDistance(::ViewT<::StrictEntityContext, ::BlockMovementSlowdownAppliedComponent const, ::FallDistanceComponent> view);

MCNAPI void applySlowdownOnMove(::ViewT<::StrictEntityContext, ::BlockMovementSlowdownMultiplierComponent, ::MoveRequestComponent, ::StateVectorComponent> view);

MCNAPI void applySlowdownOnMoveSingleEntity(::StrictEntityContext const& context, ::ViewT<::StrictEntityContext, ::BlockMovementSlowdownMultiplierComponent, ::MoveRequestComponent, ::StateVectorComponent> view);

MCNAPI void immunePlayer(::ViewT<::StrictEntityContext, ::BlockMovementSlowdownMultiplierComponent, ::Include<::BlockMovementSlowdownAppliedComponent>, ::MovementAbilitiesComponent const> view, ::EntityModifier<::BlockMovementSlowdownAppliedComponent> modifier);

MCNAPI void immuneSpider(::ViewT<::StrictEntityContext, ::BlockMovementSlowdownMultiplierComponent, ::Include<::SpiderFlagComponent, ::InsideWebBlockComponent, ::BlockMovementSlowdownAppliedComponent>, ::Exclude<::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>, ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>>> view, ::EntityModifier<::BlockMovementSlowdownAppliedComponent> modifier);

MCNAPI void immuneWitherBoss(::ViewT<::StrictEntityContext, ::BlockMovementSlowdownMultiplierComponent, ::Include<::WitherBossFlagComponent, ::BlockMovementSlowdownAppliedComponent>> witherInWebView, ::EntityModifier<::BlockMovementSlowdownAppliedComponent> modifier);

MCNAPI void weavingMob(::ViewT<::StrictEntityContext, ::BlockMovementSlowdownMultiplierComponent, ::MobEffectsComponent const, ::Include<::InsideWebBlockComponent, ::BlockMovementSlowdownAppliedComponent>, ::Exclude<::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>, ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>>> view);
// NOLINTEND

}
