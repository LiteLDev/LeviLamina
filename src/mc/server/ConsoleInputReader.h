#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConsoleInputReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkefe26d;
    ::ll::UntypedStorage<1, 1>  mUnka4ef70;
    ::ll::UntypedStorage<8, 16> mUnk259952;
    // NOLINTEND

public:
    // prevent constructor by default
    ConsoleInputReader& operator=(ConsoleInputReader const&);
    ConsoleInputReader(ConsoleInputReader const&);
    ConsoleInputReader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void unblockReading();
    // NOLINTEND
};
