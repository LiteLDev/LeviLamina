#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConsoleInputReader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLEINPUTREADER
public:
    ConsoleInputReader& operator=(ConsoleInputReader const&) = delete;
    ConsoleInputReader(ConsoleInputReader const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ConsoleInputReader\@\@QEAA\@XZ
     */
    MCAPI ConsoleInputReader();
    /**
     * @symbol
     * ?getLine\@ConsoleInputReader\@\@QEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool getLine(std::string&);
    /**
     * @symbol ?unblockReading\@ConsoleInputReader\@\@QEAAXXZ
     */
    MCAPI void unblockReading();
    /**
     * @symbol ??1ConsoleInputReader\@\@QEAA\@XZ
     */
    MCAPI ~ConsoleInputReader();
};
