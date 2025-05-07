#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedObject.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
// clang-format on

namespace NetherNet {

class SetLocalDescriptionObserverForAnswer
: public ::rtc::RefCountedObject<::webrtc::SetLocalDescriptionObserverInterface> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc5e03b;
    ::ll::UntypedStorage<8, 32> mUnk33df37;
    ::ll::UntypedStorage<1, 1>  mUnk740d15;
    // NOLINTEND

public:
    // prevent constructor by default
    SetLocalDescriptionObserverForAnswer& operator=(SetLocalDescriptionObserverForAnswer const&);
    SetLocalDescriptionObserverForAnswer(SetLocalDescriptionObserverForAnswer const&);
    SetLocalDescriptionObserverForAnswer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void OnSetLocalDescriptionComplete(::webrtc::RTCError error) /*override*/;

    // vIndex: 2
    virtual ~SetLocalDescriptionObserverForAnswer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSetLocalDescriptionComplete(::webrtc::RTCError error);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
