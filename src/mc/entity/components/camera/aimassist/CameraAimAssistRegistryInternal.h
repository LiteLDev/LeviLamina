#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
namespace CameraAimAssist { class PriorityCategory; }
namespace CameraAimAssist { class PriorityPreset; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoriesFile; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraAimAssistRegistryInternal {
// functions
// NOLINTBEGIN
MCNAPI ::Puv::Loader<::SharedTypes::v1_21_50::CameraAimAssistCategoriesFile>
getCategoriesLoader(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);

MCNAPI ::Puv::Loader<::SharedTypes::v1_21_50::CameraAimAssistPresetFile>
getPresetLoader(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);

MCNAPI_C ::CameraAimAssist::PriorityCategory
makePriorityCategoryFromData(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const& categoryDefinition);

MCNAPI_C ::CameraAimAssist::PriorityPreset
makePriorityPresetFromData(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const& presetDefinition);
// NOLINTEND

} // namespace CameraAimAssistRegistryInternal
