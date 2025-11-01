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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RelayPortFactoryInterface() = default;

    // vIndex: 2
    virtual ::std::unique_ptr<::cricket::Port> Create(::cricket::CreateRelayPortArgs const&, ::std::shared_ptr<::rtc::AsyncPacketSocket>) = 0;

    // vIndex: 1
    virtual ::std::unique_ptr<::cricket::Port> Create(::cricket::CreateRelayPortArgs const&, int, int) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
