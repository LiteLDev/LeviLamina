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
    // vIndex: 0
    virtual ~NavigationScriptActorComponent() = default;

    // vIndex: 2
    virtual class Scripting::Result<bool> getIsAmphibious() const;

    // vIndex: 3
    virtual class Scripting::Result<bool> getAvoidSun() const;

    // vIndex: 4
    virtual class Scripting::Result<bool> getCanPassDoors() const;

    // vIndex: 5
    virtual class Scripting::Result<bool> getCanOpenDoors() const;

    // vIndex: 6
    virtual class Scripting::Result<bool> getCanOpenIronDoors() const;

    // vIndex: 7
    virtual class Scripting::Result<bool> getCanBreakDoors() const;

    // vIndex: 8
    virtual class Scripting::Result<bool> getAvoidWater() const;

    // vIndex: 9
    virtual class Scripting::Result<bool> getAvoidDamageBlocks() const;

    // vIndex: 10
    virtual class Scripting::Result<bool> getCanFloat() const;

    // vIndex: 11
    virtual class Scripting::Result<bool> getCanSink() const;

    // vIndex: 12
    virtual class Scripting::Result<bool> getCanPathOverWater() const;

    // vIndex: 13
    virtual class Scripting::Result<bool> getCanPathOverLava() const;

    // vIndex: 14
    virtual class Scripting::Result<bool> getCanWalkInLava() const;

    // vIndex: 15
    virtual class Scripting::Result<bool> getAvoidPortals() const;

    // vIndex: 16
    virtual class Scripting::Result<bool> getCanWalk() const;

    // vIndex: 17
    virtual class Scripting::Result<bool> getCanSwim() const;

    // vIndex: 18
    virtual class Scripting::Result<bool> getCanBreach() const;

    // vIndex: 19
    virtual class Scripting::Result<bool> getCanJump() const;

    // vIndex: 20
    virtual class Scripting::Result<bool> getCanPathFromAir() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::NavigationScriptActorComponent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
