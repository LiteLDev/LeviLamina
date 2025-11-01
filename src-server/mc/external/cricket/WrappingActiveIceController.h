#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ActiveIceControllerInterface.h"
#include "mc/external/cricket/IceControllerInterface.h"
#include "mc/external/cricket/IceMode.h"
#include "mc/external/cricket/IceSwitchReason.h"
#include "mc/external/cricket/NominationMode.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Connection; }
namespace cricket { class IceAgentInterface; }
namespace cricket { class IceControllerFactoryInterface; }
namespace cricket { struct IceConfig; }
namespace cricket { struct IceControllerFactoryArgs; }
// clang-format on

namespace cricket {

class WrappingActiveIceController : public ::cricket::ActiveIceControllerInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9aae14;
    ::ll::UntypedStorage<8, 8> mUnk46e074;
    ::ll::UntypedStorage<1, 1> mUnka76a4b;
    ::ll::UntypedStorage<1, 1> mUnk2c0b55;
    ::ll::UntypedStorage<8, 8> mUnk2e3f8e;
    ::ll::UntypedStorage<8, 8> mUnk8d7c5c;
    ::ll::UntypedStorage<8, 8> mUnk2cf1d3;
    // NOLINTEND

public:
    // prevent constructor by default
    WrappingActiveIceController& operator=(WrappingActiveIceController const&);
    WrappingActiveIceController(WrappingActiveIceController const&);
    WrappingActiveIceController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WrappingActiveIceController() /*override*/;

    // vIndex: 1
    virtual void SetIceConfig(::cricket::IceConfig const& config) /*override*/;

    // vIndex: 7
    virtual bool GetUseCandidateAttribute(::cricket::Connection const* connection, ::cricket::NominationMode mode, ::cricket::IceMode remote_ice_mode) const /*override*/;

    // vIndex: 2
    virtual void OnConnectionAdded(::cricket::Connection const* connection) /*override*/;

    // vIndex: 5
    virtual void OnConnectionPinged(::cricket::Connection const* connection) /*override*/;

    // vIndex: 6
    virtual void OnConnectionUpdated(::cricket::Connection const* connection) /*override*/;

    // vIndex: 3
    virtual void OnConnectionSwitched(::cricket::Connection const* connection) /*override*/;

    // vIndex: 4
    virtual void OnConnectionDestroyed(::cricket::Connection const* connection) /*override*/;

    // vIndex: 8
    virtual void OnSortAndSwitchRequest(::cricket::IceSwitchReason reason) /*override*/;

    // vIndex: 9
    virtual void OnImmediateSortAndSwitchRequest(::cricket::IceSwitchReason reason) /*override*/;

    // vIndex: 10
    virtual bool OnImmediateSwitchRequest(::cricket::IceSwitchReason reason, ::cricket::Connection const* selected) /*override*/;

    // vIndex: 11
    virtual ::cricket::Connection const* FindNextPingableConnection() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void HandlePingResult(::cricket::IceControllerInterface::PingResult result);

    MCNAPI void HandleSwitchResult(::cricket::IceSwitchReason reason_for_switch, ::cricket::IceControllerInterface::SwitchResult result);

    MCNAPI void MaybeStartPinging();

    MCNAPI void PruneConnections();

    MCNAPI void SelectAndPingConnection();

    MCNAPI void SortAndSwitchToBestConnection(::cricket::IceSwitchReason reason);

    MCNAPI void UpdateStateOnConnectionsResorted();

    MCNAPI WrappingActiveIceController(::cricket::IceAgentInterface* ice_agent, ::cricket::IceControllerFactoryInterface* wrapped_factory, ::cricket::IceControllerFactoryArgs const& wrapped_factory_args);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::IceAgentInterface* ice_agent, ::cricket::IceControllerFactoryInterface* wrapped_factory, ::cricket::IceControllerFactoryArgs const& wrapped_factory_args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetIceConfig(::cricket::IceConfig const& config);

    MCNAPI bool $GetUseCandidateAttribute(::cricket::Connection const* connection, ::cricket::NominationMode mode, ::cricket::IceMode remote_ice_mode) const;

    MCNAPI void $OnConnectionAdded(::cricket::Connection const* connection);

    MCNAPI void $OnConnectionPinged(::cricket::Connection const* connection);

    MCNAPI void $OnConnectionUpdated(::cricket::Connection const* connection);

    MCNAPI void $OnConnectionSwitched(::cricket::Connection const* connection);

    MCNAPI void $OnConnectionDestroyed(::cricket::Connection const* connection);

    MCNAPI void $OnSortAndSwitchRequest(::cricket::IceSwitchReason reason);

    MCNAPI void $OnImmediateSortAndSwitchRequest(::cricket::IceSwitchReason reason);

    MCNAPI bool $OnImmediateSwitchRequest(::cricket::IceSwitchReason reason, ::cricket::Connection const* selected);

    MCNAPI ::cricket::Connection const* $FindNextPingableConnection();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
