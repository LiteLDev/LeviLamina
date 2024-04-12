#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExplorationMapUtils {
// NOLINTBEGIN
// symbol:
// ?makeNewExplorationMapFromFeatureName@ExplorationMapUtils@@YAXAEAVItemStackBase@@AEAVLevel@@PEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
MCAPI void
makeNewExplorationMapFromFeatureName(class ItemStackBase&, class Level&, class Actor*, std::string const&, bool);

// symbol:
// ?makeNewExplorationMapFromMapData@ExplorationMapUtils@@YAXAEAVItemStackBase@@AEAVLevel@@PEAVActor@@AEBUExplorationMapData@@_N@Z
MCAPI void makeNewExplorationMapFromMapData(
    class ItemStackBase&,
    class Level&,
    class Actor*,
    struct ExplorationMapData const&,
    bool
);
// NOLINTEND

}; // namespace ExplorationMapUtils
