#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MovementEffect;
struct IReplayableActorInput;
// clang-format on

namespace History {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::IReplayableActorInput> createAddMovementEffectReplay(::MovementEffect const& effect);
// NOLINTEND

} // namespace History
