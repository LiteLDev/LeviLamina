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

class TurnChannelBindRequest : public ::cricket::StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk474f3c;
    ::ll::UntypedStorage<8, 8>  mUnkd4c577;
    ::ll::UntypedStorage<4, 4>  mUnkdae5bc;
    ::ll::UntypedStorage<8, 80> mUnka3c978;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnChannelBindRequest& operator=(TurnChannelBindRequest const&);
    TurnChannelBindRequest(TurnChannelBindRequest const&);
    TurnChannelBindRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TurnChannelBindRequest() /*override*/;

    virtual void OnSent() /*override*/;

    virtual void OnResponse(::cricket::StunMessage* response) /*override*/;

    virtual void OnErrorResponse(::cricket::StunMessage* response) /*override*/;

    virtual void OnTimeout() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TurnChannelBindRequest(
        ::cricket::TurnPort*        port,
        ::cricket::TurnEntry*       entry,
        int                         channel_id,
        ::rtc::SocketAddress const& ext_addr
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::cricket::TurnPort* port, ::cricket::TurnEntry* entry, int channel_id, ::rtc::SocketAddress const& ext_addr);
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

} // namespace cricket
