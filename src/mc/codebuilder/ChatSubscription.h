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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct CodeBuilder::ChatSubscription&&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
