#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ActiveIceControllerInterface.h"
#include "mc/external/webrtc/IceControllerInterface.h"
#include "mc/external/webrtc/IceMode.h"
#include "mc/external/webrtc/IceSwitchReason.h"
#include "mc/external/webrtc/NominationMode.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Connection; }
namespace webrtc { class IceAgentInterface; }
namespace webrtc { class IceControllerFactoryInterface; }
namespace webrtc { struct IceConfig; }
namespace webrtc { struct IceControllerFactoryArgs; }
// clang-format on

namespace webrtc {

class WrappingActiveIceController : public ::webrtc::ActiveIceControllerInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk35383e;
    ::ll::UntypedStorage<8, 8> mUnk17eeff;
    ::ll::UntypedStorage<1, 1> mUnk99d796;
    ::ll::UntypedStorage<1, 1> mUnk384766;
    ::ll::UntypedStorage<8, 8> mUnkc6421c;
    ::ll::UntypedStorage<8, 8> mUnk91baec;
    ::ll::UntypedStorage<8, 8> mUnkd63068;
    // NOLINTEND

public:
    // prevent constructor by default
    WrappingActiveIceController& operator=(WrappingActiveIceController const&);
    WrappingActiveIceController(WrappingActiveIceController const&);
    WrappingActiveIceController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WrappingActiveIceController() /*override*/ = default;

    virtual void SetIceConfig(::webrtc::IceConfig const& config) /*override*/;

    virtual bool GetUseCandidateAttribute(
        ::webrtc::Connection const* connection,
        ::webrtc::NominationMode    mode,
        ::webrtc::IceMode           remote_ice_mode
    ) const /*override*/;

    virtual void OnConnectionAdded(::webrtc::Connection const* connection) /*override*/;

    virtual void OnConnectionPinged(::webrtc::Connection const* connection) /*override*/;

    virtual void OnConnectionUpdated(::webrtc::Connection const* connection) /*override*/;

    virtual void OnConnectionSwitched(::webrtc::Connection const* connection) /*override*/;

    virtual void OnConnectionDestroyed(::webrtc::Connection const* connection) /*override*/;

    virtual void OnSortAndSwitchRequest(::webrtc::IceSwitchReason reason) /*override*/;

    virtual void OnImmediateSortAndSwitchRequest(::webrtc::IceSwitchReason reason) /*override*/;

    virtual bool
    OnImmediateSwitchRequest(::webrtc::IceSwitchReason reason, ::webrtc::Connection const* selected) /*override*/;

    virtual ::webrtc::Connection const* FindNextPingableConnection() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void HandleSwitchResult(
        ::webrtc::IceSwitchReason                      reason_for_switch,
        ::webrtc::IceControllerInterface::SwitchResult result
    );

    MCNAPI void SelectAndPingConnection();

    MCNAPI void SortAndSwitchToBestConnection(::webrtc::IceSwitchReason reason);

    MCNAPI void UpdateStateOnConnectionsResorted();

    MCNAPI WrappingActiveIceController(
        ::webrtc::IceAgentInterface*              ice_agent,
        ::webrtc::IceControllerFactoryInterface*  wrapped_factory,
        ::webrtc::IceControllerFactoryArgs const& wrapped_factory_args
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::IceAgentInterface*              ice_agent,
        ::webrtc::IceControllerFactoryInterface*  wrapped_factory,
        ::webrtc::IceControllerFactoryArgs const& wrapped_factory_args
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetIceConfig(::webrtc::IceConfig const& config);

    MCNAPI bool $GetUseCandidateAttribute(
        ::webrtc::Connection const* connection,
        ::webrtc::NominationMode    mode,
        ::webrtc::IceMode           remote_ice_mode
    ) const;

    MCNAPI void $OnConnectionAdded(::webrtc::Connection const* connection);

    MCNAPI void $OnConnectionPinged(::webrtc::Connection const* connection);

    MCNAPI void $OnConnectionUpdated(::webrtc::Connection const* connection);

    MCNAPI void $OnConnectionSwitched(::webrtc::Connection const* connection);

    MCNAPI void $OnConnectionDestroyed(::webrtc::Connection const* connection);

    MCNAPI void $OnSortAndSwitchRequest(::webrtc::IceSwitchReason reason);

    MCNAPI void $OnImmediateSortAndSwitchRequest(::webrtc::IceSwitchReason reason);

    MCNAPI bool $OnImmediateSwitchRequest(::webrtc::IceSwitchReason reason, ::webrtc::Connection const* selected);

    MCNAPI ::webrtc::Connection const* $FindNextPingableConnection();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
