#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExplorationMapUtils {
// NOLINTBEGIN
MCAPI void
makeNewExplorationMapFromFeatureName(class ItemStackBase&, class Level&, class Actor*, std::string const&, bool);

MCAPI void makeNewExplorationMapFromMapData(
    class ItemStackBase&,
    class Level&,
    class Actor*,
    struct ExplorationMapData const&,
    bool
);
// NOLINTEND

}; // namespace ExplorationMapUtils
