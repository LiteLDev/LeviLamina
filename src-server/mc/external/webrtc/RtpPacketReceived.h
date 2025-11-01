#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpPacket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpHeaderExtensionMap; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RtpPacketReceived : public ::webrtc::RtpPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd76bd1;
    ::ll::UntypedStorage<4, 4> mUnkbc259d;
    ::ll::UntypedStorage<4, 4> mUnk9ca1c6;
    ::ll::UntypedStorage<1, 1> mUnkbe0a28;
    ::ll::UntypedStorage<8, 8> mUnk32dba3;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketReceived& operator=(RtpPacketReceived const&);
    RtpPacketReceived();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpPacketReceived(::webrtc::RtpPacketReceived const&);

    MCNAPI RtpPacketReceived(::webrtc::RtpHeaderExtensionMap const* extensions, ::webrtc::Timestamp arrival_time);

    MCNAPI ~RtpPacketReceived();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpPacketReceived const&);

    MCNAPI void* $ctor(::webrtc::RtpHeaderExtensionMap const* extensions, ::webrtc::Timestamp arrival_time);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
