/**
 * @file  BeforeWatchdogTerminateEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BeforeWatchdogTerminateEvent.
 *
 */
struct BeforeWatchdogTerminateEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEFOREWATCHDOGTERMINATEEVENT
public:
    struct BeforeWatchdogTerminateEvent& operator=(struct BeforeWatchdogTerminateEvent const &) = delete;
    BeforeWatchdogTerminateEvent(struct BeforeWatchdogTerminateEvent const &) = delete;
    BeforeWatchdogTerminateEvent() = delete;
#endif

public:
    /**
     * @symbol  ??1BeforeWatchdogTerminateEvent\@\@QEAA\@XZ
     */
    MCAPI ~BeforeWatchdogTerminateEvent();

};