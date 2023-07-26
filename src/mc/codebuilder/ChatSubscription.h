#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatSubscription {

public:
    // prevent constructor by default
    ChatSubscription& operator=(ChatSubscription const&) = delete;
    ChatSubscription(ChatSubscription const&)            = delete;
    ChatSubscription()                                   = delete;

public:
    /**
     * @symbol ??0ChatSubscription\@CodeBuilder\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ChatSubscription(struct CodeBuilder::ChatSubscription&&); // NOLINT
    /**
     * @symbol ??1ChatSubscription\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~ChatSubscription(); // NOLINT
};

}; // namespace CodeBuilder
