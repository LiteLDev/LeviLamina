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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
