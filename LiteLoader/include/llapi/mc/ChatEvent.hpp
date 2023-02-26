/**
 * @file  ChatEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0ChatEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ChatEvent(struct ChatEvent const &);
    /**
     * @symbol  ??1ChatEvent\@\@QEAA\@XZ
     */
    MCAPI ~ChatEvent();

};