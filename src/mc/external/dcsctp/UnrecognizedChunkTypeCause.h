#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class UnrecognizedChunkTypeCause {
public:
    // prevent constructor by default
    UnrecognizedChunkTypeCause& operator=(UnrecognizedChunkTypeCause const&);
    UnrecognizedChunkTypeCause(UnrecognizedChunkTypeCause const&);
    UnrecognizedChunkTypeCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::UnrecognizedChunkTypeCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
