#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct PacketResult; }
// clang-format on

namespace webrtc {

struct TransportPacketsFeedback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc96d46;
    ::ll::UntypedStorage<8, 8> mUnkafc205;
    ::ll::UntypedStorage<8, 24> mUnk5e1828;
    ::ll::UntypedStorage<8, 24> mUnk5b275d;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportPacketsFeedback& operator=(TransportPacketsFeedback const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::webrtc::PacketResult> PacketsWithFeedback() const;

    MCNAPI ::std::vector<::webrtc::PacketResult> ReceivedWithSendInfo() const;

    MCNAPI ::std::vector<::webrtc::PacketResult> SortedByReceiveTime() const;

    MCNAPI TransportPacketsFeedback();

    MCNAPI TransportPacketsFeedback(::webrtc::TransportPacketsFeedback const&);

    MCNAPI ~TransportPacketsFeedback();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::TransportPacketsFeedback const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
