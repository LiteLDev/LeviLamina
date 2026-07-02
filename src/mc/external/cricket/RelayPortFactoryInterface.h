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
    virtual ~RelayPortFactoryInterface() = default;

    virtual ::std::unique_ptr<::cricket::Port>
    Create(::cricket::CreateRelayPortArgs const& args, ::std::shared_ptr<::rtc::AsyncPacketSocket> udp_socket) = 0;

    virtual ::std::unique_ptr<::cricket::Port>
    Create(::cricket::CreateRelayPortArgs const& args, int min_port, int max_port) = 0;
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

} // namespace cricket
