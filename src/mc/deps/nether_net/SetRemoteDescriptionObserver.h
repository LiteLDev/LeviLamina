#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedObject.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
// clang-format on

namespace NetherNet {

class SetRemoteDescriptionObserver : public ::rtc::RefCountedObject<::webrtc::SetRemoteDescriptionObserverInterface> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk7cc79b;
    ::ll::UntypedStorage<8, 64> mUnk3dde25;
    // NOLINTEND

public:
    // prevent constructor by default
    SetRemoteDescriptionObserver& operator=(SetRemoteDescriptionObserver const&);
    SetRemoteDescriptionObserver(SetRemoteDescriptionObserver const&);
    SetRemoteDescriptionObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~SetRemoteDescriptionObserver() /*override*/ = default;

    // vIndex: 3
    virtual void OnSetRemoteDescriptionComplete(::webrtc::RTCError error) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSetRemoteDescriptionComplete(::webrtc::RTCError error);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
