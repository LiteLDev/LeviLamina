#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaTrailRuinsJigsawStructureElements {
public:
    // prevent constructor by default
    VanillaTrailRuinsJigsawStructureElements& operator=(VanillaTrailRuinsJigsawStructureElements const&);
    VanillaTrailRuinsJigsawStructureElements(VanillaTrailRuinsJigsawStructureElements const&);
    VanillaTrailRuinsJigsawStructureElements();

public:
    // NOLINTBEGIN
    // symbol:
    // ?initialize@VanillaTrailRuinsJigsawStructureElements@@SAXAEBV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> const& manager,
        class JigsawStructureRegistry&                             jigsawRegistry
    );

    // NOLINTEND
};
