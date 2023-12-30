#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/StunRequest.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace cricket { class UDPPort; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunBindingRequest : public ::cricket::StunRequest {
public:
    // prevent constructor by default
    StunBindingRequest& operator=(StunBindingRequest const&);
    StunBindingRequest(StunBindingRequest const&);
    StunBindingRequest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StunBindingRequest@cricket@@UEAA@XZ
    virtual ~StunBindingRequest() = default;

    // vIndex: 1, symbol: ?OnResponse@StunBindingRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnResponse(class cricket::StunMessage*);

    // vIndex: 2, symbol: ?OnErrorResponse@StunBindingRequest@cricket@@UEAAXPEAVStunMessage@2@@Z
    virtual void OnErrorResponse(class cricket::StunMessage*);

    // vIndex: 3, symbol: ?OnTimeout@StunBindingRequest@cricket@@UEAAXXZ
    virtual void OnTimeout();

    // symbol: ??0StunBindingRequest@cricket@@QEAA@PEAVUDPPort@1@AEBVSocketAddress@rtc@@_J@Z
    MCAPI StunBindingRequest(class cricket::UDPPort*, class rtc::SocketAddress const&, int64);

    // NOLINTEND
};

}; // namespace cricket
