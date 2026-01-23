#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcNotificationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk915d02;
    ::ll::UntypedStorage<8, 32> mUnk42f0c7;
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
