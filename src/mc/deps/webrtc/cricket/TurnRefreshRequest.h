#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace cricket { class TurnPort; }
// clang-format on

namespace cricket {

class TurnRefreshRequest : public ::cricket::StunRequest {
public:
    // prevent constructor by default
    TurnRefreshRequest& operator=(TurnRefreshRequest const&);
    TurnRefreshRequest(TurnRefreshRequest const&);
    TurnRefreshRequest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TurnRefreshRequest@cricket@@UEAA@XZ
    virtual ~TurnRefreshRequest() = default;

    // vIndex: 1, symbol: ?OnResponse@TurnRefreshRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnResponse(class cricket::StunMessage*);

    // vIndex: 2, symbol: ?OnErrorResponse@TurnRefreshRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnErrorResponse(class cricket::StunMessage*);

    // vIndex: 3, symbol: ?OnTimeout@TurnRefreshRequest@cricket@@UEAAXXZ
    virtual void OnTimeout();

    // vIndex: 4, symbol: ?OnSent@TurnRefreshRequest@cricket@@UEAAXXZ
    virtual void OnSent();

    // symbol: ??0TurnRefreshRequest@cricket@@QEAA@PEAVTurnPort@1@H@Z
    MCAPI TurnRefreshRequest(class cricket::TurnPort*, int);

    // NOLINTEND
};

}; // namespace cricket
