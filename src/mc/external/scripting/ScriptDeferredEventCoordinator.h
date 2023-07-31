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

    public:
        // prevent constructor by default
        DocumentableEventExecution& operator=(DocumentableEventExecution const&) = delete;
        DocumentableEventExecution(DocumentableEventExecution const&)            = delete;
        DocumentableEventExecution()                                             = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1DocumentableEventExecution\@ScriptDeferredEventCoordinator\@\@QEAA\@XZ
         */
        MCAPI ~DocumentableEventExecution();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptDeferredEventCoordinator& operator=(ScriptDeferredEventCoordinator const&) = delete;
    ScriptDeferredEventCoordinator(ScriptDeferredEventCoordinator const&)            = delete;
    ScriptDeferredEventCoordinator()                                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?sendAllDeferredEvents\@ScriptDeferredEventCoordinator\@\@QEAAXXZ
     */
    MCAPI void sendAllDeferredEvents();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_sendFlushSystemAfterEvents\@ScriptDeferredEventCoordinator\@\@AEAA_NXZ
     */
    MCAPI bool _sendFlushSystemAfterEvents();
    /**
     * @symbol ?_sendFlushWorldAfterEvents\@ScriptDeferredEventCoordinator\@\@AEAA_NXZ
     */
    MCAPI bool _sendFlushWorldAfterEvents();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?sEventExecutionOrder\@ScriptDeferredEventCoordinator\@\@0V?$vector\@UDocumentableEventExecution\@ScriptDeferredEventCoordinator\@\@V?$allocator\@UDocumentableEventExecution\@ScriptDeferredEventCoordinator\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<struct ScriptDeferredEventCoordinator::DocumentableEventExecution> const
        sEventExecutionOrder;
    // NOLINTEND
};
