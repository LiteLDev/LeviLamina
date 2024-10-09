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
    MCAPI static void
    initialize(struct StructureTemplateRegistrationContext& context, class JigsawStructureRegistry& registry);

    // NOLINTEND
};
