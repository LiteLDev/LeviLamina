#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatSubscription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc96b4d;
    ::ll::UntypedStorage<8, 64> mUnk52d004;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatSubscription& operator=(ChatSubscription const&);
    ChatSubscription(ChatSubscription const&);
    ChatSubscription();
};

} // namespace CodeBuilder
