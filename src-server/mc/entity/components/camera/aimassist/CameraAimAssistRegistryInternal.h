#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoriesFile; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraAimAssistRegistryInternal {
// functions
// NOLINTBEGIN
MCAPI ::Puv::Loader<::SharedTypes::v1_21_50::CameraAimAssistCategoriesFile> getCategoriesLoader(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);

MCAPI ::Puv::Loader<::SharedTypes::v1_21_50::CameraAimAssistPresetFile> getPresetLoader(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
// NOLINTEND

}
