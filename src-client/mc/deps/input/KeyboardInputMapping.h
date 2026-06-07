#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct KeyboardKeyBinding;
// clang-format on

struct KeyboardInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::KeyboardKeyBinding>>                            keyBindings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unordered_set<int>>> actionToKeyMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~KeyboardInputMapping();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
