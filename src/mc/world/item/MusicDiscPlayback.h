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
MCNAPI bool canInsert(::ItemStackBase const& stack);

MCNAPI ::std::optional<::MusicDiscPlaybackInfo> resolve(::ItemStackBase const& stack, ::Level& level);
// NOLINTEND

} // namespace MusicDiscPlayback
