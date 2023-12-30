#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Port; }
namespace cricket { struct CreateRelayPortArgs; }
namespace rtc { class AsyncPacketSocket; }
// clang-format on

namespace cricket {

class RelayPortFactoryInterface {
public:
    // prevent constructor by default
    RelayPortFactoryInterface& operator=(RelayPortFactoryInterface const&);
    RelayPortFactoryInterface(RelayPortFactoryInterface const&);
    RelayPortFactoryInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RelayPortFactoryInterface@cricket@@UEAA@XZ
    virtual ~RelayPortFactoryInterface() = default;

    // vIndex: 1, symbol:
    // ?Create@TurnPortFactory@cricket@@UEAA?AV?$unique_ptr@VPort@cricket@@U?$default_delete@VPort@cricket@@@std@@@std@@AEBUCreateRelayPortArgs@2@PEAVAsyncPacketSocket@rtc@@@Z
    virtual std::unique_ptr<class cricket::Port>
    Create(struct cricket::CreateRelayPortArgs const&, class rtc::AsyncPacketSocket*) = 0;

    // vIndex: 2, symbol:
    // ?Create@TurnPortFactory@cricket@@UEAA?AV?$unique_ptr@VPort@cricket@@U?$default_delete@VPort@cricket@@@std@@@std@@AEBUCreateRelayPortArgs@2@HH@Z
    virtual std::unique_ptr<class cricket::Port> Create(struct cricket::CreateRelayPortArgs const&, int, int) = 0;

    // NOLINTEND
};

}; // namespace cricket
