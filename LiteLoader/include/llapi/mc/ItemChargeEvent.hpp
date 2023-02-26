/**
 * @file  ItemChargeEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemChargeEvent.
 *
 */
struct ItemChargeEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCHARGEEVENT
public:
    struct ItemChargeEvent& operator=(struct ItemChargeEvent const &) = delete;
    ItemChargeEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0ItemChargeEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemChargeEvent(struct ItemChargeEvent const &);
    /**
     * @symbol  ??0ItemChargeEvent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemChargeEvent(struct ItemChargeEvent &&);
    /**
     * @symbol  ??1ItemChargeEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemChargeEvent();

};