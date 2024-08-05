#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatSubscription {
public:
    // prevent constructor by default
    ChatSubscription& operator=(ChatSubscription const&);
    ChatSubscription(ChatSubscription const&);
    ChatSubscription();

public:
    // NOLINTBEGIN
    MCAPI ChatSubscription(struct CodeBuilder::ChatSubscription&&);

    MCAPI ~ChatSubscription();

    // NOLINTEND
};

}; // namespace CodeBuilder
