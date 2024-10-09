#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class VanillaVillageJigsawStructures {
public:
    // prevent constructor by default
    VanillaVillageJigsawStructures& operator=(VanillaVillageJigsawStructures const&);
    VanillaVillageJigsawStructures(VanillaVillageJigsawStructures const&);
    VanillaVillageJigsawStructures();

public:
    // NOLINTBEGIN
    MCAPI static void initialize(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        class FeatureRegistry&                              featureRegistry,
        class JigsawStructureRegistry&                      registry
    );

    // NOLINTEND
};
