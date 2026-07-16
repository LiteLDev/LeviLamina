#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/IceRole.h"
#include "mc/external/webrtc/IceSwitchReason.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Connection; }
// clang-format on

namespace webrtc {

class IceAgentInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IceAgentInterface() = default;

    virtual int64 GetLastPingSentMs() const = 0;

    virtual ::webrtc::IceRole GetIceRole() const = 0;

    virtual void OnStartedPinging() = 0;

    virtual void UpdateConnectionStates() = 0;

    virtual void UpdateState() = 0;

    virtual void ForgetLearnedStateForConnections(
        ::webrtc::ArrayView<::webrtc::Connection const* const, 18446744073709546905> connections
    ) = 0;

    virtual void SendPingRequest(::webrtc::Connection const* connection) = 0;

    virtual void
    SwitchSelectedConnection(::webrtc::Connection const* new_connection, ::webrtc::IceSwitchReason reason) = 0;

    virtual bool
    PruneConnections(::webrtc::ArrayView<::webrtc::Connection const* const, 18446744073709546905> connections) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
