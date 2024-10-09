#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

namespace Editor {
// NOLINTBEGIN
MCAPI extern std::string_view const EDITOR_PACK_CAPABILITY;

MCAPI bool isEditorTestWorld(::Editor::WorldType t);

MCAPI bool isEditorWorld(::Editor::WorldType t);
// NOLINTEND

}; // namespace Editor
