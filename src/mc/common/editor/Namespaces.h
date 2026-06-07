#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Namespaces {
// functions
// NOLINTBEGIN
MCNAPI bool hasEditorNamespace(::std::string_view str);

MCNAPI bool isFullyQualifiedName(::std::string_view str);

MCNAPI bool isValidName(::std::string_view str);
// NOLINTEND

} // namespace Editor::Namespaces
