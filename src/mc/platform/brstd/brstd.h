#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/associative_adapter.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MovementAttributeEntry;
// clang-format on

namespace brstd {
// functions
// NOLINTBEGIN
MCNAPI void swap(
    ::brstd::associative_adapter<
        ::HashedString,
        ::MovementAttributeEntry,
        ::std::less<::HashedString>,
        ::std::vector<::HashedString>,
        ::std::vector<::MovementAttributeEntry>>::zip_iterator::reference lhs,
    ::brstd::associative_adapter<
        ::HashedString,
        ::MovementAttributeEntry,
        ::std::less<::HashedString>,
        ::std::vector<::HashedString>,
        ::std::vector<::MovementAttributeEntry>>::zip_iterator::reference rhs
);
// NOLINTEND

} // namespace brstd
