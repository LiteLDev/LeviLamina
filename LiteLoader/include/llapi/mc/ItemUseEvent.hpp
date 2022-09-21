/**
 * @file  MC/ItemUseEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemUseEvent.
 *
 */
struct ItemUseEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEEVENT
public:
    struct ItemUseEvent& operator=(struct ItemUseEvent const &) = delete;
    ItemUseEvent() = delete;
#endif

public:
    /**
     * @hash   -2066326353
     * @symbol ??0ItemUseEvent@@QEAA@AEBU0@@Z
     */
    MCAPI ItemUseEvent(struct ItemUseEvent const &);
    /**
     * @hash   575368601
     * @symbol ??0ItemUseEvent@@QEAA@$$QEAU0@@Z
     */
    MCAPI ItemUseEvent(struct ItemUseEvent &&);
    /**
     * @hash   -1750668528
     * @symbol ??1ItemUseEvent@@QEAA@XZ
     */
    MCAPI ~ItemUseEvent();

};