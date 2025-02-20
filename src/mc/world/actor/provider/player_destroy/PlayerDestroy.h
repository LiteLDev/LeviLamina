#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class ItemStack;
namespace PlayerDestroy { struct DestroyProgressContext; }
// clang-format on

namespace PlayerDestroy {
// functions
// NOLINTBEGIN
MCAPI bool canDestroyOptimally(::Block const& block, ::ItemStack const& selectedItem);

MCAPI float getDestroyProgress(::PlayerDestroy::DestroyProgressContext& context);

MCAPI float getDestroySpeed(::PlayerDestroy::DestroyProgressContext& context);
// NOLINTEND

} // namespace PlayerDestroy
