#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConsoleInputReader {
public:
    // prevent constructor by default
    ConsoleInputReader& operator=(ConsoleInputReader const&);
    ConsoleInputReader(ConsoleInputReader const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ConsoleInputReader@@QEAA@XZ
    MCAPI ConsoleInputReader();

    // symbol: ?getLine@ConsoleInputReader@@QEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool getLine(std::string& outLine);

    // symbol: ?unblockReading@ConsoleInputReader@@QEAAXXZ
    MCAPI void unblockReading();

    // symbol: ??1ConsoleInputReader@@QEAA@XZ
    MCAPI ~ConsoleInputReader();

    // NOLINTEND
};
