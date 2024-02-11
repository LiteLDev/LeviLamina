#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaTrialChambersJigsawStructureBlockRules {
public:
    // prevent constructor by default
    VanillaTrialChambersJigsawStructureBlockRules& operator=(VanillaTrialChambersJigsawStructureBlockRules const&);
    VanillaTrialChambersJigsawStructureBlockRules(VanillaTrialChambersJigsawStructureBlockRules const&);
    VanillaTrialChambersJigsawStructureBlockRules();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@VanillaTrialChambersJigsawStructureBlockRules@@SAXAEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(class JigsawStructureRegistry&);

    // NOLINTEND
};
