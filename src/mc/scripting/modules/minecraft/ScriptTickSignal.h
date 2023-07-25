#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Closure.h"

namespace ScriptModuleMinecraft {

class ScriptTickSignal {
public:
    // ScriptTickSignal inner types declare
    // clang-format off
    struct PendingSubscribe;
    struct PendingUnsubscribe;
    struct Slot;
    // clang-format on

    // ScriptTickSignal inner types define
    struct PendingSubscribe {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTTICKSIGNAL_PENDINGSUBSCRIBE
    public:
        PendingSubscribe& operator=(PendingSubscribe const&) = delete;
        PendingSubscribe(PendingSubscribe const&)            = delete;
        PendingSubscribe()                                   = delete;
#endif

    public:
        /**
         * @symbol ??1PendingSubscribe\@ScriptTickSignal\@ScriptModuleMinecraft\@\@QEAA\@XZ
         */
        MCAPI ~PendingSubscribe();
    };

    struct PendingUnsubscribe {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTTICKSIGNAL_PENDINGUNSUBSCRIBE
    public:
        PendingUnsubscribe& operator=(PendingUnsubscribe const&) = delete;
        PendingUnsubscribe(PendingUnsubscribe const&)            = delete;
        PendingUnsubscribe()                                     = delete;
#endif

    public:
    };

    struct Slot {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTTICKSIGNAL_SLOT
    public:
        Slot& operator=(Slot const&) = delete;
        Slot(Slot const&)            = delete;
        Slot()                       = delete;
#endif

    public:
        /**
         * @symbol ??1Slot\@ScriptTickSignal\@ScriptModuleMinecraft\@\@QEAA\@XZ
         */
        MCAPI ~Slot();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTTICKSIGNAL
public:
    ScriptTickSignal& operator=(ScriptTickSignal const&) = delete;
    ScriptTickSignal(ScriptTickSignal const&)            = delete;
    ScriptTickSignal()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?scheduleInterval\@ScriptTickSignal\@ScriptModuleMinecraft\@\@QEAAI$$QEAV?$Closure\@$$A6AXXZ$$V\@Scripting\@\@II\@Z
     */
    MCAPI unsigned int scheduleInterval(class Scripting::Closure<void(void)>&&, unsigned int, unsigned int);
    /**
     * @symbol
     * ?scheduleTimeout\@ScriptTickSignal\@ScriptModuleMinecraft\@\@QEAAI$$QEAV?$Closure\@$$A6AXXZ$$V\@Scripting\@\@II\@Z
     */
    MCAPI unsigned int scheduleTimeout(class Scripting::Closure<void(void)>&&, unsigned int, unsigned int);
    /**
     * @symbol
     * ?scheduleTimeoutSafe\@ScriptTickSignal\@ScriptModuleMinecraft\@\@QEAAI$$QEAV?$Closure\@$$A6AXXZ$$V\@Scripting\@\@I\@Z
     */
    MCAPI unsigned int scheduleTimeoutSafe(class Scripting::Closure<void(void)>&&, unsigned int);
    /**
     * @symbol ?unschedule\@ScriptTickSignal\@ScriptModuleMinecraft\@\@QEAAXI\@Z
     */
    MCAPI void unschedule(unsigned int);
    /**
     * @symbol ??1ScriptTickSignal\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptTickSignal();

    // private:
    /**
     * @symbol
     * ?_processActive\@ScriptTickSignal\@ScriptModuleMinecraft\@\@AEAA_NAEAV?$vector\@USlot\@ScriptTickSignal\@ScriptModuleMinecraft\@\@V?$allocator\@USlot\@ScriptTickSignal\@ScriptModuleMinecraft\@\@\@std\@\@\@std\@\@I\@Z
     */
    MCAPI bool _processActive(std::vector<struct ScriptModuleMinecraft::ScriptTickSignal::Slot>&, unsigned int);
    /**
     * @symbol
     * ?_processPending\@ScriptTickSignal\@ScriptModuleMinecraft\@\@AEAAXAEAV?$vector\@V?$variant\@UPendingSubscribe\@ScriptTickSignal\@ScriptModuleMinecraft\@\@UPendingUnsubscribe\@23\@\@std\@\@V?$allocator\@V?$variant\@UPendingSubscribe\@ScriptTickSignal\@ScriptModuleMinecraft\@\@UPendingUnsubscribe\@23\@\@std\@\@\@2\@\@std\@\@AEAV?$vector\@USlot\@ScriptTickSignal\@ScriptModuleMinecraft\@\@V?$allocator\@USlot\@ScriptTickSignal\@ScriptModuleMinecraft\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void
    _processPending(std::vector<class std::variant<struct ScriptModuleMinecraft::ScriptTickSignal::PendingSubscribe, struct ScriptModuleMinecraft::ScriptTickSignal::PendingUnsubscribe>>&, std::vector<struct ScriptModuleMinecraft::ScriptTickSignal::Slot>&);

private:
};

}; // namespace ScriptModuleMinecraft
