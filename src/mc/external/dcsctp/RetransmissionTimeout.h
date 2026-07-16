#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct DcSctpOptions; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class RetransmissionTimeout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk572b86;
    ::ll::UntypedStorage<8, 8> mUnkc6578b;
    ::ll::UntypedStorage<8, 8> mUnk3b5d81;
    ::ll::UntypedStorage<8, 8> mUnk7f645b;
    ::ll::UntypedStorage<1, 1> mUnk5b93ba;
    ::ll::UntypedStorage<8, 8> mUnk23f349;
    ::ll::UntypedStorage<8, 8> mUnkbc89bc;
    ::ll::UntypedStorage<8, 8> mUnk9a3cd4;
    // NOLINTEND

public:
    // prevent constructor by default
    RetransmissionTimeout& operator=(RetransmissionTimeout const&);
    RetransmissionTimeout(RetransmissionTimeout const&);
    RetransmissionTimeout();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ObserveRTT(::webrtc::TimeDelta rtt);

    MCNAPI explicit RetransmissionTimeout(::dcsctp::DcSctpOptions const& options);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dcsctp::DcSctpOptions const& options);
    // NOLINTEND
};

} // namespace dcsctp
