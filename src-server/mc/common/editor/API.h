#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ServerScriptPackType.h"

// auto generated forward declare list
// clang-format off
namespace Editor::API { struct EditorExtensionOptionalParameters; }
// clang-format on

namespace Editor::API {
// functions
// NOLINTBEGIN
MCNAPI void _preprocessExtensionCreationParameters(::Editor::API::ServerScriptPackType packType, ::std::optional<::Editor::API::EditorExtensionOptionalParameters>& params);

MCNAPI ::Editor::API::ServerScriptPackType getServerScriptPackType(::std::string const& moduleId);
// NOLINTEND

}
