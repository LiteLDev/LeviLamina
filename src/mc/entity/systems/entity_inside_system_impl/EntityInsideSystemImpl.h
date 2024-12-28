#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class FreezingComponent;
class IConstBlockSource;
class StrictEntityContext;
struct BlockMovementSlowdownAppliedComponent;
struct CactusBlockFlag;
struct EndPortalBlockFlag;
struct HoneyBlockFlag;
struct IgnoresEntityInsideFlagComponent;
struct InsideBubbleColumnBlockComponent;
struct InsideGenericBlockComponent;
struct InsideOnewayBlockComponent;
struct InsideWebBlockComponent;
struct PowderSnowBlockFlag;
struct SweetBerryBushBlockFlag;
struct WaterlilyBlockFlag;
// clang-format on

namespace EntityInsideSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void blockProcess(
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
        ::InsideWebBlockComponent> modifier,
    ::Block const&                 block,
    ::BlockPos const&              pos,
    ::InsideGenericBlockComponent& insideGeneric,
    ::IConstBlockSource const&     region
);
// NOLINTEND

} // namespace EntityInsideSystemImpl
