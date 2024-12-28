#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ShutdownCompleteChunk {
public:
    // prevent constructor by default
    ShutdownCompleteChunk& operator=(ShutdownCompleteChunk const&);
    ShutdownCompleteChunk(ShutdownCompleteChunk const&);
    ShutdownCompleteChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::ShutdownCompleteChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
