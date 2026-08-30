#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventProbeResultSuccess : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1d2c2c;
    ::ll::UntypedStorage<4, 4> mUnk551a8c;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventProbeResultSuccess& operator=(RtcEventProbeResultSuccess const&);
    RtcEventProbeResultSuccess(RtcEventProbeResultSuccess const&);
    RtcEventProbeResultSuccess();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcEventProbeResultSuccess() /*override*/ = default;

    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventProbeResultSuccess(int id, int bitrate_bps);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int id, int bitrate_bps);
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
