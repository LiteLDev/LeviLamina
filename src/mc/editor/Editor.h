#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct Cone; }
namespace Editor { struct Cube; }
namespace Editor { struct Cylinder; }
namespace Editor { struct Vertex; }
// clang-format on

namespace Editor {
// functions
// NOLINTBEGIN
MCNAPI ::std::unordered_set<uint64> _getFilteredBlockSet();

MCNAPI_C void
makeCone(::Editor::Cone const& cone, ::std::vector<::Editor::Vertex>& r_vertices, ::std::vector<ushort>& r_indices);

MCNAPI_C void
makeCube(::Editor::Cube const& cube, ::std::vector<::Editor::Vertex>& r_vertices, ::std::vector<ushort>& r_indices);

MCNAPI_C void makeHollowCylinder(
    ::Editor::Cylinder const&        cylinder,
    ::std::vector<::Editor::Vertex>& r_vertices,
    ::std::vector<ushort>&           r_indices
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string_view const& EDITOR_PACK_CAPABILITY();
// NOLINTEND

} // namespace Editor
