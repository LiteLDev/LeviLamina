#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class VanillaAncientCityJigsawStructures {
public:
    // prevent constructor by default
    VanillaAncientCityJigsawStructures& operator=(VanillaAncientCityJigsawStructures const&);
    VanillaAncientCityJigsawStructures(VanillaAncientCityJigsawStructures const&);
    VanillaAncientCityJigsawStructures();

public:
    // NOLINTBEGIN
    MCAPI static void initialize(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        class FeatureRegistry&                              featureRegistry,
        class JigsawStructureRegistry&                      registry
    );

    // NOLINTEND
};
