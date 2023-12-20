#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class FSNTag; }
namespace dcsctp { class IsBeginningTag; }
namespace dcsctp { class IsEndTag; }
namespace dcsctp { class IsUnorderedTag; }
namespace dcsctp { class MIDTag; }
namespace dcsctp { class PPIDTag; }
namespace dcsctp { class SSNTag; }
namespace dcsctp { class StreamIDTag; }
// clang-format on

namespace dcsctp {

struct Data {
public:
    // prevent constructor by default
    Data& operator=(Data const&);
    Data(Data const&);
    Data();

public:
    // NOLINTBEGIN
    // symbol: ?Clone@Data@dcsctp@@QEBA?AU12@XZ
    MCAPI struct dcsctp::Data Clone() const;

    // symbol: ??0Data@dcsctp@@QEAA@$$QEAU01@@Z
    MCAPI Data(struct dcsctp::Data&&);

    // symbol:
    // ??0Data@dcsctp@@QEAA@V?$StrongAlias@VStreamIDTag@dcsctp@@G@webrtc@@V?$StrongAlias@VSSNTag@dcsctp@@G@3@V?$StrongAlias@VMIDTag@dcsctp@@I@3@V?$StrongAlias@VFSNTag@dcsctp@@I@3@V?$StrongAlias@VPPIDTag@dcsctp@@I@3@V?$vector@EV?$allocator@E@std@@@std@@V?$StrongAlias@VIsBeginningTag@dcsctp@@_N@3@V?$StrongAlias@VIsEndTag@dcsctp@@_N@3@V?$StrongAlias@VIsUnorderedTag@dcsctp@@_N@3@@Z
    MCAPI Data(class webrtc::StrongAlias<class dcsctp::StreamIDTag, ushort>, class webrtc::StrongAlias<class dcsctp::SSNTag, ushort>, class webrtc::StrongAlias<class dcsctp::MIDTag, uint>, class webrtc::StrongAlias<class dcsctp::FSNTag, uint>, class webrtc::StrongAlias<class dcsctp::PPIDTag, uint>, std::vector<uchar>, class webrtc::StrongAlias<class dcsctp::IsBeginningTag, bool>, class webrtc::StrongAlias<class dcsctp::IsEndTag, bool>, class webrtc::StrongAlias<class dcsctp::IsUnorderedTag, bool>);

    // symbol: ??1Data@dcsctp@@QEAA@XZ
    MCAPI ~Data();

    // NOLINTEND
};

}; // namespace dcsctp
