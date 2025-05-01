#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::ResourceUri { struct ValidationResult; }
// clang-format on

namespace Util::ResourceUri {
// functions
// NOLINTBEGIN
MCNAPI ::std::string_view _getScheme(::std::string_view uri);

MCNAPI bool isFilePathScheme(::std::string_view uri);

MCNAPI bool isValidScheme(::std::string_view uri);

MCNAPI ::Util::ResourceUri::ValidationResult validateUri(::std::string const& uri);
// NOLINTEND

} // namespace Util::ResourceUri
