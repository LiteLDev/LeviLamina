#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Namespaces {
// functions
// NOLINTBEGIN
MCNAPI bool isFullyQualifiedName(::std::string_view str);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> EDITOR_NAMESPACE();
// NOLINTEND

} // namespace Editor::Namespaces
