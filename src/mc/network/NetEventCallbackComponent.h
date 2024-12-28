#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class NetEventCallback;
// clang-format on

class NetEventCallbackComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka6e055;
    // NOLINTEND

public:
    // prevent constructor by default
    NetEventCallbackComponent& operator=(NetEventCallbackComponent const&);
    NetEventCallbackComponent(NetEventCallbackComponent const&);
    NetEventCallbackComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void set(::Bedrock::NonOwnerPointer<::NetEventCallback> callback);
    // NOLINTEND
};
