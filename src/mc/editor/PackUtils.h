#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Editor::PackUtils {
// functions
// NOLINTBEGIN
MCNAPI bool isValidEditorPackName(::std::string_view name);

MCNAPI bool isValidEditorPackRelativePath(::Core::PathView relativePath);
// NOLINTEND

} // namespace Editor::PackUtils
