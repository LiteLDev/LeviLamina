/**
 * @file  ContextMessageLogger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ContextMessageLogger.
 *
 */
class ContextMessageLogger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTEXTMESSAGELOGGER
public:
    class ContextMessageLogger& operator=(class ContextMessageLogger const &) = delete;
    ContextMessageLogger(class ContextMessageLogger const &) = delete;
    ContextMessageLogger() = delete;
#endif

public:
    /**
     * @hash   2028967533
     * @symbol ?log@ContextMessageLogger@@QEAAXW4LogArea@@W4LogLevel@@PEBD@Z
     */
    MCAPI void log(enum LogArea, enum LogLevel, char const *);
    /**
     * @hash   -385073862
     * @symbol ?shouldMessagePostToParentMessageLoggers@ContextMessageLogger@@QEAA_NXZ
     */
    MCAPI bool shouldMessagePostToParentMessageLoggers();

};