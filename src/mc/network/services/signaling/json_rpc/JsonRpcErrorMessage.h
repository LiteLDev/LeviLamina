#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcErrorMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9a55c5;
    ::ll::UntypedStorage<8, 32> mUnk80422a;
    ::ll::UntypedStorage<8, 40> mUnk76c886;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcErrorMessage(JsonRpcErrorMessage const&);
    JsonRpcErrorMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::JsonRpc::JsonRpcErrorMessage& operator=(::JsonRpc::JsonRpcErrorMessage&&);

    MCNAPI ::JsonRpc::JsonRpcErrorMessage& operator=(::JsonRpc::JsonRpcErrorMessage const&);
    // NOLINTEND
};

} // namespace JsonRpc
