#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaVillageJigsawStructureBlockRules {
public:
    // prevent constructor by default
    VanillaVillageJigsawStructureBlockRules& operator=(VanillaVillageJigsawStructureBlockRules const&);
    VanillaVillageJigsawStructureBlockRules(VanillaVillageJigsawStructureBlockRules const&);
    VanillaVillageJigsawStructureBlockRules();

public:
    // NOLINTBEGIN
    MCAPI static void initialize(class JigsawStructureRegistry& jigsawRegistry);

    // NOLINTEND
};
