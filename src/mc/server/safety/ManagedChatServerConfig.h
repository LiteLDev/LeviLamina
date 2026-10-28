#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::ManagedChat {

struct ManagedChatServerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkfe01de;
    // NOLINTEND

public:
    // prevent constructor by default
    ManagedChatServerConfig& operator=(ManagedChatServerConfig const&);
    ManagedChatServerConfig(ManagedChatServerConfig const&);
    ManagedChatServerConfig();
};

} // namespace Social::ManagedChat
