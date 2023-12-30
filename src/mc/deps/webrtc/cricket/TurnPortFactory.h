#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/RelayPortFactoryInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Port; }
namespace cricket { class RelayPortFactoryInterface; }
namespace cricket { struct CreateRelayPortArgs; }
namespace rtc { class AsyncPacketSocket; }
// clang-format on

namespace cricket {

class TurnPortFactory : public ::cricket::RelayPortFactoryInterface {
public:
    // prevent constructor by default
    TurnPortFactory& operator=(TurnPortFactory const&);
    TurnPortFactory(TurnPortFactory const&);
    TurnPortFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TurnPortFactory@cricket@@UEAA@XZ
    virtual ~TurnPortFactory();

    // vIndex: 1, symbol:
    // ?Create@TurnPortFactory@cricket@@UEAA?AV?$unique_ptr@VPort@cricket@@U?$default_delete@VPort@cricket@@@std@@@std@@AEBUCreateRelayPortArgs@2@PEAVAsyncPacketSocket@rtc@@@Z
    virtual std::unique_ptr<class cricket::Port>
    Create(struct cricket::CreateRelayPortArgs const&, class rtc::AsyncPacketSocket*);

    // vIndex: 2, symbol:
    // ?Create@TurnPortFactory@cricket@@UEAA?AV?$unique_ptr@VPort@cricket@@U?$default_delete@VPort@cricket@@@std@@@std@@AEBUCreateRelayPortArgs@2@HH@Z
    virtual std::unique_ptr<class cricket::Port> Create(struct cricket::CreateRelayPortArgs const&, int, int);

    // NOLINTEND
};

}; // namespace cricket
