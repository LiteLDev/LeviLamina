#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HistoricalFrameTimes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk72f49d;
    ::ll::UntypedStorage<4, 120> mUnkbc305f;
    ::ll::UntypedStorage<4, 120> mUnka191e5;
    ::ll::UntypedStorage<4, 120> mUnk67054e;
    ::ll::UntypedStorage<4, 120> mUnk7c71e8;
    // NOLINTEND

public:
    // prevent constructor by default
    HistoricalFrameTimes& operator=(HistoricalFrameTimes const&);
    HistoricalFrameTimes(HistoricalFrameTimes const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C HistoricalFrameTimes();

    MCNAPI_C void setCurrentFrameTime(float frameTime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND
};
