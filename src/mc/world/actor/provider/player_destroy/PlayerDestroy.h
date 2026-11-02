#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct PlayerDestroyProgressCacheComponent;
namespace PlayerDestroy { struct DestroyProgressContext; }
// clang-format on

namespace PlayerDestroy {
// functions
// NOLINTBEGIN
MCNAPI float getDestroyProgress(::PlayerDestroy::DestroyProgressContext& context);

MCNAPI float getDestroySpeed(::PlayerDestroy::DestroyProgressContext& context);

MCNAPI ::PlayerDestroyProgressCacheComponent& initializePlayer(::EntityContext& provider);
// NOLINTEND

} // namespace PlayerDestroy
