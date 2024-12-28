#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpinAttackResultsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf87294;
    // NOLINTEND

public:
    // prevent constructor by default
    SpinAttackResultsComponent& operator=(SpinAttackResultsComponent const&);
    SpinAttackResultsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpinAttackResultsComponent(::SpinAttackResultsComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SpinAttackResultsComponent const&);
    // NOLINTEND
};
