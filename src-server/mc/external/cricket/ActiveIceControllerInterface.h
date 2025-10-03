#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceMode.h"
#include "mc/external/cricket/IceSwitchReason.h"
#include "mc/external/cricket/NominationMode.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Connection; }
namespace cricket { struct IceConfig; }
// clang-format on

namespace cricket {

class ActiveIceControllerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActiveIceControllerInterface() = default;

    // vIndex: 1
    virtual void SetIceConfig(::cricket::IceConfig const&) = 0;

    // vIndex: 2
    virtual void OnConnectionAdded(::cricket::Connection const*) = 0;

    // vIndex: 3
    virtual void OnConnectionSwitched(::cricket::Connection const*) = 0;

    // vIndex: 4
    virtual void OnConnectionDestroyed(::cricket::Connection const*) = 0;

    // vIndex: 5
    virtual void OnConnectionPinged(::cricket::Connection const*) = 0;

    // vIndex: 6
    virtual void OnConnectionUpdated(::cricket::Connection const*) = 0;

    // vIndex: 7
    virtual bool
    GetUseCandidateAttribute(::cricket::Connection const*, ::cricket::NominationMode, ::cricket::IceMode) const = 0;

    // vIndex: 8
    virtual void OnSortAndSwitchRequest(::cricket::IceSwitchReason) = 0;

    // vIndex: 9
    virtual void OnImmediateSortAndSwitchRequest(::cricket::IceSwitchReason) = 0;

    // vIndex: 10
    virtual bool OnImmediateSwitchRequest(::cricket::IceSwitchReason, ::cricket::Connection const*) = 0;

    // vIndex: 11
    virtual ::cricket::Connection const* FindNextPingableConnection() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
