#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct SubscriptionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk800b0c;
    ::ll::UntypedStorage<1, 1>  mUnk29647b;
    ::ll::UntypedStorage<8, 32> mUnk7bba4c;
    ::ll::UntypedStorage<8, 32> mUnk40a8d7;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionInfo& operator=(SubscriptionInfo const&);
    SubscriptionInfo(SubscriptionInfo const&);
    SubscriptionInfo();
};

} // namespace SDL
