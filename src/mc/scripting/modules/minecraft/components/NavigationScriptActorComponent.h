#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class NavigationScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1c9dd4;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationScriptActorComponent& operator=(NavigationScriptActorComponent const&);
    NavigationScriptActorComponent(NavigationScriptActorComponent const&);
    NavigationScriptActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NavigationScriptActorComponent() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<bool> getIsAmphibious() const;

    virtual ::Scripting::Result_deprecated<bool> getAvoidSun() const;

    virtual ::Scripting::Result_deprecated<bool> getCanPassDoors() const;

    virtual ::Scripting::Result_deprecated<bool> getCanOpenDoors() const;

    virtual ::Scripting::Result_deprecated<bool> getCanOpenIronDoors() const;

    virtual ::Scripting::Result_deprecated<bool> getCanBreakDoors() const;

    virtual ::Scripting::Result_deprecated<bool> getAvoidWater() const;

    virtual ::Scripting::Result_deprecated<bool> getAvoidDamageBlocks() const;

    virtual ::Scripting::Result_deprecated<bool> getCanFloat() const;

    virtual ::Scripting::Result_deprecated<bool> getCanSink() const;

    virtual ::Scripting::Result_deprecated<bool> getCanPathOverWater() const;

    virtual ::Scripting::Result_deprecated<bool> getCanPathOverLava() const;

    virtual ::Scripting::Result_deprecated<bool> getCanWalkInLava() const;

    virtual ::Scripting::Result_deprecated<bool> getAvoidPortals() const;

    virtual ::Scripting::Result_deprecated<bool> getCanWalk() const;

    virtual ::Scripting::Result_deprecated<bool> getCanSwim() const;

    virtual ::Scripting::Result_deprecated<bool> getCanBreach() const;

    virtual ::Scripting::Result_deprecated<bool> getCanJump() const;

    virtual ::Scripting::Result_deprecated<bool> getCanPathFromAir() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> $getIsAmphibious() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getAvoidSun() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanPassDoors() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanOpenDoors() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanOpenIronDoors() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanBreakDoors() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getAvoidWater() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getAvoidDamageBlocks() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanFloat() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanSink() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanPathOverWater() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanPathOverLava() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanWalkInLava() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getAvoidPortals() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanWalk() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanSwim() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanBreach() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanJump() const;

    MCNAPI ::Scripting::Result_deprecated<bool> $getCanPathFromAir() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
