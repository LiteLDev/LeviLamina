#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelWeatherChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk29a55e;
    ::ll::UntypedStorage<1, 1> mUnkd0e4fe;
    ::ll::UntypedStorage<1, 1> mUnk6699fb;
    ::ll::UntypedStorage<1, 1> mUnkde9606;
    ::ll::UntypedStorage<4, 4> mUnk5b2b35;
    ::ll::UntypedStorage<4, 4> mUnkc9bdde;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelWeatherChangedEvent& operator=(LevelWeatherChangedEvent const&);
    LevelWeatherChangedEvent(LevelWeatherChangedEvent const&);
    LevelWeatherChangedEvent();
};
