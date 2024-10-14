#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockBlockNames {
// NOLINTBEGIN
MCAPI void cleanupBedrockBlockNames();

MCAPI void initBedrockBlockNames();
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI class HashedString const& Air();

MCAPI class HashedString const& ClientRequestPlaceholderBlock();

MCAPI class HashedString const& Unknown();
// NOLINTEND

}; // namespace BedrockBlockNames
