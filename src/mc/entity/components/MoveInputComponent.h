#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40> mUnk705c07;
    ::ll::UntypedStorage<4, 40> mUnkda2abf;
    ::ll::UntypedStorage<8, 8>  mUnk8b209e;
    ::ll::UntypedStorage<4, 8>  mUnkfa4f8b;
    ::ll::UntypedStorage<4, 8>  mUnk65b877;
    ::ll::UntypedStorage<4, 8>  mUnka9d040;
    ::ll::UntypedStorage<4, 12> mUnkb2a138;
    ::ll::UntypedStorage<4, 12> mUnk301a3a;
    ::ll::UntypedStorage<4, 12> mUnk2e591f;
    ::ll::UntypedStorage<1, 1>  mUnka8b261;
    ::ll::UntypedStorage<1, 1>  mUnk5642ae;
    ::ll::UntypedStorage<1, 1>  mUnk45b91a;
    ::ll::UntypedStorage<1, 1>  mUnkfe8eb3;
    ::ll::UntypedStorage<1, 1>  mUnkdc47ce;
    ::ll::UntypedStorage<1, 1>  mUnkb9161f;
    ::ll::UntypedStorage<1, 1>  mUnkfcfe23;
    ::ll::UntypedStorage<1, 1>  mUnkc77914;
    ::ll::UntypedStorage<1, 1>  mUnk7b767d;
    ::ll::UntypedStorage<1, 1>  mUnk548127;
    ::ll::UntypedStorage<1, 1>  mUnka9ad8e;
    ::ll::UntypedStorage<1, 2>  mUnk3e7ce7;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveInputComponent(MoveInputComponent const&);
    MoveInputComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::MoveInputComponent& operator=(::MoveInputComponent&&);

    MCAPI ::MoveInputComponent& operator=(::MoveInputComponent const&);
    // NOLINTEND
};
