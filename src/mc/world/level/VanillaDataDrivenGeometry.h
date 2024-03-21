#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaDataDrivenGeometry {
public:
    // prevent constructor by default
    VanillaDataDrivenGeometry& operator=(VanillaDataDrivenGeometry const&);
    VanillaDataDrivenGeometry(VanillaDataDrivenGeometry const&);
    VanillaDataDrivenGeometry();

public:
    // NOLINTBEGIN
    // symbol: ?addComponentsToBlocks@VanillaDataDrivenGeometry@@SAXAEBVExperiments@@@Z
    MCAPI static void addComponentsToBlocks(class Experiments const&);

    // NOLINTEND
};
