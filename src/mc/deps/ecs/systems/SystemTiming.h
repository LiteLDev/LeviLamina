#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/typeid_t.h"

struct SystemTiming {
public:
    std::string                              mSystemName;
    int                                      mEntityCount;
    float                                    mTimeMs;
    Bedrock::typeid_t<struct SystemCategory> mCategory;

    // prevent constructor by default
    SystemTiming& operator=(SystemTiming const&);
    SystemTiming(SystemTiming const&);
    SystemTiming();

public:
    // NOLINTBEGIN
    MCAPI ~SystemTiming();

    // NOLINTEND
};
