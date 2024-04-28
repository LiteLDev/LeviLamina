#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/IScriptItemCustomComponentSignalCollection.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentSignalCollection; }
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentAsyncSignalCollection
: public ::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection {
public:
    // prevent constructor by default
    ScriptItemCustomComponentAsyncSignalCollection& operator=(ScriptItemCustomComponentAsyncSignalCollection const&);
    ScriptItemCustomComponentAsyncSignalCollection(ScriptItemCustomComponentAsyncSignalCollection const&);
    ScriptItemCustomComponentAsyncSignalCollection();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptItemCustomComponentAsyncSignalCollection@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemCustomComponentAsyncSignalCollection();

    // vIndex: 1, symbol: ?onLevelTickEnd@ScriptDeferredEventListener@@UEAAXXZ
    virtual void onLevelTickEnd();

    // vIndex: 2, symbol: ?onRunAsyncJobs@ScriptDeferredEventListener@@UEAAXXZ
    virtual void onRunAsyncJobs();

    // vIndex: 3, symbol: ?onRunSystemTick@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onRunSystemTick();

    // vIndex: 4, symbol: ?onFlushWorldAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushWorldAfterEvents();

    // vIndex: 5, symbol: ?onFlushSystemAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushSystemAfterEvents();

    // vIndex: 6, symbol: ?onFlushEditorExtensionContextAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushEditorExtensionContextAfterEvents();

    // vIndex: 7, symbol: ?onFlushBlockCustomComponentAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushBlockCustomComponentAfterEvents();

    // vIndex: 8, symbol: ?onFlushEditorDataStoreAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushEditorDataStoreAfterEvents();

    // vIndex: 9, symbol:
    // ?onFlushItemCustomComponentAfterEvents@ScriptItemCustomComponentAsyncSignalCollection@ScriptModuleMinecraft@@UEAA_NXZ
    virtual bool onFlushItemCustomComponentAfterEvents();

    // vIndex: 10, symbol:
    // ?onPreFlushAfterEvents@ScriptItemCustomComponentAsyncSignalCollection@ScriptModuleMinecraft@@UEAAXXZ
    virtual void onPreFlushAfterEvents();

    // vIndex: 11, symbol:
    // ?onPostFlushAfterEvents@ScriptItemCustomComponentAsyncSignalCollection@ScriptModuleMinecraft@@UEAAXXZ
    virtual void onPostFlushAfterEvents();

    // vIndex: 12, symbol:
    // ?subscribeToItemForComponent@ScriptItemCustomComponentSignalCollection@ScriptModuleMinecraft@@UEAAXAEAVComponentItem@@AEBVHashedString@@AEBUIScriptItemCustomComponentClosures@2@AEAVWeakLifetimeScope@Scripting@@H@Z
    virtual void subscribeToItemForComponent(
        class ComponentItem&,
        class HashedString const&,
        struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&,
        class Scripting::WeakLifetimeScope&,
        int
    ) = 0;

    // vIndex: 13, symbol: ?clear@ScriptItemCustomComponentSignalCollection@ScriptModuleMinecraft@@UEAAXXZ
    virtual void clear() = 0;

    // symbol:
    // ?generateOrderDocumentation@ScriptItemCustomComponentAsyncSignalCollection@ScriptModuleMinecraft@@QEAAXAEBUModuleDescriptor@Scripting@@AEAVValue@Json@@@Z
    MCAPI void generateOrderDocumentation(struct Scripting::ModuleDescriptor const&, class Json::Value&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
