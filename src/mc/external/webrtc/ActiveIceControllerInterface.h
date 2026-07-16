#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceMode.h"
#include "mc/external/webrtc/IceSwitchReason.h"
#include "mc/external/webrtc/NominationMode.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Connection; }
namespace webrtc { struct IceConfig; }
// clang-format on

namespace webrtc {

class ActiveIceControllerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveIceControllerInterface() = default;

    virtual void SetIceConfig(::webrtc::IceConfig const& config) = 0;

    virtual void OnConnectionAdded(::webrtc::Connection const* connection) = 0;

    virtual void OnConnectionSwitched(::webrtc::Connection const* connection) = 0;

    virtual void OnConnectionDestroyed(::webrtc::Connection const* connection) = 0;

    virtual void OnConnectionPinged(::webrtc::Connection const* connection) = 0;

    virtual void OnConnectionUpdated(::webrtc::Connection const* connection) = 0;

    virtual bool GetUseCandidateAttribute(
        ::webrtc::Connection const* connection,
        ::webrtc::NominationMode    mode,
        ::webrtc::IceMode           remote_ice_mode
    ) const = 0;

    virtual void OnSortAndSwitchRequest(::webrtc::IceSwitchReason reason) = 0;

    virtual void OnImmediateSortAndSwitchRequest(::webrtc::IceSwitchReason reason) = 0;

    virtual bool OnImmediateSwitchRequest(::webrtc::IceSwitchReason reason, ::webrtc::Connection const* selected) = 0;

    virtual ::webrtc::Connection const* FindNextPingableConnection() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
