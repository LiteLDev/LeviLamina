#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class ReceiveErrorResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3caf67;
    ::ll::UntypedStorage<8, 32> mUnk940f6b;
    ::ll::UntypedStorage<8, 32> mUnk21e12d;
    ::ll::UntypedStorage<8, 32> mUnk7ce1bc;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiveErrorResult& operator=(ReceiveErrorResult const&);
    ReceiveErrorResult(ReceiveErrorResult const&);
    ReceiveErrorResult();
};

} // namespace JsonRpc
