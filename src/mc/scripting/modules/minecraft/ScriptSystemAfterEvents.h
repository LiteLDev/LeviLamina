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
        ScriptSystemAfterEventsDeferredEventListener& operator=(ScriptSystemAfterEventsDeferredEventListener const&);
        ScriptSystemAfterEventsDeferredEventListener(ScriptSystemAfterEventsDeferredEventListener const&);
        ScriptSystemAfterEventsDeferredEventListener();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol:
        // __gen_??1ScriptSystemAfterEventsDeferredEventListener@ScriptSystemAfterEvents@ScriptModuleMinecraft@@UEAA@XZ
        virtual ~ScriptSystemAfterEventsDeferredEventListener() = default;

        // vIndex: 1, symbol: __unk_vfn_1
        virtual void __unk_vfn_1();

        // vIndex: 2, symbol: __unk_vfn_2
        virtual void __unk_vfn_2();

        // vIndex: 3, symbol: __unk_vfn_3
        virtual void __unk_vfn_3();

        // vIndex: 4, symbol:
        // ?onFlushSystemAfterEvents@ScriptSystemAfterEventsDeferredEventListener@ScriptSystemAfterEvents@ScriptModuleMinecraft@@UEAA_NXZ
        virtual bool onFlushSystemAfterEvents();

        // vIndex: 5, symbol:
        // ?onPreFlushAfterEvents@?$IScriptScriptDeferredEventListener@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@ScriptModuleMinecraft@@UEAAXXZ
        virtual void onPreFlushAfterEvents();

        // vIndex: 6, symbol:
        // ?onPostFlushAfterEvents@?$IScriptScriptDeferredEventListener@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@ScriptModuleMinecraft@@UEAAXXZ
        virtual void onPostFlushAfterEvents();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptSystemAfterEvents& operator=(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptSystemAfterEvents(class ScriptModuleMinecraft::ScriptSystemAfterEvents&&);

    // symbol:
    // ??0ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@V?$not_null@PEAVServerLevel@@@gsl@@@Z
    MCAPI ScriptSystemAfterEvents(class Scripting::WeakLifetimeScope const&, gsl::not_null<class ServerLevel*>);

    // symbol: ?getScriptTickSignal@ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEAAAEAVScriptTickSignal@2@XZ
    MCAPI class ScriptModuleMinecraft::ScriptTickSignal& getScriptTickSignal();

    // symbol:
    // ?onScriptCommandMessageEvent@ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEAAXV?$StrongTypedObjectHandle@UScriptEventCommandMessageAfterEvent@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI void onScriptCommandMessageEvent(class Scripting::StrongTypedObjectHandle<
                                           struct ScriptModuleMinecraft::ScriptEventCommandMessageAfterEvent>);

    // symbol: ??4ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptSystemAfterEvents&
    operator=(class ScriptModuleMinecraft::ScriptSystemAfterEvents&&);

    // symbol:
    // ?registerListener@ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEAAXU?$TypedObjectHandle@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI void
        registerListener(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents>);

    // symbol: ??1ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptSystemAfterEvents();

    // symbol: ?bind@ScriptSystemAfterEvents@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // symbol:
    // ?generateOrderDocumentationForVersion@ScriptSystemAfterEvents@ScriptModuleMinecraft@@SAXAEBUModuleDescriptor@Scripting@@AEAVValue@Json@@@Z
    MCAPI static void
    generateOrderDocumentationForVersion(struct Scripting::ModuleDescriptor const&, class Json::Value&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
