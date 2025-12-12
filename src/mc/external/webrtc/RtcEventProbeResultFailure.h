#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ProbeFailureReason.h"
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventProbeResultFailure : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd643d6;
    ::ll::UntypedStorage<4, 4> mUnkd3c1c8;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventProbeResultFailure& operator=(RtcEventProbeResultFailure const&);
    RtcEventProbeResultFailure(RtcEventProbeResultFailure const&);
    RtcEventProbeResultFailure();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcEventProbeResultFailure() /*override*/ = default;

    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventProbeResultFailure(int id, ::webrtc::ProbeFailureReason failure_reason);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int id, ::webrtc::ProbeFailureReason failure_reason);
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
