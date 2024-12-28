#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ForwardTsnChunk {
public:
    // prevent constructor by default
    ForwardTsnChunk& operator=(ForwardTsnChunk const&);
    ForwardTsnChunk(ForwardTsnChunk const&);
    ForwardTsnChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::ForwardTsnChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
