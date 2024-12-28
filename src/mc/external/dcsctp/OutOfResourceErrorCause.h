#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class OutOfResourceErrorCause {
public:
    // prevent constructor by default
    OutOfResourceErrorCause& operator=(OutOfResourceErrorCause const&);
    OutOfResourceErrorCause(OutOfResourceErrorCause const&);
    OutOfResourceErrorCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::OutOfResourceErrorCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
