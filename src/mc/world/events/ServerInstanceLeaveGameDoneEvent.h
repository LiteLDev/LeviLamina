#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ServerInstance;
// clang-format on

struct ServerInstanceLeaveGameDoneEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ServerInstance>> mServerInstance;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerInstanceLeaveGameDoneEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
