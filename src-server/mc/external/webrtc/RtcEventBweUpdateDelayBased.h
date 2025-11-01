#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BandwidthUsage.h"
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventBweUpdateDelayBased : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkad11b4;
    ::ll::UntypedStorage<4, 4> mUnk8938f0;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventBweUpdateDelayBased& operator=(RtcEventBweUpdateDelayBased const&);
    RtcEventBweUpdateDelayBased(RtcEventBweUpdateDelayBased const&);
    RtcEventBweUpdateDelayBased();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEventBweUpdateDelayBased() /*override*/;

    // vIndex: 1
    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    // vIndex: 2
    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventBweUpdateDelayBased(int bitrate_bps, ::webrtc::BandwidthUsage detector_state);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int bitrate_bps, ::webrtc::BandwidthUsage detector_state);
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
