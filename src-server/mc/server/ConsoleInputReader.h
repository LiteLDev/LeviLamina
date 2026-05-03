#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SPSCQueue.h"

class ConsoleInputReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::SPSCQueue<::std::string, 512>> mConsoleInput;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>              mReadConsole;
    ::ll::TypedStorage<8, 16, ::std::thread>                   mConsoleThread;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void unblockReading();
    // NOLINTEND
};
