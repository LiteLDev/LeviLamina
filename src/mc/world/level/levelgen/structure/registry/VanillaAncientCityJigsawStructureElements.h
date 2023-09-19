#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaAncientCityJigsawStructureElements {
public:
    // prevent constructor by default
    VanillaAncientCityJigsawStructureElements& operator=(VanillaAncientCityJigsawStructureElements const&);
    VanillaAncientCityJigsawStructureElements(VanillaAncientCityJigsawStructureElements const&);
    VanillaAncientCityJigsawStructureElements();

public:
    // NOLINTBEGIN
    // symbol:
    // ?initialize@VanillaAncientCityJigsawStructureElements@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVFeatureRegistry@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void
    initialize(gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry&, class JigsawStructureRegistry&);

    // NOLINTEND
};
