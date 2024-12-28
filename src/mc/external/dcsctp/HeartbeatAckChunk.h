#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class HeartbeatAckChunk {
public:
    // prevent constructor by default
    HeartbeatAckChunk& operator=(HeartbeatAckChunk const&);
    HeartbeatAckChunk(HeartbeatAckChunk const&);
    HeartbeatAckChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::HeartbeatAckChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
