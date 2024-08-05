#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PressurePlatePopEvent {
public:
    // prevent constructor by default
    PressurePlatePopEvent& operator=(PressurePlatePopEvent const&);
    PressurePlatePopEvent(PressurePlatePopEvent const&);
    PressurePlatePopEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PressurePlatePopEvent();

    // NOLINTEND
};
