#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConsoleInputReader {

public:
    // prevent constructor by default
    ConsoleInputReader& operator=(ConsoleInputReader const&) = delete;
    ConsoleInputReader(ConsoleInputReader const&)            = delete;

public:
    /**
     * @symbol ??0ConsoleInputReader\@\@QEAA\@XZ
     */
    MCAPI ConsoleInputReader(); // NOLINT
    /**
     * @symbol
     * ?getLine\@ConsoleInputReader\@\@QEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool getLine(std::string&); // NOLINT
    /**
     * @symbol ?unblockReading\@ConsoleInputReader\@\@QEAAXXZ
     */
    MCAPI void unblockReading(); // NOLINT
    /**
     * @symbol ??1ConsoleInputReader\@\@QEAA\@XZ
     */
    MCAPI ~ConsoleInputReader(); // NOLINT
};
