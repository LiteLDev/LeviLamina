#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class PPIDTag; }
namespace dcsctp { class StreamIDTag; }
// clang-format on

namespace dcsctp {

class DcSctpMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkcab3e9;
    ::ll::UntypedStorage<4, 4>  mUnk893946;
    ::ll::UntypedStorage<8, 24> mUnkbd7732;
    // NOLINTEND

public:
    // prevent constructor by default
    DcSctpMessage& operator=(DcSctpMessage const&);
    DcSctpMessage(DcSctpMessage const&);
    DcSctpMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DcSctpMessage(
        ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id,
        ::webrtc::StrongAlias<::dcsctp::PPIDTag, uint>       ppid,
        ::std::vector<uchar>                                 payload
    );

    MCNAPI ~DcSctpMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id,
        ::webrtc::StrongAlias<::dcsctp::PPIDTag, uint>       ppid,
        ::std::vector<uchar>                                 payload
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
