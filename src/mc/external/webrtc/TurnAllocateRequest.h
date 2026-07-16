#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StunMessage; }
namespace webrtc { class TurnPort; }
// clang-format on

namespace webrtc {

class TurnAllocateRequest : public ::webrtc::StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6aa033;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnAllocateRequest& operator=(TurnAllocateRequest const&);
    TurnAllocateRequest(TurnAllocateRequest const&);
    TurnAllocateRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnSent() /*override*/;

    virtual void OnResponse(::webrtc::StunMessage* response) /*override*/;

    virtual void OnErrorResponse(::webrtc::StunMessage* response) /*override*/;

    virtual void OnTimeout() /*override*/;

    virtual ~TurnAllocateRequest() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnAuthChallenge(::webrtc::StunMessage* response, int code);

    MCNAPI void OnTryAlternate(::webrtc::StunMessage* response, int code);

    MCNAPI explicit TurnAllocateRequest(::webrtc::TurnPort* port);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TurnPort* port);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSent();

    MCNAPI void $OnResponse(::webrtc::StunMessage* response);

    MCNAPI void $OnErrorResponse(::webrtc::StunMessage* response);

    MCNAPI void $OnTimeout();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
