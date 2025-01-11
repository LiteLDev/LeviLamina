#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendPacketsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3d19ac;
    // NOLINTEND

public:
    // prevent constructor by default
    SendPacketsComponent& operator=(SendPacketsComponent const&);
    SendPacketsComponent(SendPacketsComponent const&);
    SendPacketsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SendPacketsComponent& operator=(::SendPacketsComponent&&);
    // NOLINTEND
};
