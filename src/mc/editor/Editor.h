#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/LogContent.h"
#include "mc/editor/blocks/EditorBlockPalette.h"
#include "mc/editor/logging/LogMessage.h"
#include "mc/editor/structure/EditorStructureDBMetadata.h"
#include "mc/editor/structure/EditorStructureMetadataEditParams.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct LocalizationEntry; }
namespace Editor { struct Cone; }
namespace Editor { struct Cube; }
namespace Editor { struct Cylinder; }
namespace Editor { struct Vertex; }
// clang-format on

namespace Editor {
// functions
// NOLINTBEGIN
MCNAPI ::std::unordered_set<uint64> _getFilteredBlockSet();

MCNAPI_C ::std::string getLocalizedString(::std::variant<::std::string, ::Editor::LocalizationEntry> const& locale);

MCNAPI_C void
makeCone(::Editor::Cone const& cone, ::std::vector<::Editor::Vertex>& r_vertices, ::std::vector<ushort>& r_indices);

MCNAPI_C void
makeCube(::Editor::Cube const& cube, ::std::vector<::Editor::Vertex>& r_vertices, ::std::vector<ushort>& r_indices);

MCNAPI_C void makeHollowCylinder(
    ::Editor::Cylinder const&        cylinder,
    ::std::vector<::Editor::Vertex>& r_vertices,
    ::std::vector<ushort>&           r_indices
);

MCNAPI bool operator==(::Editor::EditorBlockPalette const& __P0, ::Editor::EditorBlockPalette const& __P1);

MCNAPI bool
operator==(::Editor::EditorStructureDBMetadata const& __P0, ::Editor::EditorStructureDBMetadata const& __P1);

MCNAPI bool operator==(
    ::Editor::EditorStructureMetadataEditParams const& __P0,
    ::Editor::EditorStructureMetadataEditParams const& __P1
);

MCNAPI bool operator==(::Editor::LogContent const& __P0, ::Editor::LogContent const& __P1);

MCNAPI bool operator==(::Editor::LogMessage const& __P0, ::Editor::LogMessage const& __P1);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string_view const& EDITOR_PACK_CAPABILITY();
// NOLINTEND

} // namespace Editor
