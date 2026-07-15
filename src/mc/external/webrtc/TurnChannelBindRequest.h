#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
namespace webrtc { class StunMessage; }
namespace webrtc { class TurnEntry; }
namespace webrtc { class TurnPort; }
// clang-format on

namespace webrtc {

class TurnChannelBindRequest : public ::webrtc::StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc9921e;
    ::ll::UntypedStorage<8, 8>  mUnk6941be;
    ::ll::UntypedStorage<2, 2>  mUnk43a0b4;
    ::ll::UntypedStorage<8, 80> mUnk64eeb7;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnChannelBindRequest& operator=(TurnChannelBindRequest const&);
    TurnChannelBindRequest(TurnChannelBindRequest const&);
    TurnChannelBindRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TurnChannelBindRequest() /*override*/ = default;

    virtual void OnSent() /*override*/;

    virtual void OnResponse(::webrtc::StunMessage* response) /*override*/;

    virtual void OnErrorResponse(::webrtc::StunMessage* response) /*override*/;

    virtual void OnTimeout() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TurnChannelBindRequest(
        ::webrtc::TurnPort*            port,
        ::webrtc::TurnEntry*           entry,
        ushort                         channel_id,
        ::webrtc::SocketAddress const& ext_addr
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::TurnPort*            port,
        ::webrtc::TurnEntry*           entry,
        ushort                         channel_id,
        ::webrtc::SocketAddress const& ext_addr
    );
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
