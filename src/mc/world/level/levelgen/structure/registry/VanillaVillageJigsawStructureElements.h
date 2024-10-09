#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class VanillaVillageJigsawStructureElements {
public:
    // prevent constructor by default
    VanillaVillageJigsawStructureElements& operator=(VanillaVillageJigsawStructureElements const&);
    VanillaVillageJigsawStructureElements(VanillaVillageJigsawStructureElements const&);
    VanillaVillageJigsawStructureElements();

public:
    // NOLINTBEGIN
    MCAPI static void initialize(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        class FeatureRegistry&                              featureRegistry,
        class JigsawStructureRegistry&                      jigsawRegistry
    );

    // NOLINTEND
};
