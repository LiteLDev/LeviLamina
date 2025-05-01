#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CameraPresets;
// clang-format on

struct ServerCameraStatesComponent {
public:
    // ServerCameraStatesComponent inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // ServerCameraStatesComponent inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk47f807;
        ::ll::UntypedStorage<4, 12> mUnkbf490f;
        ::ll::UntypedStorage<1, 1>  mUnka644d9;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                       mActiveCameraPreset;
    ::ll::TypedStorage<8, 24, ::std::vector<::ServerCameraStatesComponent::State>> mStates;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCameraStatesComponent& operator=(ServerCameraStatesComponent const&);
    ServerCameraStatesComponent(ServerCameraStatesComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerCameraStatesComponent(::CameraPresets const& presets);

    MCNAPI ::ServerCameraStatesComponent& operator=(::ServerCameraStatesComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraPresets const& presets);
    // NOLINTEND
};
