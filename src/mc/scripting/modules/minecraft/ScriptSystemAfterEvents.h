#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptAsyncEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptTickSignal; }
namespace ScriptModuleMinecraft { struct ScriptEventCommandMessageAfterEvent; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
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

        // vIndex: 1, symbol: ?onLevelTickEnd@ScriptDeferredEventListener@@UEAAXXZ
        virtual void onLevelTickEnd();

        // vIndex: 2, symbol: ?onRunAsyncJobs@ScriptDeferredEventListener@@UEAAXXZ
        virtual void onRunAsyncJobs();

        // vIndex: 3, symbol: ?onRunSystemTick@ScriptDeferredEventListener@@UEAA_NXZ
        virtual bool onRunSystemTick();

        // vIndex: 4, symbol: ?onFlushWorldAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
        virtual bool onFlushWorldAfterEvents();

        // vIndex: 5, symbol:
        // ?onFlushSystemAfterEvents@ScriptSystemAfterEventsDeferredEventListener@ScriptSystemAfterEvents@ScriptModuleMinecraft@@UEAA_NXZ
        virtual bool onFlushSystemAfterEvents();

        // vIndex: 6, symbol: ?onFlushEditorExtensionContextAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
        virtual bool onFlushEditorExtensionContextAfterEvents();

        // vIndex: 7, symbol: ?onFlushBlockCustomComponentAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
        virtual bool onFlushBlockCustomComponentAfterEvents();

        // vIndex: 8, symbol: ?onFlushEditorDataStoreAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
        virtual bool onFlushEditorDataStoreAfterEvents();

        // vIndex: 9, symbol: ?onFlushItemCustomComponentAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
        virtual bool onFlushItemCustomComponentAfterEvents();

        // vIndex: 10, symbol:
        // ?onPreFlushAfterEvents@?$IScriptScriptDeferredEventListener@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@ScriptModuleMinecraft@@UEAAXXZ
        virtual void onPreFlushAfterEvents();

        // vIndex: 11, symbol:
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

    // symbol: ?getLevel@ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEBAAEAVServerLevel@@XZ
    MCAPI class ServerLevel& getLevel() const;

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

    // symbol: ?runSystemTick@ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEAA_NAEAUScriptTickEvent@2@@Z
    MCAPI bool runSystemTick(struct ScriptModuleMinecraft::ScriptTickEvent&);

    // symbol: ??1ScriptSystemAfterEvents@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptSystemAfterEvents();

    // symbol: ?bind@ScriptSystemAfterEvents@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // symbol:
    // ?generateOrderDocumentationForVersion@ScriptSystemAfterEvents@ScriptModuleMinecraft@@SAXAEBUModuleDescriptor@Scripting@@AEAVValue@Json@@@Z
    MCAPI static void
    generateOrderDocumentationForVersion(struct Scripting::ModuleDescriptor const&, class Json::Value&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mMetadata@ScriptSystemAfterEvents@ScriptModuleMinecraft@@0U?$ScriptAsyncEventMetadata@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@2@B
    MCAPI static struct ScriptModuleMinecraft::ScriptAsyncEventMetadata<
        class ScriptModuleMinecraft::ScriptSystemAfterEvents> const mMetadata;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
