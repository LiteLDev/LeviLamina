#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaTrialChambersJigsawStructureElements {
public:
    // prevent constructor by default
    VanillaTrialChambersJigsawStructureElements& operator=(VanillaTrialChambersJigsawStructureElements const&);
    VanillaTrialChambersJigsawStructureElements(VanillaTrialChambersJigsawStructureElements const&);
    VanillaTrialChambersJigsawStructureElements();

public:
    // NOLINTBEGIN
    // symbol:
    // ?initialize@VanillaTrialChambersJigsawStructureElements@@SAXAEBV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void
    initialize(Bedrock::NotNullNonOwnerPtr<class StructureManager> const&, class JigsawStructureRegistry&);

    // symbol:
    // ?initializePoolElementsForAliasBindings@VanillaTrialChambersJigsawStructureElements@@SAXAEBV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVJigsawStructureRegistry@@AEBV?$vector@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@V?$allocator@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@@2@@std@@@Z
    MCAPI static void
    initializePoolElementsForAliasBindings(Bedrock::NotNullNonOwnerPtr<class StructureManager> const&, class JigsawStructureRegistry&, std::vector<std::unique_ptr<class PoolAliasBinding>> const&);

    // NOLINTEND
};
