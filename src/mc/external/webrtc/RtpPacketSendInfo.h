#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct PacedPacketInfo; }
// clang-format on

namespace webrtc {

struct RtpPacketSendInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkbe9c1f;
    ::ll::UntypedStorage<4, 8>  mUnke677f8;
    ::ll::UntypedStorage<2, 2>  mUnk77e611;
    ::ll::UntypedStorage<4, 4>  mUnk577f89;
    ::ll::UntypedStorage<8, 8>  mUnk8205b5;
    ::ll::UntypedStorage<8, 16> mUnkb52be2;
    ::ll::UntypedStorage<8, 24> mUnkdb57fe;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketSendInfo& operator=(RtpPacketSendInfo const&);
    RtpPacketSendInfo(RtpPacketSendInfo const&);
    RtpPacketSendInfo();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RtpPacketSendInfo
    From(::webrtc::RtpPacketToSend const& packet, ::webrtc::PacedPacketInfo const& pacing_info);
    // NOLINTEND
};

} // namespace webrtc
