#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct EventManagerArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6b6671;
    ::ll::UntypedStorage<8, 8> mUnk936d21;
    // NOLINTEND

public:
    // prevent constructor by default
    EventManagerArguments& operator=(EventManagerArguments const&);
    EventManagerArguments(EventManagerArguments const&);
    EventManagerArguments();
};

} // namespace Social::Events
