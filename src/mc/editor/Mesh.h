#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Mesh { struct MeshColorSource; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Mesh {
// functions
// NOLINTBEGIN
MCNAPI void bindMeshColorSourceTypes(::cereal::ReflectionCtx& ctx);

MCNAPI ::std::vector<::Editor::Mesh::MeshColorSource>
quantizeMeshColorSources(::std::vector<::Editor::Mesh::MeshColorSource> const& colorSources, uint64 maxColorEntryCount);
// NOLINTEND

} // namespace Editor::Mesh
