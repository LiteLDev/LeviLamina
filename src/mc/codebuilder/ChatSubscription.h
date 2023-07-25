#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatSubscription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_CHATSUBSCRIPTION
public:
    ChatSubscription& operator=(ChatSubscription const&) = delete;
    ChatSubscription(ChatSubscription const&)            = delete;
    ChatSubscription()                                   = delete;
#endif

public:
    /**
     * @symbol ??0ChatSubscription\@CodeBuilder\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ChatSubscription(struct CodeBuilder::ChatSubscription&&);
    /**
     * @symbol ??1ChatSubscription\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~ChatSubscription();
};

}; // namespace CodeBuilder
