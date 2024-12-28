#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ItemStack;
class RenderParams;
// clang-format on

namespace RenderParamUtils {
// functions
// NOLINTBEGIN
MCAPI void fillRenderParamsWithSourceContextBlockAtPosBlockSourceAndActor(
    ::RenderParams&   params,
    ::BlockSource&    region,
    ::BlockPos const& pos,
    ::Actor*          actor
);

MCAPI void
fillRenderParamsWithSourceContextItemActorAndActorTarget(::RenderParams& params, ::ItemStack& item, ::Actor& actor);
// NOLINTEND

} // namespace RenderParamUtils
