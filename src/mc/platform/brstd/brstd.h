#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/platform/brstd/associative_adapter.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MovementAttributeEntry;
namespace mce::framebuilder { struct PerCascadeParameters; }
// clang-format on

namespace brstd {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI bool operator==(
    ::brstd::static_vector<::brstd::static_vector<::mce::framebuilder::PerCascadeParameters, 8>, 4> const& lhs,
    ::brstd::static_vector<::brstd::static_vector<::mce::framebuilder::PerCascadeParameters, 8>, 4> const& rhs
);
#endif

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
