#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConsoleInputReader {
public:
    // prevent constructor by default
    ConsoleInputReader& operator=(ConsoleInputReader const&);
    ConsoleInputReader(ConsoleInputReader const&);

public:
    // NOLINTBEGIN
    MCAPI ConsoleInputReader();

    MCAPI bool getLine(std::string& outLine);

    MCAPI void unblockReading();

    MCAPI ~ConsoleInputReader();

    // NOLINTEND
};
