#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IRoutePrerequisiteHandler.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisiteState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftGame;
// clang-format on

namespace OreUI {

class RoutePrerequisiteHandler : public ::OreUI::IRoutePrerequisiteHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                 mMinecraftGame;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    RoutePrerequisiteHandler& operator=(RoutePrerequisiteHandler const&);
    RoutePrerequisiteHandler(RoutePrerequisiteHandler const&);
    RoutePrerequisiteHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RoutePrerequisiteHandler() /*override*/ = default;

    virtual ::OreUI::RoutePrerequisiteState
    handleRoutePrerequisites(::OreUI::RoutePrerequisite prerequisite, ::std::string const& newRoute) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OreUI::RoutePrerequisiteState _handleXboxLivePrerequisites(::std::string const& newRoute) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OreUI::RoutePrerequisiteState
    $handleRoutePrerequisites(::OreUI::RoutePrerequisite prerequisite, ::std::string const& newRoute);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
