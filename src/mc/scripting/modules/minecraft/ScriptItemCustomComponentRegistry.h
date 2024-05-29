#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/IScriptItemCustomComponentRegistry.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Item;
class ItemRegistryRef;
class ScriptDeferredEventListener;
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentSignalCollection; }
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentAlreadyRegisteredError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewComponentError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadNewEventError; }
namespace ScriptModuleMinecraft { struct ScriptItemCustomComponentReloadVersionError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentRegistry : public ::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry {
public:
    // ScriptItemCustomComponentRegistry inner types declare
    // clang-format off
    struct ComponentInfo;
    // clang-format on

    // ScriptItemCustomComponentRegistry inner types define
    struct ComponentInfo {
    public:
        // prevent constructor by default
        ComponentInfo& operator=(ComponentInfo const&);
        ComponentInfo(ComponentInfo const&);
        ComponentInfo();

    public:
        // NOLINTBEGIN
        // symbol: ??1ComponentInfo@ScriptItemCustomComponentRegistry@ScriptModuleMinecraft@@QEAA@XZ
        MCAPI ~ComponentInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptItemCustomComponentRegistry& operator=(ScriptItemCustomComponentRegistry const&);
    ScriptItemCustomComponentRegistry(ScriptItemCustomComponentRegistry const&);
    ScriptItemCustomComponentRegistry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptItemCustomComponentRegistry@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemCustomComponentRegistry() = default;

    // vIndex: 1, symbol:
    // ?tryRegisterComponent@ScriptItemCustomComponentRegistry@ScriptModuleMinecraft@@UEAA?AV?$Result@XUScriptItemCustomComponentAlreadyRegisteredError@ScriptModuleMinecraft@@UScriptItemCustomComponentReloadVersionError@2@UScriptItemCustomComponentReloadNewEventError@2@UScriptItemCustomComponentReloadNewComponentError@2@@Scripting@@AEAVWeakLifetimeScope@4@AEBVHashedString@@AEBUIScriptItemCustomComponentClosures@2@@Z
    virtual class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    tryRegisterComponent(class Scripting::WeakLifetimeScope&, class HashedString const&, struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&);

    // vIndex: 2, symbol: ?reset@ScriptItemCustomComponentRegistry@ScriptModuleMinecraft@@UEAAXXZ
    virtual void reset();

    // vIndex: 3, symbol:
    // ?getEventListener@ScriptItemCustomComponentRegistry@ScriptModuleMinecraft@@UEAAAEAVScriptDeferredEventListener@@XZ
    virtual class ScriptDeferredEventListener& getEventListener();

    // symbol:
    // ??0ScriptItemCustomComponentRegistry@ScriptModuleMinecraft@@QEAA@VItemRegistryRef@@$$QEAV?$unique_ptr@VIScriptItemCustomComponentSignalCollection@ScriptModuleMinecraft@@U?$default_delete@VIScriptItemCustomComponentSignalCollection@ScriptModuleMinecraft@@@std@@@std@@@Z
    MCAPI
    ScriptItemCustomComponentRegistry(class ItemRegistryRef, std::unique_ptr<class ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryRegisterItem@ScriptItemCustomComponentRegistry@ScriptModuleMinecraft@@AEAAXPEAVItem@@@Z
    MCAPI void _tryRegisterItem(class Item*);

    // symbol: ?_tryRegisterLoadedItems@ScriptItemCustomComponentRegistry@ScriptModuleMinecraft@@AEAAXXZ
    MCAPI void _tryRegisterLoadedItems();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
