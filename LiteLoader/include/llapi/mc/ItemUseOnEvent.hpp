/**
 * @file  ItemUseOnEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemUseOnEvent.
 *
 */
struct ItemUseOnEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEONEVENT
public:
    struct ItemUseOnEvent& operator=(struct ItemUseOnEvent const &) = delete;
    ItemUseOnEvent() = delete;
#endif

public:
    /**
     * @hash   1676329999
     * @symbol ??0ItemUseOnEvent@@QEAA@AEBU0@@Z
     */
    MCAPI ItemUseOnEvent(struct ItemUseOnEvent const &);
    /**
     * @hash   -1370351333
     * @symbol ??0ItemUseOnEvent@@QEAA@$$QEAU0@@Z
     */
    MCAPI ItemUseOnEvent(struct ItemUseOnEvent &&);
    /**
     * @hash   -743416687
     * @symbol ??1ItemUseOnEvent@@QEAA@XZ
     */
    MCAPI ~ItemUseOnEvent();

};