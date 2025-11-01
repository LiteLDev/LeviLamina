#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidatePairConfigType.h"
#include "mc/external/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidatePairDescription; }
// clang-format on

namespace webrtc {

class RtcEventIceCandidatePairConfig : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3705a5;
    ::ll::UntypedStorage<4, 4> mUnkaa2561;
    ::ll::UntypedStorage<4, 28> mUnkb7afb3;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventIceCandidatePairConfig& operator=(RtcEventIceCandidatePairConfig const&);
    RtcEventIceCandidatePairConfig(RtcEventIceCandidatePairConfig const&);
    RtcEventIceCandidatePairConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEventIceCandidatePairConfig() /*override*/;

    // vIndex: 1
    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    // vIndex: 2
    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventIceCandidatePairConfig(::webrtc::IceCandidatePairConfigType type, uint candidate_pair_id, ::webrtc::IceCandidatePairDescription const& candidate_pair_desc);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::IceCandidatePairConfigType type, uint candidate_pair_id, ::webrtc::IceCandidatePairDescription const& candidate_pair_desc);
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
