#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/editor/WorldType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

namespace Editor {
// NOLINTBEGIN
// symbol: ?EDITOR_PACK_CAPABILITY@Editor@@3V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
MCAPI extern std::string_view const EDITOR_PACK_CAPABILITY;

// symbol: ?isEditorTestWorld@Editor@@YA_NW4WorldType@1@@Z
MCAPI bool isEditorTestWorld(::Editor::WorldType);

// symbol: ?isEditorWorld@Editor@@YA_NW4WorldType@1@@Z
MCAPI bool isEditorWorld(::Editor::WorldType);
// NOLINTEND

}; // namespace Editor
