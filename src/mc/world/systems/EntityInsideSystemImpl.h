#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
template<typename T0> struct InsideBlockWithPosAndBlockComponent;
template<typename T0> struct InsideBlockWithPosComponent;
// clang-format on

namespace EntityInsideSystemImpl {
/**
 * @symbol
 * ?blockProcess\@EntityInsideSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@VFreezingComponent\@\@UIgnoresEntityInsideFlagComponent\@\@UInsideBubbleColumnBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UCactusBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@UInsideGenericBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UHoneyBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@U?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@V?$FlagComponent\@UWebBlockTag\@\@\@\@\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAUInsideGenericBlockComponent\@\@AEBVIConstBlockSource\@\@\@Z
 */
MCAPI void blockProcess(class StrictEntityContext const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, class Block const&, class BlockPos const&, struct InsideGenericBlockComponent&, class IConstBlockSource const&); // NOLINT

}; // namespace EntityInsideSystemImpl
