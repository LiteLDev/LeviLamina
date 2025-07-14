#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceRole.h"
#include "mc/external/cricket/IceSwitchReason.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Connection; }
// clang-format on

namespace cricket {

class IceAgentInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceAgentInterface() = default;

    // vIndex: 1
    virtual int64 GetLastPingSentMs() const = 0;

    // vIndex: 2
    virtual ::cricket::IceRole GetIceRole() const = 0;

    // vIndex: 3
    virtual void OnStartedPinging() = 0;

    // vIndex: 4
    virtual void UpdateConnectionStates() = 0;

    // vIndex: 5
    virtual void UpdateState() = 0;

    // vIndex: 6
    virtual void ForgetLearnedStateForConnections(::rtc::ArrayView<::cricket::Connection const* const>) = 0;

    // vIndex: 7
    virtual void SendPingRequest(::cricket::Connection const*) = 0;

    // vIndex: 8
    virtual void SwitchSelectedConnection(::cricket::Connection const*, ::cricket::IceSwitchReason) = 0;

    // vIndex: 9
    virtual bool PruneConnections(::rtc::ArrayView<::cricket::Connection const* const>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
