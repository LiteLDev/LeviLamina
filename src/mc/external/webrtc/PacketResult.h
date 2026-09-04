#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketResult {
public:
    // PacketResult inner types declare
    // clang-format off
    class ReceiveTimeOrder;
    struct RtpPacketInfo;
    // clang-format on

    // PacketResult inner types define
    class ReceiveTimeOrder {};

    struct RtpPacketInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk16c587;
        ::ll::UntypedStorage<2, 2> mUnke41e50;
        ::ll::UntypedStorage<1, 1> mUnk605292;
        // NOLINTEND

    public:
        // prevent constructor by default
        RtpPacketInfo& operator=(RtpPacketInfo const&);
        RtpPacketInfo(RtpPacketInfo const&);
        RtpPacketInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk4a5522;
    ::ll::UntypedStorage<8, 8>  mUnkf44e81;
    ::ll::UntypedStorage<4, 4>  mUnkaf5e3f;
    ::ll::UntypedStorage<4, 12> mUnk6cf2b6;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketResult& operator=(PacketResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PacketResult();

    MCNAPI PacketResult(::webrtc::PacketResult const&);

    MCNAPI ~PacketResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::PacketResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
