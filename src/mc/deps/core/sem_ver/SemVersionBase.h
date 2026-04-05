#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/StaticOptimizedString.h"

template <typename T0>
class SemVersionBase {};

// free functions
// NOLINTBEGIN
MCNAPI bool operator!=(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCNAPI bool operator<(::SemVersionBase<::std::string_view> const& lhs, ::SemVersionBase<::std::string_view> const& rhs);

MCNAPI bool operator<(
    ::SemVersionBase<::std::string_view> const&               lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCNAPI bool operator<(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCNAPI bool operator<(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::std::string_view> const&               rhs
);

MCNAPI bool operator==(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& rhs
);

MCNAPI bool operator==(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::std::string_view> const&               rhs
);

MCNAPI bool operator>=(
    ::SemVersionBase<::Bedrock::StaticOptimizedString> const& lhs,
    ::SemVersionBase<::std::string_view> const&               rhs
);
// NOLINTEND
