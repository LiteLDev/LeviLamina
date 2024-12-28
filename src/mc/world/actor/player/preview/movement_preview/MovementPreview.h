#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PlayerMovementSettings;
namespace MovementPreview { struct AuthorityCapabilities; }
// clang-format on

namespace MovementPreview {
// functions
// NOLINTBEGIN
MCAPI ::MovementPreview::AuthorityCapabilities
getAuthorityCapabilities(::PlayerMovementSettings const& playerMovementSettings, bool hasOptedOut);
// NOLINTEND

} // namespace MovementPreview
