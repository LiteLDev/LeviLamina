#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExplorationMapUtils {
// NOLINTBEGIN
MCAPI void makeNewExplorationMapFromFeatureName(
    class ItemStackBase& item,
    class Level&         level,
    class Actor*         owner,
    std::string const&   featureName,
    bool                 markForRegeneration
);

MCAPI void makeNewExplorationMapFromMapData(
    class ItemStackBase&             item,
    class Level&                     level,
    class Actor*                     owner,
    struct ExplorationMapData const& explorationMapData,
    bool                             markForRegeneration
);
// NOLINTEND

}; // namespace ExplorationMapUtils
