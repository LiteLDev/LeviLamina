#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class ZeroChecksumAcceptableChunkParameter {
public:
    // prevent constructor by default
    ZeroChecksumAcceptableChunkParameter& operator=(ZeroChecksumAcceptableChunkParameter const&);
    ZeroChecksumAcceptableChunkParameter(ZeroChecksumAcceptableChunkParameter const&);
    ZeroChecksumAcceptableChunkParameter();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::ZeroChecksumAcceptableChunkParameter> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
