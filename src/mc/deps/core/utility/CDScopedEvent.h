#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CDScopedEvent {

public:
    // prevent constructor by default
    CDScopedEvent& operator=(CDScopedEvent const&) = delete;
    CDScopedEvent(CDScopedEvent const&)            = delete;
    CDScopedEvent()                                = delete;

public:
    /**
     * @symbol ??0CDScopedEvent\@\@QEAA\@W4CrashDumpLogStringID\@\@00\@Z
     */
    MCAPI CDScopedEvent(
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID
    ); // NOLINT
    /**
     * @symbol ??1CDScopedEvent\@\@QEAA\@XZ
     */
    MCAPI ~CDScopedEvent(); // NOLINT
};
