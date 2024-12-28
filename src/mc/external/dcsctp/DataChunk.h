#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class DataChunk {
public:
    // prevent constructor by default
    DataChunk& operator=(DataChunk const&);
    DataChunk(DataChunk const&);
    DataChunk();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::DataChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
