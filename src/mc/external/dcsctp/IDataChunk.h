#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class IDataChunk {
public:
    // prevent constructor by default
    IDataChunk& operator=(IDataChunk const&);
    IDataChunk(IDataChunk const&);
    IDataChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::IDataChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
