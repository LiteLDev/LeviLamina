#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class InitAckChunk {
public:
    // prevent constructor by default
    InitAckChunk& operator=(InitAckChunk const&);
    InitAckChunk(InitAckChunk const&);
    InitAckChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::InitAckChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
