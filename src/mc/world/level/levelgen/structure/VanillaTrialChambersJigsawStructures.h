#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaTrialChambersJigsawStructures {
public:
    // prevent constructor by default
    VanillaTrialChambersJigsawStructures& operator=(VanillaTrialChambersJigsawStructures const&);
    VanillaTrialChambersJigsawStructures(VanillaTrialChambersJigsawStructures const&);
    VanillaTrialChambersJigsawStructures();

public:
    // NOLINTBEGIN
    // symbol:
    // ?initialize@VanillaTrialChambersJigsawStructures@@SAXAEAUStructureTemplateRegistrationContext@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(struct StructureTemplateRegistrationContext&, class JigsawStructureRegistry&);

    // NOLINTEND
};
