#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
struct Description;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class NavigationScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Description* ::ActorDefinitionDescriptor::*> mDescriptionMember;
    // NOLINTEND

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
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<bool> $getIsAmphibious() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getAvoidSun() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanPassDoors() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanOpenDoors() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanOpenIronDoors() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanBreakDoors() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getAvoidWater() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getAvoidDamageBlocks() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanFloat() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanSink() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanPathOverWater() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanPathOverLava() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanWalkInLava() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getAvoidPortals() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanWalk() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanSwim() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanBreach() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanJump() const;

    MCAPI ::Scripting::Result_deprecated<bool> $getCanPathFromAir() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
