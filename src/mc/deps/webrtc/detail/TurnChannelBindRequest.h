#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace cricket { class TurnEntry; }
namespace cricket { class TurnPort; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class TurnChannelBindRequest : public ::cricket::StunRequest {
public:
    // prevent constructor by default
    TurnChannelBindRequest& operator=(TurnChannelBindRequest const&);
    TurnChannelBindRequest(TurnChannelBindRequest const&);
    TurnChannelBindRequest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TurnChannelBindRequest@cricket@@UEAA@XZ
    virtual ~TurnChannelBindRequest();

    // vIndex: 1, symbol: ?OnResponse@TurnChannelBindRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnResponse(class cricket::StunMessage*);

    // vIndex: 2, symbol: ?OnErrorResponse@TurnChannelBindRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnErrorResponse(class cricket::StunMessage*);

    // vIndex: 3, symbol: ?OnTimeout@TurnChannelBindRequest@cricket@@UEAAXXZ
    virtual void OnTimeout();

    // vIndex: 4, symbol: ?OnSent@TurnChannelBindRequest@cricket@@UEAAXXZ
    virtual void OnSent();

    // symbol: ??0TurnChannelBindRequest@cricket@@QEAA@PEAVTurnPort@1@PEAVTurnEntry@1@HAEBVSocketAddress@rtc@@@Z
    MCAPI
    TurnChannelBindRequest(class cricket::TurnPort*, class cricket::TurnEntry*, int, class rtc::SocketAddress const&);

    // NOLINTEND
};

}; // namespace cricket
