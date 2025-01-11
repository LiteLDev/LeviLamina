#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiagnosticsEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 44> mUnk8e5f37;
    ::ll::UntypedStorage<8, 32> mUnkbd68b4;
    // NOLINTEND

public:
    // prevent constructor by default
    DiagnosticsEvent& operator=(DiagnosticsEvent const&);
    DiagnosticsEvent(DiagnosticsEvent const&);
    DiagnosticsEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DiagnosticsEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
