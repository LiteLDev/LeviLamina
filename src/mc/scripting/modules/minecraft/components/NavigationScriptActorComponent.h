#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
struct Description;
namespace Scripting { class WeakLifetimeScope; }
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
    // vIndex: 0
    virtual ~NavigationScriptActorComponent() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<bool> getIsAmphibious() const;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<bool> getAvoidSun() const;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<bool> getCanPassDoors() const;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<bool> getCanOpenDoors() const;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<bool> getCanOpenIronDoors() const;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<bool> getCanBreakDoors() const;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<bool> getAvoidWater() const;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<bool> getAvoidDamageBlocks() const;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<bool> getCanFloat() const;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<bool> getCanSink() const;

    // vIndex: 12
    virtual ::Scripting::Result_deprecated<bool> getCanPathOverWater() const;

    // vIndex: 13
    virtual ::Scripting::Result_deprecated<bool> getCanPathOverLava() const;

    // vIndex: 14
    virtual ::Scripting::Result_deprecated<bool> getCanWalkInLava() const;

    // vIndex: 15
    virtual ::Scripting::Result_deprecated<bool> getAvoidPortals() const;

    // vIndex: 16
    virtual ::Scripting::Result_deprecated<bool> getCanWalk() const;

    // vIndex: 17
    virtual ::Scripting::Result_deprecated<bool> getCanSwim() const;

    // vIndex: 18
    virtual ::Scripting::Result_deprecated<bool> getCanBreach() const;

    // vIndex: 19
    virtual ::Scripting::Result_deprecated<bool> getCanJump() const;

    // vIndex: 20
    virtual ::Scripting::Result_deprecated<bool> getCanPathFromAir() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NavigationScriptActorComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id,
        ::Description* ActorDefinitionDescriptor::*descriptionMember
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::NavigationScriptActorComponent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id,
        ::Description* ActorDefinitionDescriptor::*descriptionMember
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
