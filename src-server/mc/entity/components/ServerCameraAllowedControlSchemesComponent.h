#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/controlscheme/Scheme.h"

struct ServerCameraAllowedControlSchemesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string_view, ::std::vector<::ControlScheme::Scheme>>> mAllowedSchemes;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCameraAllowedControlSchemesComponent& operator=(ServerCameraAllowedControlSchemesComponent const&);
    ServerCameraAllowedControlSchemesComponent(ServerCameraAllowedControlSchemesComponent const&);
    ServerCameraAllowedControlSchemesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerCameraAllowedControlSchemesComponent(::ServerCameraAllowedControlSchemesComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerCameraAllowedControlSchemesComponent&&);
    // NOLINTEND

};
