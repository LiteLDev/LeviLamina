#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Level;
struct MusicDiscPlaybackInfo;
// clang-format on

namespace MusicDiscPlayback {
// functions
// NOLINTBEGIN
MCAPI bool canInsert(::ItemStackBase const& stack);

MCAPI ::std::optional<::MusicDiscPlaybackInfo> resolve(::ItemStackBase const& stack, ::Level& level);
// NOLINTEND

} // namespace MusicDiscPlayback
