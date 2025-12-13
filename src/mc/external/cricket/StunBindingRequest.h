#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class UDPPort; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunBindingRequest : public ::cricket::StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkdaece5;
    ::ll::UntypedStorage<8, 80> mUnk1032d6;
    ::ll::UntypedStorage<8, 8>  mUnk9e9b88;
    ::ll::UntypedStorage<1, 1>  mUnk3bbf8f;
    // NOLINTEND

public:
    // prevent constructor by default
    StunBindingRequest& operator=(StunBindingRequest const&);
    StunBindingRequest(StunBindingRequest const&);
    StunBindingRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool CheckSkip() /*override*/;

    // vIndex: 4
    virtual void OnSkip() /*override*/;

    // vIndex: 2
    virtual void OnResponse(::cricket::StunMessage* response) /*override*/;

    // vIndex: 3
    virtual void OnErrorResponse(::cricket::StunMessage* response) /*override*/;

    // vIndex: 5
    virtual void OnTimeout() /*override*/;

    // vIndex: 0
    virtual ~StunBindingRequest() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    StunBindingRequest(::cricket::UDPPort* port, ::rtc::SocketAddress const& addr, int64 start_time, bool is_keepalive);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::UDPPort* port, ::rtc::SocketAddress const& addr, int64 start_time, bool is_keepalive);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $CheckSkip();

    MCNAPI void $OnSkip();

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
