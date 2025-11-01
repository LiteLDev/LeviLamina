#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class TurnPort; }
// clang-format on

namespace cricket {

class TurnAllocateRequest : public ::cricket::StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2cf2c2;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnAllocateRequest& operator=(TurnAllocateRequest const&);
    TurnAllocateRequest(TurnAllocateRequest const&);
    TurnAllocateRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void OnSent() /*override*/;

    // vIndex: 2
    virtual void OnResponse(::cricket::StunMessage* response) /*override*/;

    // vIndex: 3
    virtual void OnErrorResponse(::cricket::StunMessage* response) /*override*/;

    // vIndex: 5
    virtual void OnTimeout() /*override*/;

    // vIndex: 0
    virtual ~TurnAllocateRequest() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnAuthChallenge(::cricket::StunMessage* response, int code);

    MCNAPI void OnTryAlternate(::cricket::StunMessage* response, int code);

    MCNAPI explicit TurnAllocateRequest(::cricket::TurnPort* port);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::TurnPort* port);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnSent();

    MCNAPI void $OnResponse(::cricket::StunMessage* response);

    MCNAPI void $OnErrorResponse(::cricket::StunMessage* response);

    MCNAPI void $OnTimeout();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
