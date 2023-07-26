#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChatEvent {

public:
    // prevent constructor by default
    ChatEvent& operator=(ChatEvent const&) = delete;
    ChatEvent()                            = delete;

public:
    /**
     * @symbol ??0ChatEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ChatEvent(struct ChatEvent const&); // NOLINT
    /**
     * @symbol ??1ChatEvent\@\@QEAA\@XZ
     */
    MCAPI ~ChatEvent(); // NOLINT
};
