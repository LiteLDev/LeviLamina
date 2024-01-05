#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaTrailRuinsJigsawStructures {
public:
    // prevent constructor by default
    VanillaTrailRuinsJigsawStructures& operator=(VanillaTrailRuinsJigsawStructures const&);
    VanillaTrailRuinsJigsawStructures(VanillaTrailRuinsJigsawStructures const&);
    VanillaTrailRuinsJigsawStructures();

public:
    // NOLINTBEGIN
    // symbol:
    // ?initialize@VanillaTrailRuinsJigsawStructures@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void
    initialize(Bedrock::NotNullNonOwnerPtr<class StructureManager> manager, class JigsawStructureRegistry& registry);

    // NOLINTEND
};
