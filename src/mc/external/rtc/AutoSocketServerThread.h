#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/Thread.h"

namespace rtc {

class AutoSocketServerThread : public ::rtc::Thread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk616093;
    // NOLINTEND

public:
    // prevent constructor by default
    AutoSocketServerThread& operator=(AutoSocketServerThread const&);
    AutoSocketServerThread(AutoSocketServerThread const&);
    AutoSocketServerThread();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AutoSocketServerThread() /*override*/ = default;
    // NOLINTEND
};

} // namespace rtc
