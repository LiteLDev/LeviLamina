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
    // symbol: ??0ChatSubscription@CodeBuilder@@QEAA@$$QEAU01@@Z
    MCAPI ChatSubscription(struct CodeBuilder::ChatSubscription&&);

    // symbol: ??1ChatSubscription@CodeBuilder@@QEAA@XZ
    MCAPI ~ChatSubscription();

    // NOLINTEND
};

}; // namespace CodeBuilder
