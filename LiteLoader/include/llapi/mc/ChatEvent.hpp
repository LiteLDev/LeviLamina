/**
 * @file  ChatEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ChatEvent.
 *
 */
struct ChatEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHATEVENT
public:
    struct ChatEvent& operator=(struct ChatEvent const &) = delete;
    ChatEvent() = delete;
#endif

public:
    /**
     * @hash   -741629515
     * @symbol ??0ChatEvent@@QEAA@AEBU0@@Z
     */
    MCAPI ChatEvent(struct ChatEvent const &);
    /**
     * @hash   -894395077
     * @symbol ??0ChatEvent@@QEAA@$$QEAU0@@Z
     */
    MCAPI ChatEvent(struct ChatEvent &&);
    /**
     * @hash   378761758
     * @symbol ??1ChatEvent@@QEAA@XZ
     */
    MCAPI ~ChatEvent();

};