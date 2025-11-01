#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventProbeClusterCreated : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6c10ff;
    ::ll::UntypedStorage<4, 4> mUnkd1befc;
    ::ll::UntypedStorage<4, 4> mUnkcf8f00;
    ::ll::UntypedStorage<4, 4> mUnka6a08d;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventProbeClusterCreated& operator=(RtcEventProbeClusterCreated const&);
    RtcEventProbeClusterCreated(RtcEventProbeClusterCreated const&);
    RtcEventProbeClusterCreated();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEventProbeClusterCreated() /*override*/ = default;

    // vIndex: 1
    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    // vIndex: 2
    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventProbeClusterCreated(int id, int bitrate_bps, uint min_probes, uint min_bytes);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int id, int bitrate_bps, uint min_probes, uint min_bytes);
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
