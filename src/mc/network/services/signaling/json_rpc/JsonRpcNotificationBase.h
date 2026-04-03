#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class JsonRpcNotificationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfd1ba5;
    ::ll::UntypedStorage<8, 32> mUnk6f714a;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonRpcNotificationBase(JsonRpcNotificationBase const&);
    JsonRpcNotificationBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::JsonRpc::JsonRpcNotificationBase& operator=(::JsonRpc::JsonRpcNotificationBase&&);

    MCNAPI ::JsonRpc::JsonRpcNotificationBase& operator=(::JsonRpc::JsonRpcNotificationBase const&);

    MCNAPI ~JsonRpcNotificationBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
