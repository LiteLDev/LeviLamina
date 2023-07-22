/**
 * @file  ItemUseEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0ItemUseEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemUseEvent(struct ItemUseEvent const &);
    /**
     * @symbol  ??1ItemUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemUseEvent();

};