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
    // vIndex: 0
    virtual ~ScriptItemCustomComponentRegistry() = default;

    // vIndex: 1
    virtual class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentAlreadyRegisteredError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadVersionError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewEventError,
        struct ScriptModuleMinecraft::ScriptItemCustomComponentReloadNewComponentError>
    tryRegisterComponent(class Scripting::WeakLifetimeScope&, class HashedString const&, struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&);

    // vIndex: 2
    virtual void onReload();

    // vIndex: 3
    virtual class ScriptDeferredEventListener& getEventListener();

    MCAPI
    ScriptItemCustomComponentRegistry(class ItemRegistryRef, std::unique_ptr<class ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection>&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _tryRegisterItem(class Item*);

    MCAPI void _tryRegisterLoadedItems();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
