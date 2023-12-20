#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/detail/Chunk.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Chunk; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
// clang-format on

namespace dcsctp {

class AnyDataChunk : public ::dcsctp::Chunk {
public:
    // prevent constructor by default
    AnyDataChunk& operator=(AnyDataChunk const&);
    AnyDataChunk(AnyDataChunk const&);
    AnyDataChunk();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AnyDataChunk@dcsctp@@UEAA@XZ
    virtual ~AnyDataChunk() = default;

    // symbol: ??0AnyDataChunk@dcsctp@@QEAA@V?$StrongAlias@VTSNTag@dcsctp@@I@webrtc@@UData@1@_N@Z
    MCAPI AnyDataChunk(class webrtc::StrongAlias<class dcsctp::TSNTag, uint>, struct dcsctp::Data, bool);

    // NOLINTEND
};

}; // namespace dcsctp
