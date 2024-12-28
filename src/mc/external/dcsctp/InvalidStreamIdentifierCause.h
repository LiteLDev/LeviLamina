#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class InvalidStreamIdentifierCause {
public:
    // prevent constructor by default
    InvalidStreamIdentifierCause& operator=(InvalidStreamIdentifierCause const&);
    InvalidStreamIdentifierCause(InvalidStreamIdentifierCause const&);
    InvalidStreamIdentifierCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::InvalidStreamIdentifierCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
