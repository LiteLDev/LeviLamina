/**
 * @file  PerformEnvDeleter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PerformEnvDeleter {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFORMENVDELETER
public:
    class PerformEnvDeleter& operator=(class PerformEnvDeleter const &) = delete;
    PerformEnvDeleter(class PerformEnvDeleter const &) = delete;
    PerformEnvDeleter() = delete;
#endif

public:
    /**
     * @symbol ??RPerformEnvDeleter\@\@QEAAXPEAUHC_PERFORM_ENV\@\@\@Z
     */
    MCAPI void operator()(struct HC_PERFORM_ENV *);

};
