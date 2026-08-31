#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
namespace webrtc { class StunMessage; }
namespace webrtc { class Timestamp; }
namespace webrtc { class UDPPort; }
// clang-format on

namespace webrtc {

class StunBindingRequest : public ::webrtc::StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1e7e52;
    ::ll::UntypedStorage<8, 80> mUnkafac92;
    ::ll::UntypedStorage<8, 8>  mUnk3fffff;
    ::ll::UntypedStorage<1, 1>  mUnk13f392;
    // NOLINTEND

public:
    // prevent constructor by default
    StunBindingRequest& operator=(StunBindingRequest const&);
    StunBindingRequest(StunBindingRequest const&);
    StunBindingRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool CheckSkip() /*override*/;

    virtual void OnSkip() /*override*/;

    virtual void OnResponse(::webrtc::StunMessage* response) /*override*/;

    virtual void OnErrorResponse(::webrtc::StunMessage* response) /*override*/;

    virtual void OnTimeout() /*override*/;

    virtual ~StunBindingRequest() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StunBindingRequest(
        ::webrtc::UDPPort*             port,
        ::webrtc::SocketAddress const& addr,
        ::webrtc::Timestamp            start_time,
        bool                           is_keepalive
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::UDPPort*             port,
        ::webrtc::SocketAddress const& addr,
        ::webrtc::Timestamp            start_time,
        bool                           is_keepalive
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $CheckSkip();

    MCNAPI void $OnSkip();

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
