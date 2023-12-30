#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaVillageJigsawStructureBlockTagRules {
public:
    // prevent constructor by default
    VanillaVillageJigsawStructureBlockTagRules& operator=(VanillaVillageJigsawStructureBlockTagRules const&);
    VanillaVillageJigsawStructureBlockTagRules(VanillaVillageJigsawStructureBlockTagRules const&);
    VanillaVillageJigsawStructureBlockTagRules();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VanillaVillageJigsawStructureBlockTagRules@@SAXAEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(class JigsawStructureRegistry& jigsawRegistry);

    // NOLINTEND
};
