#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class UnresolvableAddressCause {
public:
    // prevent constructor by default
    UnresolvableAddressCause& operator=(UnresolvableAddressCause const&);
    UnresolvableAddressCause(UnresolvableAddressCause const&);
    UnresolvableAddressCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::UnresolvableAddressCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
