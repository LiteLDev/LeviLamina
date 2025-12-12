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
    virtual ~IceAgentInterface() = default;

    virtual int64 GetLastPingSentMs() const = 0;

    virtual ::cricket::IceRole GetIceRole() const = 0;

    virtual void OnStartedPinging() = 0;

    virtual void UpdateConnectionStates() = 0;

    virtual void UpdateState() = 0;

    virtual void ForgetLearnedStateForConnections(::rtc::ArrayView<::cricket::Connection const* const>) = 0;

    virtual void SendPingRequest(::cricket::Connection const*) = 0;

    virtual void SwitchSelectedConnection(::cricket::Connection const*, ::cricket::IceSwitchReason) = 0;

    virtual bool PruneConnections(::rtc::ArrayView<::cricket::Connection const* const>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
