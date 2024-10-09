#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

namespace EntityInsideSystemImpl {
// NOLINTBEGIN
MCAPI void blockProcess(
    class StrictEntityContext const& entity,
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
        class FlagComponent<struct WebBlockTag>> modifier,
    class Block const&                           block,
    class BlockPos const&                        pos,
    struct InsideGenericBlockComponent&          insideGeneric,
    class IConstBlockSource const&               region
);
// NOLINTEND

}; // namespace EntityInsideSystemImpl
