#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidatePairEventType.h"
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventIceCandidatePair : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka93886;
    ::ll::UntypedStorage<4, 4> mUnk8f56d4;
    ::ll::UntypedStorage<4, 4> mUnk574913;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventIceCandidatePair& operator=(RtcEventIceCandidatePair const&);
    RtcEventIceCandidatePair(RtcEventIceCandidatePair const&);
    RtcEventIceCandidatePair();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEventIceCandidatePair() /*override*/;

    // vIndex: 1
    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    // vIndex: 2
    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventIceCandidatePair(::webrtc::IceCandidatePairEventType type, uint candidate_pair_id, uint transaction_id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::IceCandidatePairEventType type, uint candidate_pair_id, uint transaction_id);
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
