#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class HeartbeatRequestChunk {
public:
    // prevent constructor by default
    HeartbeatRequestChunk& operator=(HeartbeatRequestChunk const&);
    HeartbeatRequestChunk(HeartbeatRequestChunk const&);
    HeartbeatRequestChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::HeartbeatRequestChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
