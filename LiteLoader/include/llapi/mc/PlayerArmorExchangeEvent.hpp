/**
 * @file  PlayerArmorExchangeEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerArmorExchangeEvent.
 *
 */
struct PlayerArmorExchangeEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERARMOREXCHANGEEVENT
public:
    struct PlayerArmorExchangeEvent& operator=(struct PlayerArmorExchangeEvent const &) = delete;
    PlayerArmorExchangeEvent() = delete;
#endif

public:
    /**
     * @hash   549009679
     * @symbol ??0PlayerArmorExchangeEvent@@QEAA@AEBU0@@Z
     */
    MCAPI PlayerArmorExchangeEvent(struct PlayerArmorExchangeEvent const &);
    /**
     * @hash   -398594797
     * @symbol ??1PlayerArmorExchangeEvent@@QEAA@XZ
     */
    MCAPI ~PlayerArmorExchangeEvent();

};