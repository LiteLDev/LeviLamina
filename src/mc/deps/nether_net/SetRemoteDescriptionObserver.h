#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedObject.h"
#include "mc/external/webrtc/scoped_refptr.h"

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
    virtual ~SetRemoteDescriptionObserver() /*override*/;

    // vIndex: 3
    virtual void OnSetRemoteDescriptionComplete(::webrtc::RTCError error) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface>
    Create(::std::function<void()>&& onSuccess, ::std::function<void(::webrtc::RTCError const&)>&& onFailure);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnSetRemoteDescriptionComplete(::webrtc::RTCError error);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
