#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CDScopedEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CDSCOPEDEVENT
public:
    CDScopedEvent& operator=(CDScopedEvent const&) = delete;
    CDScopedEvent(CDScopedEvent const&)            = delete;
    CDScopedEvent()                                = delete;
#endif

public:
    /**
     * @symbol ??0CDScopedEvent\@\@QEAA\@W4CrashDumpLogStringID\@\@00\@Z
     */
    MCAPI CDScopedEvent(
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID
    );
    /**
     * @symbol ??1CDScopedEvent\@\@QEAA\@XZ
     */
    MCAPI ~CDScopedEvent();
};
