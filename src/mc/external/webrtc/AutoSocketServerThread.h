#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Thread.h"

namespace webrtc {

class AutoSocketServerThread : public ::webrtc::Thread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcafa0b;
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

} // namespace webrtc
