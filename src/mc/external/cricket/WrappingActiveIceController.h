#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceSwitchReason.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceAgentInterface; }
namespace cricket { class IceControllerFactoryInterface; }
namespace cricket { struct IceControllerFactoryArgs; }
namespace cricket::IceControllerInterface { struct PingResult; }
namespace cricket::IceControllerInterface { struct SwitchResult; }
// clang-format on

namespace cricket {

class WrappingActiveIceController {
public:
    // prevent constructor by default
    WrappingActiveIceController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void HandlePingResult(::cricket::IceControllerInterface::PingResult);

    MCNAPI void HandleSwitchResult(::cricket::IceSwitchReason, ::cricket::IceControllerInterface::SwitchResult);

    MCNAPI void MaybeStartPinging();

    MCNAPI void PruneConnections();

    MCNAPI void SelectAndPingConnection();

    MCNAPI void SortAndSwitchToBestConnection(::cricket::IceSwitchReason);

    MCNAPI void UpdateStateOnConnectionsResorted();

    MCNAPI WrappingActiveIceController(
        ::cricket::IceAgentInterface*,
        ::cricket::IceControllerFactoryInterface*,
        ::cricket::IceControllerFactoryArgs const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::cricket::IceAgentInterface*,
        ::cricket::IceControllerFactoryInterface*,
        ::cricket::IceControllerFactoryArgs const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
