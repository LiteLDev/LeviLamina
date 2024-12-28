#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
class JigsawStructureRegistry;
class StructureManager;
// clang-format on

class VanillaAncientCityJigsawStructures {
public:
    // prevent constructor by default
    VanillaAncientCityJigsawStructures& operator=(VanillaAncientCityJigsawStructures const&);
    VanillaAncientCityJigsawStructures(VanillaAncientCityJigsawStructures const&);
    VanillaAncientCityJigsawStructures();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initialize(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> manager,
        ::FeatureRegistry&                                featureRegistry,
        ::JigsawStructureRegistry&                        registry
    );
    // NOLINTEND
};
