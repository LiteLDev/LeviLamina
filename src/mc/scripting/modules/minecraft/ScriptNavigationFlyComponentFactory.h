#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/IComponentFactory.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class IComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptNavigationFlyComponentFactory : public ::ScriptModuleMinecraft::IComponentFactory {
public:
    // prevent constructor by default
    ScriptNavigationFlyComponentFactory& operator=(ScriptNavigationFlyComponentFactory const&);
    ScriptNavigationFlyComponentFactory(ScriptNavigationFlyComponentFactory const&);
    ScriptNavigationFlyComponentFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptNavigationFlyComponentFactory@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptNavigationFlyComponentFactory() = default;

    // vIndex: 1, symbol:
    // ?createComponent@ScriptNavigationFlyComponentFactory@ScriptModuleMinecraft@@UEAA?AV?$StrongTypedObjectHandle@VScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@VWeakEntityRef@@AEBVWeakLifetimeScope@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorComponent>
    createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);

    // vIndex: 2, symbol:
    // ?hasComponent@ScriptNavigationFlyComponentFactory@ScriptModuleMinecraft@@UEBA_NVWeakEntityRef@@@Z
    virtual bool hasComponent(class WeakEntityRef) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
