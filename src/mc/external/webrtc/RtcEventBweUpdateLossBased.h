#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventBweUpdateLossBased : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaa36f2;
    ::ll::UntypedStorage<1, 1> mUnk7700a1;
    ::ll::UntypedStorage<4, 4> mUnkd13f4d;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventBweUpdateLossBased& operator=(RtcEventBweUpdateLossBased const&);
    RtcEventBweUpdateLossBased(RtcEventBweUpdateLossBased const&);
    RtcEventBweUpdateLossBased();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcEventBweUpdateLossBased() /*override*/;

    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventBweUpdateLossBased(int bitrate_bps, uchar fraction_loss, int total_packets);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int bitrate_bps, uchar fraction_loss, int total_packets);
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
