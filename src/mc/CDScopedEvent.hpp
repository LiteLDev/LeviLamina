/**
 * @file  CDScopedEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CDScopedEvent.
 *
 */
class CDScopedEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CDSCOPEDEVENT
public:
    class CDScopedEvent& operator=(class CDScopedEvent const &) = delete;
    CDScopedEvent(class CDScopedEvent const &) = delete;
    CDScopedEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0CDScopedEvent\@\@QEAA\@W4CrashDumpLogStringID\@\@00\@Z
     */
    MCAPI CDScopedEvent(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, enum class CrashDumpLogStringID);
    /**
     * @symbol  ??1CDScopedEvent\@\@QEAA\@XZ
     */
    MCAPI ~CDScopedEvent();

};