#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
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

    public:
        // prevent constructor by default
        ScriptSystemAfterEventsDeferredEventListener&
        operator=(ScriptSystemAfterEventsDeferredEventListener const&)                                    = delete;
        ScriptSystemAfterEventsDeferredEventListener(ScriptSystemAfterEventsDeferredEventListener const&) = delete;
        ScriptSystemAfterEventsDeferredEventListener()                                                    = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol __unk_vfn_1
         */
        virtual void __unk_vfn_1(); // NOLINT
        /**
         * @vftbl 2
         * @symbol __unk_vfn_2
         */
        virtual void __unk_vfn_2(); // NOLINT
        /**
         * @vftbl 3
         * @symbol __unk_vfn_3
         */
        virtual void __unk_vfn_3(); // NOLINT
        /**
         * @vftbl 4
         * @symbol
         * ?onFlushSystemAfterEvents\@ScriptSystemAfterEventsDeferredEventListener\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@UEAA_NXZ
         */
        virtual bool onFlushSystemAfterEvents(); // NOLINT
    };

public:
    // prevent constructor by default
    ScriptSystemAfterEvents& operator=(ScriptSystemAfterEvents const&) = delete;
    ScriptSystemAfterEvents(ScriptSystemAfterEvents const&)            = delete;
    ScriptSystemAfterEvents()                                          = delete;

public:
    /**
     * @symbol
     * ??0ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@V?$not_null\@PEAVServerLevel\@\@\@gsl\@\@\@Z
     */
    MCAPI
    ScriptSystemAfterEvents(class Scripting::WeakLifetimeScope const&, class gsl::not_null<class ServerLevel*>); // NOLINT
    /**
     * @symbol ??0ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI ScriptSystemAfterEvents(class ScriptModuleMinecraft::ScriptSystemAfterEvents&&); // NOLINT
    /**
     * @symbol ?getScriptTickSignal\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAAAEAVScriptTickSignal\@2\@XZ
     */
    MCAPI class ScriptModuleMinecraft::ScriptTickSignal& getScriptTickSignal(); // NOLINT
    /**
     * @symbol
     * ?onScriptCommandMessageEvent\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAAXV?$StrongTypedObjectHandle\@UScriptEventCommandMessageAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void
        onScriptCommandMessageEvent(class Scripting::StrongTypedObjectHandle<
                                    struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent>); // NOLINT
    /**
     * @symbol ??4ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptSystemAfterEvents&
    operator=(class ScriptModuleMinecraft::ScriptSystemAfterEvents&&); // NOLINT
    /**
     * @symbol
     * ?registerListener\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAAXU?$TypedObjectHandle\@VScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@Z
     */
    MCAPI void registerListener(struct Scripting::TypedObjectHandle<
                                class ScriptModuleMinecraft::ScriptSystemAfterEvents>); // NOLINT
    /**
     * @symbol ??1ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptSystemAfterEvents(); // NOLINT
    /**
     * @symbol ?bind\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@SAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&); // NOLINT
    /**
     * @symbol
     * ?generateOrderDocumentationForVersion\@ScriptSystemAfterEvents\@ScriptModuleMinecraft\@\@SAXAEBUModuleDescriptor\@Scripting\@\@AEAVValue\@Json\@\@\@Z
     */
    MCAPI static void
    generateOrderDocumentationForVersion(struct Scripting::ModuleDescriptor const&, class Json::Value&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
