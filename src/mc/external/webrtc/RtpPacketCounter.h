#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacket; }
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

struct RtpPacketCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd6dbf6;
    ::ll::UntypedStorage<8, 8> mUnk935bdf;
    ::ll::UntypedStorage<8, 8> mUnkd66197;
    ::ll::UntypedStorage<8, 8> mUnk1b8cbf;
    ::ll::UntypedStorage<8, 8> mUnk477e1b;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketCounter& operator=(RtpPacketCounter const&);
    RtpPacketCounter(RtpPacketCounter const&);
    RtpPacketCounter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Add(::webrtc::RtpPacketCounter const&);

    MCAPI explicit RtpPacketCounter(::webrtc::RtpPacket const&);

    MCAPI explicit RtpPacketCounter(::webrtc::RtpPacketToSend const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtpPacket const&);

    MCAPI void* $ctor(::webrtc::RtpPacketToSend const&);
    // NOLINTEND
};

} // namespace webrtc
