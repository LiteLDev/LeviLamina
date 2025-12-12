#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
class IStructureTemplateManager;
class JigsawStructureRegistry;
// clang-format on

class VanillaBastionJigsawStructureElements {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initialize(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::FeatureRegistry&                                         featureRegistry,
        ::JigsawStructureRegistry&                                 jigsawRegistry
    );
    // NOLINTEND
};
