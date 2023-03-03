/**
 * @file  SendEventData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure SendEventData.
 *
 */
struct SendEventData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDEVENTDATA
public:
    struct SendEventData& operator=(struct SendEventData const &) = delete;
    SendEventData() = delete;
#endif

public:
    /**
     * @symbol  ??0SendEventData\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SendEventData(struct SendEventData const &);
    /**
     * @symbol  ??1SendEventData\@\@QEAA\@XZ
     */
    MCAPI ~SendEventData();

};