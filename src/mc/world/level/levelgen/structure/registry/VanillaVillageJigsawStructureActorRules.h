#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaVillageJigsawStructureActorRules {
public:
    // prevent constructor by default
    VanillaVillageJigsawStructureActorRules& operator=(VanillaVillageJigsawStructureActorRules const&);
    VanillaVillageJigsawStructureActorRules(VanillaVillageJigsawStructureActorRules const&);
    VanillaVillageJigsawStructureActorRules();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VanillaVillageJigsawStructureActorRules@@SAXAEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(class JigsawStructureRegistry& jigsawRegistry);

    // NOLINTEND
};
