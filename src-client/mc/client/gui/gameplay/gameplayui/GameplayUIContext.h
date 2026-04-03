#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/gameplayui/GameplayUIDebugData.h"
#include "mc/client/gui/gameplay/gameplayui/GameplayUIRouteHandler.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace GameplayUI { class ContainerAPI; }
namespace GameplayUI { class DataDrivenScreenAPI; }
// clang-format on

namespace GameplayUI {

struct GameplayUIContext : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::GameplayUI::GameplayUIRouteHandler>                routing;
    ::ll::TypedStorage<8, 24, ::GameplayUI::GameplayUIDebugData>                   debug;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameplayUI::ContainerAPI>>        containerAPI;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameplayUI::DataDrivenScreenAPI>> dataDrivenScreenAPI;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameplayUIContext() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initializeAPI(::IClientInstance& client);
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
