#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class TurnEntry; }
namespace cricket { class TurnPort; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class TurnCreatePermissionRequest : public ::cricket::StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb9e084;
    ::ll::UntypedStorage<8, 8> mUnk2488e8;
    ::ll::UntypedStorage<8, 80> mUnk20eab9;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnCreatePermissionRequest& operator=(TurnCreatePermissionRequest const&);
    TurnCreatePermissionRequest(TurnCreatePermissionRequest const&);
    TurnCreatePermissionRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TurnCreatePermissionRequest() /*override*/;

    // vIndex: 6
    virtual void OnSent() /*override*/;

    // vIndex: 2
    virtual void OnResponse(::cricket::StunMessage* response) /*override*/;

    // vIndex: 3
    virtual void OnErrorResponse(::cricket::StunMessage* response) /*override*/;

    // vIndex: 5
    virtual void OnTimeout() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TurnCreatePermissionRequest(::cricket::TurnPort* port, ::cricket::TurnEntry* entry, ::rtc::SocketAddress const& ext_addr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::TurnPort* port, ::cricket::TurnEntry* entry, ::rtc::SocketAddress const& ext_addr);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
