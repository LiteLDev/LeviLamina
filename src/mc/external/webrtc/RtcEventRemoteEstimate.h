#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventRemoteEstimate : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke4ec3b;
    ::ll::UntypedStorage<8, 8> mUnk9beed8;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventRemoteEstimate& operator=(RtcEventRemoteEstimate const&);
    RtcEventRemoteEstimate(RtcEventRemoteEstimate const&);
    RtcEventRemoteEstimate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    virtual bool IsConfigEvent() const /*override*/;

    virtual ~RtcEventRemoteEstimate() /*override*/ = default;
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
