#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/editor/ProjectExportType.h"
#include "mc/platform/Result.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace Editor { class LogMessage; }
namespace Editor { struct EditorStructureDBMetadata; }
namespace Editor { struct EditorStructureMetadataEditParams; }
namespace Editor { struct LocalizationEntry; }
namespace Editor { struct LogContent; }
namespace Editor { struct Cone; }
namespace Editor { struct Cube; }
namespace Editor { struct Cylinder; }
namespace Editor { struct Square; }
namespace Editor { struct Vertex; }
// clang-format on

namespace Editor {
// functions
// NOLINTBEGIN
MCNAPI ::std::unordered_set<uint64> _getFilteredBlockSet();

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Result<::CompoundTag> compoundTagFromString(::std::string_view data);
#endif

MCNAPI ::Bedrock::Result<::std::string> compoundTagToString(::CompoundTag const& tag);

#ifdef LL_PLAT_C
MCNAPI ::Editor::WorldType
getEditorWorldType(::std::optional<bool> optIsEditorWorld, ::std::optional<bool> optIsEditorTestWorld);
#endif

MCNAPI ::FileArchiver::ExportType getFileArchiverExportType(::Editor::ProjectExportType exportType);

#ifdef LL_PLAT_C
MCNAPI ::std::string getLocalizedString(::std::variant<::std::string, ::Editor::LocalizationEntry> const& locale);
#endif

MCNAPI bool isEditorRealmsUploadWorld(::Editor::WorldType t);

MCNAPI bool isEditorTestWorld(::Editor::WorldType t);

MCNAPI bool isEditorWorld(::Editor::WorldType t);

#ifdef LL_PLAT_C
MCNAPI void
makeCone(::Editor::Cone const& cone, ::std::vector<::Editor::Vertex>& r_vertices, ::std::vector<ushort>& r_indices);

MCNAPI void
makeCube(::Editor::Cube const& cube, ::std::vector<::Editor::Vertex>& r_vertices, ::std::vector<ushort>& r_indices);

MCNAPI void makeHollowCylinder(
    ::Editor::Cylinder const&        cylinder,
    ::std::vector<::Editor::Vertex>& r_vertices,
    ::std::vector<ushort>&           r_indices
);

MCNAPI void makeHollowSquare(
    ::Editor::Square const&          square,
    ::std::vector<::Editor::Vertex>& r_vertices,
    ::std::vector<ushort>&           r_indices
);

MCNAPI void makeSquare(
    ::Editor::Square const&          square,
    ::std::vector<::Editor::Vertex>& r_vertices,
    ::std::vector<ushort>&           r_indices
);
#endif

MCNAPI bool operator==(::Editor::EditorStructureDBMetadata const&, ::Editor::EditorStructureDBMetadata const&);

MCNAPI bool
operator==(::Editor::EditorStructureMetadataEditParams const&, ::Editor::EditorStructureMetadataEditParams const&);

MCNAPI bool operator==(::Editor::LogContent const&, ::Editor::LogContent const&);

MCNAPI bool operator==(::Editor::LogMessage const&, ::Editor::LogMessage const&);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string_view const& EDITOR_PACK_CAPABILITY();
// NOLINTEND

} // namespace Editor
