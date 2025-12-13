#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class SdpStateProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SdpStateProvider();

    virtual ::webrtc::PeerConnectionInterface::SignalingState signaling_state() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* local_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* remote_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* current_local_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* current_remote_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* pending_local_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* pending_remote_description() const = 0;

    virtual bool NeedsIceRestart(::std::string const&) const = 0;

    virtual bool IceRestartPending(::std::string const&) const = 0;

    virtual ::std::optional<::rtc::SSLRole> GetDtlsRole(::std::string const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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

} // namespace webrtc
