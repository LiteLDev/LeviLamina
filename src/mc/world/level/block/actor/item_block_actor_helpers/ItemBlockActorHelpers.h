#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ItemStackBase;
class WeakEntityRef;
namespace ItemBlockActorHelpers { struct SpriteCalculatorRefs; }
// clang-format on

namespace ItemBlockActorHelpers {
// functions
// NOLINTBEGIN
MCAPI void
tickMapItem(::ItemStackBase const& item, ::BlockSource& region, ::BlockPos const& pos, bool& refreshClientMap);

MCAPI void tickSpriteCalculators(
    ::ItemStackBase const&                         item,
    ::ItemBlockActorHelpers::SpriteCalculatorRefs& spriteCalculators,
    ::BlockSource const&                           region,
    ::BlockPos const&                              pos,
    uchar                                          dir,
    bool                                           instant
);

MCAPI bool tryDestroyDisplayEntitiy(::WeakEntityRef& displayEntityRef, ::BlockSource& region);

MCAPI_C ::Actor*
tryGetOrCreateDisplayEntity(::WeakEntityRef& displayEntityRef, ::BlockSource& region, ::BlockPos const& pos);

MCAPI void updateMapItem(::ItemStackBase const& item, ::BlockSource& region, ::BlockPos const& pos);

MCAPI void updateSpriteCalculators(
    ::ItemStackBase const&                               item,
    ::ItemBlockActorHelpers::SpriteCalculatorRefs const& spriteCalculators,
    ::BlockSource const&                                 region,
    ::BlockPos const&                                    pos,
    uchar                                                dir
);
// NOLINTEND

} // namespace ItemBlockActorHelpers
