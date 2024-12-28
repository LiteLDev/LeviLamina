#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/editor/ProjectExportType.h"
#include "mc/world/level/FileArchiver.h"

namespace Editor {
// functions
// NOLINTBEGIN
MCAPI ::FileArchiver::ExportType getFileArchiverExportType(::Editor::ProjectExportType exportType);

MCAPI bool hasEditorNamespace(::std::string_view str);

MCAPI bool isEditorTestWorld(::Editor::WorldType t);

MCAPI bool isEditorWorld(::Editor::WorldType t);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string_view const& EDITOR_PACK_CAPABILITY();
// NOLINTEND

} // namespace Editor
