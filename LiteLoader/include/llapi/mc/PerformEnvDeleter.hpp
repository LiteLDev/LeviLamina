/**
 * @file  PerformEnvDeleter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PerformEnvDeleter.
 *
 */
struct PerformEnvDeleter {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFORMENVDELETER
public:
    struct PerformEnvDeleter& operator=(struct PerformEnvDeleter const &) = delete;
    PerformEnvDeleter(struct PerformEnvDeleter const &) = delete;
    PerformEnvDeleter() = delete;
#endif

public:
    /**
     * @symbol  ??RPerformEnvDeleter\@\@QEAAXPEAUHC_PERFORM_ENV\@\@\@Z
     */
    MCAPI void operator()(struct HC_PERFORM_ENV *);

};