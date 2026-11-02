#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Editor::ThumbnailCacheHelpers {
// functions
// NOLINTBEGIN
MCNAPI ::std::string buildFilename(::mce::UUID id, uint hash, ::std::string_view extension);

MCNAPI uint extractHashFromFilename(::std::string_view filename);

MCNAPI bool matchFilename(::mce::UUID id, ::std::optional<uint> hash, ::std::string_view filename);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& ALLOWED_EXTENSIONS_STR();

MCNAPI ::std::set<::std::string_view> const& ALLOWED_FILETYPES();
// NOLINTEND

} // namespace Editor::ThumbnailCacheHelpers
