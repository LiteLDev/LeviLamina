#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace cricket { class TurnEntry; }
namespace cricket { class TurnPort; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class TurnCreatePermissionRequest : public ::cricket::StunRequest {
public:
    // prevent constructor by default
    TurnCreatePermissionRequest& operator=(TurnCreatePermissionRequest const&);
    TurnCreatePermissionRequest(TurnCreatePermissionRequest const&);
    TurnCreatePermissionRequest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TurnCreatePermissionRequest@cricket@@UEAA@XZ
    virtual ~TurnCreatePermissionRequest();

    // vIndex: 1, symbol: ?OnResponse@TurnCreatePermissionRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnResponse(class cricket::StunMessage*);

    // vIndex: 2, symbol: ?OnErrorResponse@TurnCreatePermissionRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnErrorResponse(class cricket::StunMessage*);

    // vIndex: 3, symbol: ?OnTimeout@TurnCreatePermissionRequest@cricket@@UEAAXXZ
    virtual void OnTimeout();

    // vIndex: 4, symbol: ?OnSent@TurnCreatePermissionRequest@cricket@@UEAAXXZ
    virtual void OnSent();

    // symbol: ??0TurnCreatePermissionRequest@cricket@@QEAA@PEAVTurnPort@1@PEAVTurnEntry@1@AEBVSocketAddress@rtc@@@Z
    MCAPI
    TurnCreatePermissionRequest(class cricket::TurnPort*, class cricket::TurnEntry*, class rtc::SocketAddress const&);

    // NOLINTEND
};

}; // namespace cricket
