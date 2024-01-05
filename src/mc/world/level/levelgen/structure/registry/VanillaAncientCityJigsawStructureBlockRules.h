#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaAncientCityJigsawStructureBlockRules {
public:
    // prevent constructor by default
    VanillaAncientCityJigsawStructureBlockRules& operator=(VanillaAncientCityJigsawStructureBlockRules const&);
    VanillaAncientCityJigsawStructureBlockRules(VanillaAncientCityJigsawStructureBlockRules const&);
    VanillaAncientCityJigsawStructureBlockRules();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VanillaAncientCityJigsawStructureBlockRules@@SAXAEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(class JigsawStructureRegistry& jigsawRegistry);

    // NOLINTEND
};
