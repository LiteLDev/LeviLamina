#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/ZeroInit.h"

namespace Bedrock::Threading {

class Mutex : public ::Bedrock::Threading::ZeroInit, public ::std::mutex {
public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading
