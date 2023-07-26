#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PressurePlatePopEvent {

public:
    // prevent constructor by default
    PressurePlatePopEvent& operator=(PressurePlatePopEvent const&) = delete;
    PressurePlatePopEvent(PressurePlatePopEvent const&)            = delete;
    PressurePlatePopEvent()                                        = delete;

public:
    /**
     * @symbol ??1PressurePlatePopEvent\@\@QEAA\@XZ
     */
    MCAPI ~PressurePlatePopEvent(); // NOLINT
};
