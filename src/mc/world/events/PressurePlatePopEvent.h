#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PressurePlatePopEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf0ce7c;
    ::ll::UntypedStorage<4, 12> mUnk4bd96c;
    ::ll::UntypedStorage<4, 4>  mUnk38a7a7;
    ::ll::UntypedStorage<4, 4>  mUnk73834c;
    // NOLINTEND

public:
    // prevent constructor by default
    PressurePlatePopEvent& operator=(PressurePlatePopEvent const&);
    PressurePlatePopEvent(PressurePlatePopEvent const&);
    PressurePlatePopEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PressurePlatePopEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
