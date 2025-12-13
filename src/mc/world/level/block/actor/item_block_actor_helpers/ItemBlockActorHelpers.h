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
MCNAPI void
tickMapItem(::ItemStackBase const& item, ::BlockSource& region, ::BlockPos const& pos, bool& refreshClientMap);

MCNAPI void tickSpriteCalculators(
    ::ItemStackBase const&                         item,
    ::ItemBlockActorHelpers::SpriteCalculatorRefs& spriteCalculators,
    ::BlockSource const&                           region,
    ::BlockPos const&                              pos,
    uchar                                          dir,
    bool                                           instant
);

MCNAPI bool tryDestroyDisplayEntitiy(::WeakEntityRef& displayEntityRef, ::BlockSource& region);

MCNAPI_C ::Actor*
tryGetOrCreateDisplayEntity(::WeakEntityRef& displayEntityRef, ::BlockSource& region, ::BlockPos const& pos);

MCNAPI void updateMapItem(::ItemStackBase const& item, ::BlockSource& region, ::BlockPos const& pos);

MCNAPI void updateSpriteCalculators(
    ::ItemStackBase const&                               item,
    ::ItemBlockActorHelpers::SpriteCalculatorRefs const& spriteCalculators,
    ::BlockSource const&                                 region,
    ::BlockPos const&                                    pos,
    uchar                                                dir
);
// NOLINTEND

} // namespace ItemBlockActorHelpers
