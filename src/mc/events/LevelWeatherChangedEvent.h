#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelWeatherChangedEvent {
public:
    // prevent constructor by default
    LevelWeatherChangedEvent& operator=(LevelWeatherChangedEvent const&);
    LevelWeatherChangedEvent(LevelWeatherChangedEvent const&);
    LevelWeatherChangedEvent();
};
