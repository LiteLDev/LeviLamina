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
    ::ll::UntypedStorage<8, 8> mUnk442b01;
    ::ll::UntypedStorage<1, 1> mUnk5b93ba;
    ::ll::UntypedStorage<8, 8> mUnkb55020;
    ::ll::UntypedStorage<8, 8> mUnk6155a1;
    ::ll::UntypedStorage<8, 8> mUnk893e57;
    // NOLINTEND

public:
    // prevent constructor by default
    RetransmissionTimeout& operator=(RetransmissionTimeout const&);
    RetransmissionTimeout(RetransmissionTimeout const&);
    RetransmissionTimeout();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ObserveRTT(::webrtc::TimeDelta measured_rtt);

    MCNAPI explicit RetransmissionTimeout(::dcsctp::DcSctpOptions const& options);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dcsctp::DcSctpOptions const& options);
    // NOLINTEND
};

} // namespace dcsctp
