#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimelineManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk59dfbf;
    // NOLINTEND

public:
    // prevent constructor by default
    TimelineManager& operator=(TimelineManager const&);
    TimelineManager(TimelineManager const&);
    TimelineManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TimelineManager() = default;

    virtual void tick() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
