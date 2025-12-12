#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

class RtcEventRtpPacketOutgoing : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk996a50;
    ::ll::UntypedStorage<4, 4>   mUnk5fabc3;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventRtpPacketOutgoing& operator=(RtcEventRtpPacketOutgoing const&);
    RtcEventRtpPacketOutgoing(RtcEventRtpPacketOutgoing const&);
    RtcEventRtpPacketOutgoing();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcEventRtpPacketOutgoing() /*override*/;

    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventRtpPacketOutgoing(::webrtc::RtpPacketToSend const& packet, int probe_cluster_id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpPacketToSend const& packet, int probe_cluster_id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::RtcEvent::Type $GetType() const;

    MCNAPI bool $IsConfigEvent() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
