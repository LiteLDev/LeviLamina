#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDeferredEventCoordinator {
public:
    // ScriptDeferredEventCoordinator inner types declare
    // clang-format off
    struct DocumentableEventExecution;
    // clang-format on

    // ScriptDeferredEventCoordinator inner types define
    struct DocumentableEventExecution {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEFERREDEVENTCOORDINATOR_DOCUMENTABLEEVENTEXECUTION
    public:
        DocumentableEventExecution& operator=(DocumentableEventExecution const&) = delete;
        DocumentableEventExecution(DocumentableEventExecution const&)            = delete;
        DocumentableEventExecution()                                             = delete;
#endif

    public:
        /**
         * @symbol ??1DocumentableEventExecution\@ScriptDeferredEventCoordinator\@\@QEAA\@XZ
         */
        MCAPI ~DocumentableEventExecution();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEFERREDEVENTCOORDINATOR
public:
    ScriptDeferredEventCoordinator& operator=(ScriptDeferredEventCoordinator const&) = delete;
    ScriptDeferredEventCoordinator(ScriptDeferredEventCoordinator const&)            = delete;
    ScriptDeferredEventCoordinator()                                                 = delete;
#endif

public:
    /**
     * @symbol ?sendAllDeferredEvents\@ScriptDeferredEventCoordinator\@\@QEAAXXZ
     */
    MCAPI void sendAllDeferredEvents();

    // private:
    /**
     * @symbol ?_sendFlushSystemAfterEvents\@ScriptDeferredEventCoordinator\@\@AEAA_NXZ
     */
    MCAPI bool _sendFlushSystemAfterEvents();
    /**
     * @symbol ?_sendFlushWorldAfterEvents\@ScriptDeferredEventCoordinator\@\@AEAA_NXZ
     */
    MCAPI bool _sendFlushWorldAfterEvents();

private:
    /**
     * @symbol
     * ?sEventExecutionOrder\@ScriptDeferredEventCoordinator\@\@0V?$vector\@UDocumentableEventExecution\@ScriptDeferredEventCoordinator\@\@V?$allocator\@UDocumentableEventExecution\@ScriptDeferredEventCoordinator\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<struct ScriptDeferredEventCoordinator::DocumentableEventExecution> const
        sEventExecutionOrder;
};
