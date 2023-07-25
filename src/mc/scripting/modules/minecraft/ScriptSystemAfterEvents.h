#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptTickSignal; }
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemAfterEvents {
public:
    // ScriptSystemAfterEvents inner types declare
    // clang-format off
    class ScriptSystemAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptSystemAfterEvents inner types define
    class ScriptSystemAfterEventsDeferredEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSYSTEMAFTEREVENTS_SCRIPTSYSTEMAFTEREVENTSDEFERREDEVENTLISTENER
    public:
        ScriptSystemAfterEventsDeferredEventListener&
        operator=(ScriptSystemAfterEventsDeferredEventListener const&)                                    = delete;
        ScriptSystemAfterEventsDeferredEventListener(ScriptSystemAfterEventsDeferredEventListener const&) = delete;
        ScriptSystemAfterEventsDeferredEventListener()                                                    = delete;
#endif

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol __unk_vfn_1
         */
        virtual void __unk_vfn_1();
        /**
         * @vftbl 2
         * @symbol __unk_vfn_2
         */
        virtual void __unk_vfn_2();
        /**
         * @vftbl 3
         * @symbol __unk_vfn_3
         */
        virtual void __unk_vfn_3();
        /**
         * @vftbl 4
         * @symbol
         * ?onFlushSystemAfterEvents\@ScriptSystemAfterEventsDeferredEventListener\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@UEAA_NXZ
         */
        virtual bool onFlushSystemAfterEvents();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSYSTEMAFTEREVENTS
public:
    ScriptSystemAfterEvents& operator=(ScriptSystemAfterEvents const&) = delete;
    ScriptSystemAfterEvents(ScriptSystemAfterEvents const&)            = delete;
    ScriptSystemAfterEvents()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@V?$not_null\@PEAVServerLevel\@\@\@gsl\@\@\@Z
     */
    MCAPI ScriptSystemAfterEvents(class Scripting::WeakLifetimeScope const&, class gsl::not_null<class ServerLevel*>);
    /**
     * @symbol ??0ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptSystemAfterEvents(class ScriptModuleMinecraft::ScriptSystemAfterEvents&&);
    /**
     * @symbol ?getScriptTickSignal\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAAAEAVScriptTickSignal\@2\@XZ
     */
    MCAPI class ScriptModuleMinecraft::ScriptTickSignal& getScriptTickSignal();
    /**
     * @symbol
     * ?onScriptCommandMessageEvent\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAAXV?$StrongTypedObjectHandle\@UScriptEventCommandMessageAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void onScriptCommandMessageEvent(class Scripting::StrongTypedObjectHandle<
                                           struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent>);
    /**
     * @symbol ??4ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptSystemAfterEvents&
    operator=(class ScriptModuleMinecraft::ScriptSystemAfterEvents&&);
    /**
     * @symbol
     * ?registerListener\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAAXU?$TypedObjectHandle\@VScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void
        registerListener(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents>);
    /**
     * @symbol ??1ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptSystemAfterEvents();
    /**
     * @symbol ?bind\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);
    /**
     * @symbol
     * ?generateOrderDocumentationForVersion\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@SAXAEBUModuleDescriptor\@Scripting\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI static void
    generateOrderDocumentationForVersion(struct Scripting::ModuleDescriptor const&, class Json::Value&);
};

}; // namespace ScriptModuleMinecraft
