#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace History {
// NOLINTBEGIN
MCAPI void runExtractors(class EntityContext const& fromLive, class EntityContext& toHistory, bool removeIfMissing);
// NOLINTEND

}; // namespace History
