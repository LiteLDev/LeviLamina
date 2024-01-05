#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaBastionJigsawStructures {
public:
    // prevent constructor by default
    VanillaBastionJigsawStructures& operator=(VanillaBastionJigsawStructures const&);
    VanillaBastionJigsawStructures(VanillaBastionJigsawStructures const&);
    VanillaBastionJigsawStructures();

public:
    // NOLINTBEGIN
    // symbol:
    // ?initialize@VanillaBastionJigsawStructures@@SAXV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEAVFeatureRegistry@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        class FeatureRegistry&                              featureRegistry,
        class JigsawStructureRegistry&                      registry
    );

    // NOLINTEND
};
