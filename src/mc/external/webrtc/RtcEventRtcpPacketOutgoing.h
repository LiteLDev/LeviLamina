#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventRtcpPacketOutgoing : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk43671e;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventRtcpPacketOutgoing& operator=(RtcEventRtcpPacketOutgoing const&);
    RtcEventRtcpPacketOutgoing(RtcEventRtcpPacketOutgoing const&);
    RtcEventRtcpPacketOutgoing();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcEventRtcpPacketOutgoing() /*override*/;

    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RtcEventRtcpPacketOutgoing(::webrtc::ArrayView<uchar const, 18446744073709546905> packet);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::ArrayView<uchar const, 18446744073709546905> packet);
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
