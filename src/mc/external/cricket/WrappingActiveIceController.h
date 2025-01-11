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
    // member functions
    // NOLINTBEGIN
    MCAPI void HandlePingResult(::cricket::IceControllerInterface::PingResult);

    MCAPI void HandleSwitchResult(::cricket::IceSwitchReason, ::cricket::IceControllerInterface::SwitchResult);

    MCAPI void MaybeStartPinging();

    MCAPI void PruneConnections();

    MCAPI void SelectAndPingConnection();

    MCAPI void SortAndSwitchToBestConnection(::cricket::IceSwitchReason);

    MCAPI void UpdateStateOnConnectionsResorted();

    MCAPI
    WrappingActiveIceController(::cricket::IceAgentInterface*, ::cricket::IceControllerFactoryInterface*, ::cricket::IceControllerFactoryArgs const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::cricket::IceAgentInterface*, ::cricket::IceControllerFactoryInterface*, ::cricket::IceControllerFactoryArgs const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
