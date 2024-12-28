#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class CookieAckChunk {
public:
    // prevent constructor by default
    CookieAckChunk& operator=(CookieAckChunk const&);
    CookieAckChunk(CookieAckChunk const&);
    CookieAckChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::CookieAckChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
