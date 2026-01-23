#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
// clang-format on

namespace cricket {

class TurnCreatePermissionRequest : public ::cricket::StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb9e084;
    ::ll::UntypedStorage<8, 8>  mUnk2488e8;
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
    virtual ~TurnCreatePermissionRequest() /*override*/ = default;

    virtual void OnSent() /*override*/;

    virtual void OnResponse(::cricket::StunMessage* response) /*override*/;

    virtual void OnErrorResponse(::cricket::StunMessage* response) /*override*/;

    virtual void OnTimeout() /*override*/;
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

} // namespace cricket
