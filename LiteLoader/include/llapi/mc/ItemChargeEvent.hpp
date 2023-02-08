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
     * @hash   1981543957
     * @symbol  ??0ItemChargeEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemChargeEvent(struct ItemChargeEvent const &);
    /**
     * @hash   -1518756483
     * @symbol  ??0ItemChargeEvent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemChargeEvent(struct ItemChargeEvent &&);
    /**
     * @hash   -1448211921
     * @symbol  ??1ItemChargeEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemChargeEvent();

};