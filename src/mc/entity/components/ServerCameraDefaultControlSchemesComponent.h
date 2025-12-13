#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/controlscheme/Scheme.h"

struct ServerCameraDefaultControlSchemesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string_view, ::ControlScheme::Scheme>> mDefaultSchemes;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCameraDefaultControlSchemesComponent& operator=(ServerCameraDefaultControlSchemesComponent const&);
    ServerCameraDefaultControlSchemesComponent(ServerCameraDefaultControlSchemesComponent const&);
    ServerCameraDefaultControlSchemesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerCameraDefaultControlSchemesComponent(::ServerCameraDefaultControlSchemesComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerCameraDefaultControlSchemesComponent&&);
    // NOLINTEND
};
