#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/SlicedLoader.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Structures::PUVLoader::v1 { struct StructureMetadata; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Structures::PUVLoader::CurrentVersion {
// functions
// NOLINTBEGIN
MCNAPI void initializeLoader(
    ::cereal::ReflectionCtx&                                                                           ctx,
    ::Puv::SlicedLoader<::Editor::Structures::PUVLoader::v1::StructureMetadata, nullptr_t, nullptr_t>& loader
);
// NOLINTEND

} // namespace Editor::Structures::PUVLoader::CurrentVersion
