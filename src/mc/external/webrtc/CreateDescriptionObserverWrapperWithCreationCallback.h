#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/CreateSessionDescriptionObserver.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class CreateDescriptionObserverWrapperWithCreationCallback : public ::webrtc::CreateSessionDescriptionObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5f7c7f;
    ::ll::UntypedStorage<8, 8>  mUnk7a8c24;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateDescriptionObserverWrapperWithCreationCallback&
    operator=(CreateDescriptionObserverWrapperWithCreationCallback const&);
    CreateDescriptionObserverWrapperWithCreationCallback(CreateDescriptionObserverWrapperWithCreationCallback const&);
    CreateDescriptionObserverWrapperWithCreationCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnSuccess(::webrtc::SessionDescriptionInterface* desc) /*override*/;

    virtual void OnFailure(::webrtc::RTCError error) /*override*/;

    virtual ~CreateDescriptionObserverWrapperWithCreationCallback() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreateDescriptionObserverWrapperWithCreationCallback(
        ::std::function<void(::webrtc::SessionDescriptionInterface const*)> callback,
        ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver> observer
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::function<void(::webrtc::SessionDescriptionInterface const*)> callback,
        ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver> observer
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSuccess(::webrtc::SessionDescriptionInterface* desc);

    MCNAPI void $OnFailure(::webrtc::RTCError error);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
