#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/InlinedVector.h"

namespace absl {
// functions
// NOLINTBEGIN
MCNAPI ::std::string Base64Escape(::std::string_view src);

MCNAPI bool Base64Unescape(::std::string_view src, ::std::string* dest);

MCNAPI bool EqualsIgnoreCase(::std::string_view piece1, ::std::string_view piece2);

MCNAPI bool StartsWithIgnoreCase(::std::string_view text, ::std::string_view prefix);

MCNAPI bool operator==(
    ::absl::InlinedVector<int, 4, ::std::allocator<int>> const& a,
    ::absl::InlinedVector<int, 4, ::std::allocator<int>> const& b
);
// NOLINTEND

} // namespace absl
