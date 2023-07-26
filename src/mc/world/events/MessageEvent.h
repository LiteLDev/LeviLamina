#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MessageEvent {

public:
    // prevent constructor by default
    MessageEvent& operator=(MessageEvent const&) = delete;
    MessageEvent(MessageEvent const&)            = delete;
    MessageEvent()                               = delete;

public:
    /**
     * @symbol ??1MessageEvent\@\@QEAA\@XZ
     */
    MCAPI ~MessageEvent(); // NOLINT
};
