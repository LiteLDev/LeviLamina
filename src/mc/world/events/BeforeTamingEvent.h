#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct BeforeTamingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&> mActor;
    ::ll::TypedStorage<8, 8, ::Actor&> mTamingActor;
    // NOLINTEND

public:
    // prevent constructor by default
    BeforeTamingEvent& operator=(BeforeTamingEvent const&);
    BeforeTamingEvent(BeforeTamingEvent const&);
    BeforeTamingEvent();
};
