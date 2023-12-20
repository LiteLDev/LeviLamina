#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/detail/Chunk.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Chunk; }
namespace dcsctp { class TSNTag; }
// clang-format on

namespace dcsctp {

class AnyForwardTsnChunk : public ::dcsctp::Chunk {
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
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AnyForwardTsnChunk@dcsctp@@UEAA@XZ
    virtual ~AnyForwardTsnChunk() = default;

    // symbol:
    // ??0AnyForwardTsnChunk@dcsctp@@QEAA@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@V?$vector@USkippedStream@AnyForwardTsnChunk@dcsctp@@V?$allocator@USkippedStream@AnyForwardTsnChunk@dcsctp@@@std@@@std@@@Z
    MCAPI
    AnyForwardTsnChunk(class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, std::vector<struct dcsctp::AnyForwardTsnChunk::SkippedStream>);

    // NOLINTEND
};

}; // namespace dcsctp
