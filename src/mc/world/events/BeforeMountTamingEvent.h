#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct BeforeMountTamingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&> mPassenger;
    ::ll::TypedStorage<8, 8, ::Actor&> mMount;
    // NOLINTEND

public:
    // prevent constructor by default
    BeforeMountTamingEvent& operator=(BeforeMountTamingEvent const&);
    BeforeMountTamingEvent(BeforeMountTamingEvent const&);
    BeforeMountTamingEvent();
};
