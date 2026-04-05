#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/platform/brstd/associative_adapter.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct PerCascadeParameters; }
// clang-format on

namespace brstd {
// functions
// NOLINTBEGIN
MCNAPI bool operator==(
    ::brstd::static_vector<::mce::framebuilder::PerCascadeParameters, 8> const& lhs,
    ::brstd::static_vector<::mce::framebuilder::PerCascadeParameters, 8> const& rhs
);

MCNAPI void swap(
    ::brstd::
        associative_adapter<int, ::std::string, ::std::less<int>, ::std::vector<int>, ::std::vector<::std::string>>::
            zip_iterator::reference lhs,
    ::brstd::
        associative_adapter<int, ::std::string, ::std::less<int>, ::std::vector<int>, ::std::vector<::std::string>>::
            zip_iterator::reference rhs
);
// NOLINTEND

} // namespace brstd
