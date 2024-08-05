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
    MCAPI static void initialize(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        class FeatureRegistry&                              featureRegistry,
        class JigsawStructureRegistry&                      jigsawRegistry
    );

    // NOLINTEND
};
