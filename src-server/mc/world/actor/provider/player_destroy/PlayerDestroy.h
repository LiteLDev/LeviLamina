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
MCNAPI bool canDestroyOptimally(::Block const& block, ::ItemStack const& selectedItem);

MCNAPI float getDestroyProgress(::PlayerDestroy::DestroyProgressContext& context);

MCNAPI float getDestroySpeed(::PlayerDestroy::DestroyProgressContext& context);
// NOLINTEND

}
