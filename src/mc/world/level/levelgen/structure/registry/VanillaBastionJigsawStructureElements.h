#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaBastionJigsawStructureElements {
public:
    // prevent constructor by default
    VanillaBastionJigsawStructureElements& operator=(VanillaBastionJigsawStructureElements const&);
    VanillaBastionJigsawStructureElements(VanillaBastionJigsawStructureElements const&);
    VanillaBastionJigsawStructureElements();

public:
    // NOLINTBEGIN
    MCAPI static void initialize(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        class FeatureRegistry&                              featureRegistry,
        class JigsawStructureRegistry&                      jigsawRegistry
    );

    // NOLINTEND
};
