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

class TurnRefreshRequest : public ::cricket::StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb3a492;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnRefreshRequest& operator=(TurnRefreshRequest const&);
    TurnRefreshRequest(TurnRefreshRequest const&);
    TurnRefreshRequest();

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
    virtual ~TurnRefreshRequest() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TurnRefreshRequest(::cricket::TurnPort* port, int lifetime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::TurnPort* port, int lifetime);
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
