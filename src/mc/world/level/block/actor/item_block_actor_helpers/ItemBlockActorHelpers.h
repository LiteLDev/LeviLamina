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
MCNAPI void tickSpriteCalculators(
    ::ItemStackBase const&                         item,
    ::ItemBlockActorHelpers::SpriteCalculatorRefs& spriteCalculators,
    ::BlockSource const&                           region,
    ::BlockPos const&                              pos,
    uchar                                          dir,
    bool                                           instant
);

MCNAPI bool tryDestroyDisplayEntitiy(::WeakEntityRef& displayEntityRef, ::BlockSource& region);

#ifdef LL_PLAT_C
MCNAPI ::Actor*
tryGetOrCreateDisplayEntity(::WeakEntityRef& displayEntityRef, ::BlockSource& region, ::BlockPos const& pos);
#endif

MCNAPI void updateSpriteCalculators(
    ::ItemStackBase const&                               item,
    ::ItemBlockActorHelpers::SpriteCalculatorRefs const& spriteCalculators,
    ::BlockSource const&                                 region,
    ::BlockPos const&                                    pos,
    uchar                                                dir
);
// NOLINTEND

} // namespace ItemBlockActorHelpers
