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
    struct SkippedStream {
    public:
        // prevent constructor by default
        SkippedStream& operator=(SkippedStream const&);
        SkippedStream(SkippedStream const&);
        SkippedStream();
    };

public:
    // prevent constructor by default
    AnyForwardTsnChunk& operator=(AnyForwardTsnChunk const&);
    AnyForwardTsnChunk(AnyForwardTsnChunk const&);
    AnyForwardTsnChunk();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    AnyForwardTsnChunk(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::std::vector<::dcsctp::AnyForwardTsnChunk::SkippedStream>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
        $ctor(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::std::vector<::dcsctp::AnyForwardTsnChunk::SkippedStream>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
