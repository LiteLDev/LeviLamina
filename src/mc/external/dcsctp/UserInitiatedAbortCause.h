#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class UserInitiatedAbortCause {
public:
    // prevent constructor by default
    UserInitiatedAbortCause& operator=(UserInitiatedAbortCause const&);
    UserInitiatedAbortCause(UserInitiatedAbortCause const&);
    UserInitiatedAbortCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::UserInitiatedAbortCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
