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

class TurnAllocateRequest : public ::cricket::StunRequest {
public:
    // prevent constructor by default
    TurnAllocateRequest& operator=(TurnAllocateRequest const&);
    TurnAllocateRequest(TurnAllocateRequest const&);
    TurnAllocateRequest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TurnAllocateRequest@cricket@@UEAA@XZ
    virtual ~TurnAllocateRequest() = default;

    // vIndex: 1, symbol: ?OnResponse@TurnAllocateRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnResponse(class cricket::StunMessage*);

    // vIndex: 2, symbol: ?OnErrorResponse@TurnAllocateRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnErrorResponse(class cricket::StunMessage*);

    // vIndex: 3, symbol: ?OnTimeout@TurnAllocateRequest@cricket@@UEAAXXZ
    virtual void OnTimeout();

    // vIndex: 4, symbol: ?OnSent@TurnAllocateRequest@cricket@@UEAAXXZ
    virtual void OnSent();

    // symbol: ??0TurnAllocateRequest@cricket@@QEAA@PEAVTurnPort@1@@Z
    MCAPI explicit TurnAllocateRequest(class cricket::TurnPort*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnAuthChallenge@TurnAllocateRequest@cricket@@AEAAXPEAVStunMessage@2@H@Z
    MCAPI void OnAuthChallenge(class cricket::StunMessage*, int);

    // symbol: ?OnTryAlternate@TurnAllocateRequest@cricket@@AEAAXPEAVStunMessage@2@H@Z
    MCAPI void OnTryAlternate(class cricket::StunMessage*, int);

    // NOLINTEND
};

}; // namespace cricket
