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

namespace StructurePoolUtils {
// functions
// NOLINTBEGIN
MCNAPI void registerDataDrivenStructures(::JigsawStructureRegistry& jigsawStructureRegistry, ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> structureManager, ::FeatureRegistry const& features);
// NOLINTEND

}
