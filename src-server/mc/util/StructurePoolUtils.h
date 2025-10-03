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

namespace StructurePoolUtils {
// functions
// NOLINTBEGIN
MCNAPI void registerDataDrivenStructures(
    ::JigsawStructureRegistry&                        jigsawStructureRegistry,
    ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
    ::FeatureRegistry const&                          features
);
// NOLINTEND

} // namespace StructurePoolUtils
