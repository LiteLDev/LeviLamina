#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MessageEvent {
public:
    // prevent constructor by default
    MessageEvent& operator=(MessageEvent const&);
    MessageEvent(MessageEvent const&);
    MessageEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1MessageEvent@@QEAA@XZ
    MCAPI ~MessageEvent();

    // NOLINTEND
};
