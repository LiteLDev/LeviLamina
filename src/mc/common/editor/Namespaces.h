#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Namespaces {
// functions
// NOLINTBEGIN
MCNAPI bool isFullyQualifiedName(::std::string_view str);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::add_lvalue_reference_t<char const[]> EDITOR_NAMESPACE();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::add_lvalue_reference_t<char const[]> EDITOR_NAMESPACE();
#endif
// NOLINTEND

} // namespace Editor::Namespaces
