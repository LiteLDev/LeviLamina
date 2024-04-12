#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"
#include "mc/world/level/block/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/world/level/block/components/InsideBlockWithPosComponent.h"

namespace EntityInsideSystemImpl {
// NOLINTBEGIN
// symbol:
// ?blockProcess@EntityInsideSystemImpl@@YAXAEBVStrictEntityContext@@V?$EntityModifier@UBlockMovementSlowdownAppliedComponent@@VFreezingComponent@@UIgnoresEntityInsideFlagComponent@@UInsideBubbleColumnBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UEndPortalBlockFlag@@@@UInsideGenericBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UPowderSnowBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@USweetBerryBushBlockFlag@@@@U?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@V?$FlagComponent@UWebBlockTag@@@@@@AEBVBlock@@AEBVBlockPos@@AEAUInsideGenericBlockComponent@@AEBVIConstBlockSource@@@Z
MCAPI void blockProcess(class StrictEntityContext const&, class EntityModifier<struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, class Block const&, class BlockPos const&, struct InsideGenericBlockComponent&, class IConstBlockSource const&);
// NOLINTEND

}; // namespace EntityInsideSystemImpl
