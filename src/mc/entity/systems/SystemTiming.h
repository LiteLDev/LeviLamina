#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/typeid_t.h"

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
    // symbol: ??1SystemTiming@@QEAA@XZ
    MCAPI ~SystemTiming();

    // NOLINTEND
};
