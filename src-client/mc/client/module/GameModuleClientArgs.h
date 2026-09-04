#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LocalProfilerControlBroker;
// clang-format on

struct GameModuleClientArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mIsConnectedToRemoteServer;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                             mSubClientId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LocalProfilerControlBroker>> mLocalProfilerControlBroker;
    // NOLINTEND
};
