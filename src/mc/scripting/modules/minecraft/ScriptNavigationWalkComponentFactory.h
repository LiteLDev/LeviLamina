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

class ScriptNavigationWalkComponentFactory : public ::ScriptModuleMinecraft::IComponentFactory {
public:
    // prevent constructor by default
    ScriptNavigationWalkComponentFactory& operator=(ScriptNavigationWalkComponentFactory const&);
    ScriptNavigationWalkComponentFactory(ScriptNavigationWalkComponentFactory const&);
    ScriptNavigationWalkComponentFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptNavigationWalkComponentFactory@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptNavigationWalkComponentFactory() = default;

    // vIndex: 1, symbol:
    // ?createComponent@ScriptNavigationWalkComponentFactory@ScriptModuleMinecraft@@UEAA?AV?$StrongTypedObjectHandle@VScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@VWeakEntityRef@@AEBVWeakLifetimeScope@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorComponent>
    createComponent(class WeakEntityRef entity, class Scripting::WeakLifetimeScope const& scope, std::string const& id);

    // vIndex: 2, symbol:
    // ?hasComponent@ScriptNavigationWalkComponentFactory@ScriptModuleMinecraft@@UEBA_NVWeakEntityRef@@@Z
    virtual bool hasComponent(class WeakEntityRef entity) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
