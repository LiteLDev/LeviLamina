#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaTrialChambersJigsawStructures {
public:
    // prevent constructor by default
    VanillaTrialChambersJigsawStructures& operator=(VanillaTrialChambersJigsawStructures const&);
    VanillaTrialChambersJigsawStructures(VanillaTrialChambersJigsawStructures const&);
    VanillaTrialChambersJigsawStructures();

public:
    // NOLINTBEGIN
    // symbol:
    // ?initialize@VanillaTrialChambersJigsawStructures@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(Bedrock::NotNullNonOwnerPtr<class StructureManager>, class JigsawStructureRegistry&);

    // NOLINTEND
};
