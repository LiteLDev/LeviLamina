#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TSNTag; }
// clang-format on

namespace dcsctp {

class AnyForwardTsnChunk {
public:
    // AnyForwardTsnChunk inner types declare
    // clang-format off
    struct SkippedStream;
    // clang-format on

    // AnyForwardTsnChunk inner types define
    struct SkippedStream {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    AnyForwardTsnChunk(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::std::vector<::dcsctp::AnyForwardTsnChunk::SkippedStream>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::std::vector<::dcsctp::AnyForwardTsnChunk::SkippedStream>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
