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
    ::ll::UntypedStorage<8, 8>  mUnkc96d46;
    ::ll::UntypedStorage<8, 8>  mUnkafc205;
    ::ll::UntypedStorage<8, 24> mUnk5e1828;
    ::ll::UntypedStorage<8, 24> mUnk5b275d;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportPacketsFeedback& operator=(TransportPacketsFeedback const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::webrtc::PacketResult> PacketsWithFeedback() const;

    MCAPI ::std::vector<::webrtc::PacketResult> ReceivedWithSendInfo() const;

    MCAPI ::std::vector<::webrtc::PacketResult> SortedByReceiveTime() const;

    MCAPI TransportPacketsFeedback();

    MCAPI TransportPacketsFeedback(::webrtc::TransportPacketsFeedback const&);

    MCAPI ~TransportPacketsFeedback();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::TransportPacketsFeedback const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
