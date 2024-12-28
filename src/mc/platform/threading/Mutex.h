#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/ZeroInit.h"

namespace Bedrock::Threading {

class Mutex : public ::Bedrock::Threading::ZeroInit, public ::std::mutex {
public:
    // prevent constructor by default
    Mutex& operator=(Mutex const&);
    Mutex(Mutex const&);
    Mutex();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Mutex();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading
