#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaTrailRuinsJigsawStructureBlockRules {
public:
    // prevent constructor by default
    VanillaTrailRuinsJigsawStructureBlockRules& operator=(VanillaTrailRuinsJigsawStructureBlockRules const&);
    VanillaTrailRuinsJigsawStructureBlockRules(VanillaTrailRuinsJigsawStructureBlockRules const&);
    VanillaTrailRuinsJigsawStructureBlockRules();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VanillaTrailRuinsJigsawStructureBlockRules@@SAXAEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(class JigsawStructureRegistry& jigsawRegistry);

    // NOLINTEND
};
