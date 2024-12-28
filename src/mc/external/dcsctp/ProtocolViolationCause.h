#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ProtocolViolationCause {
public:
    // prevent constructor by default
    ProtocolViolationCause& operator=(ProtocolViolationCause const&);
    ProtocolViolationCause(ProtocolViolationCause const&);
    ProtocolViolationCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::ProtocolViolationCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
