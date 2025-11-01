#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventRtcpPacketOutgoing : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk56d28c;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventRtcpPacketOutgoing& operator=(RtcEventRtcpPacketOutgoing const&);
    RtcEventRtcpPacketOutgoing(RtcEventRtcpPacketOutgoing const&);
    RtcEventRtcpPacketOutgoing();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEventRtcpPacketOutgoing() /*override*/;

    // vIndex: 1
    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    // vIndex: 2
    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RtcEventRtcpPacketOutgoing(::rtc::ArrayView<uchar const> packet);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::ArrayView<uchar const> packet);
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

}
