#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcErrorMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk9a55c5;
    ::ll::UntypedStorage<8, 32>  mUnk80422a;
    ::ll::UntypedStorage<8, 224> mUnk76c886;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcErrorMessage& operator=(JsonRpcErrorMessage const&);
    JsonRpcErrorMessage(JsonRpcErrorMessage const&);
    JsonRpcErrorMessage();
};

} // namespace JsonRpc
