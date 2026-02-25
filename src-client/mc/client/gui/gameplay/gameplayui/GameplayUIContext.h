#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/gameplayui/GameplayUIDebugData.h"
#include "mc/client/gui/gameplay/gameplayui/GameplayUIRouteHandler.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { class ContainerAPI; }
// clang-format on

namespace GameplayUI {

struct GameplayUIContext : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::GameplayUI::GameplayUIRouteHandler>         routing;
    ::ll::TypedStorage<8, 24, ::GameplayUI::GameplayUIDebugData>            debug;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameplayUI::ContainerAPI>> containerAPI;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameplayUIContext() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace GameplayUI
