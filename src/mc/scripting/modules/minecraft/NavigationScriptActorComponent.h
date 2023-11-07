#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class NavigationScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    NavigationScriptActorComponent& operator=(NavigationScriptActorComponent const&);
    NavigationScriptActorComponent(NavigationScriptActorComponent const&);
    NavigationScriptActorComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NavigationScriptActorComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~NavigationScriptActorComponent() = default;

    // vIndex: 2, symbol:
    // ?getIsAmphibious@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getIsAmphibious() const;

    // vIndex: 3, symbol:
    // ?getAvoidSun@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getAvoidSun() const;

    // vIndex: 4, symbol:
    // ?getCanPassDoors@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanPassDoors() const;

    // vIndex: 5, symbol:
    // ?getCanOpenDoors@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanOpenDoors() const;

    // vIndex: 6, symbol:
    // ?getCanOpenIronDoors@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanOpenIronDoors() const;

    // vIndex: 7, symbol:
    // ?getCanBreakDoors@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanBreakDoors() const;

    // vIndex: 8, symbol:
    // ?getAvoidWater@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getAvoidWater() const;

    // vIndex: 9, symbol:
    // ?getAvoidDamageBlocks@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getAvoidDamageBlocks() const;

    // vIndex: 10, symbol:
    // ?getCanFloat@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanFloat() const;

    // vIndex: 11, symbol:
    // ?getCanSink@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanSink() const;

    // vIndex: 12, symbol:
    // ?getCanPathOverWater@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanPathOverWater() const;

    // vIndex: 13, symbol:
    // ?getCanPathOverLava@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanPathOverLava() const;

    // vIndex: 14, symbol:
    // ?getCanWalkInLava@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanWalkInLava() const;

    // vIndex: 15, symbol:
    // ?getAvoidPortals@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getAvoidPortals() const;

    // vIndex: 16, symbol:
    // ?getCanWalk@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanWalk() const;

    // vIndex: 17, symbol:
    // ?getCanSwim@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanSwim() const;

    // vIndex: 18, symbol:
    // ?getCanBreach@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanBreach() const;

    // vIndex: 19, symbol:
    // ?getCanJump@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanJump() const;

    // vIndex: 20, symbol:
    // ?getCanPathFromAir@NavigationScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@_N$$V@Scripting@@XZ
    virtual class Scripting::Result<bool> getCanPathFromAir() const;

    // symbol:
    // ?bind@NavigationScriptActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VNavigationScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::NavigationScriptActorComponent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
