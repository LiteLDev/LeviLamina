#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SetLocalDescriptionObserverInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace NetherNet {

class SetLocalDescriptionObserverForOffer : public ::webrtc::SetLocalDescriptionObserverInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk81e669;
    ::ll::UntypedStorage<8, 32> mUnk4668ce;
    // NOLINTEND

public:
    // prevent constructor by default
    SetLocalDescriptionObserverForOffer& operator=(SetLocalDescriptionObserverForOffer const&);
    SetLocalDescriptionObserverForOffer(SetLocalDescriptionObserverForOffer const&);
    SetLocalDescriptionObserverForOffer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void OnSetLocalDescriptionComplete(::webrtc::RTCError error) /*override*/;

    // vIndex: 2
    virtual ~SetLocalDescriptionObserverForOffer() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnSetLocalDescriptionComplete(::webrtc::RTCError error);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
