/**
 * @file  MC/ExplosionStartedEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ExplosionStartedEvent.
 *
 */
struct ExplosionStartedEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOSIONSTARTEDEVENT
public:
    struct ExplosionStartedEvent& operator=(struct ExplosionStartedEvent const &) = delete;
    ExplosionStartedEvent() = delete;
#endif

public:
    /**
     * @hash   -420550107
     * @symbol ??0ExplosionStartedEvent@@QEAA@AEBU0@@Z
     */
    MCAPI ExplosionStartedEvent(struct ExplosionStartedEvent const &);
    /**
     * @hash   -1577278141
     * @symbol ??0ExplosionStartedEvent@@QEAA@$$QEAU0@@Z
     */
    MCAPI ExplosionStartedEvent(struct ExplosionStartedEvent &&);
    /**
     * @hash   -593907942
     * @symbol ??1ExplosionStartedEvent@@QEAA@XZ
     */
    MCAPI ~ExplosionStartedEvent();

};