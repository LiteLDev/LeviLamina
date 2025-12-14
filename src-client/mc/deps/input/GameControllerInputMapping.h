#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct GameControllerButtonBinding;
struct GameControllerStickBinding;
struct GameControllerStickDirectionToButtonBinding;
struct GameControllerStickToButtonBinding;
struct GameControllerTriggerBinding;
// clang-format on

struct GameControllerInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerButtonBinding>>        buttonBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerStickBinding>>         stickBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerTriggerBinding>>       triggerBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerStickToButtonBinding>> stickToButtonBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerStickDirectionToButtonBinding>>
                                  stickDirectionToButtonBindings;
    ::ll::TypedStorage<4, 4, int> turnStickId;
    // NOLINTEND

public:
    // prevent constructor by default
    GameControllerInputMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameControllerInputMapping(::GameControllerInputMapping const&);

    MCAPI ::GameControllerInputMapping& operator=(::GameControllerInputMapping const&);

    MCAPI ~GameControllerInputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameControllerInputMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
