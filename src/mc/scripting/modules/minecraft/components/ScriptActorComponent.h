#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk62f2d0;
    ::ll::UntypedStorage<8, 32> mUnkc4b3d3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorComponent& operator=(ScriptActorComponent const&);
    ScriptActorComponent(ScriptActorComponent const&);
    ScriptActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptActorComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& context,
        ::std::string const&                  id
    );

    MCAPI ::Scripting::Error _functionError(::std::string_view functionName) const;

    MCAPI ::Scripting::Error _getPropertyError(::std::string_view propertyName) const;

    MCAPI ::Scripting::Error _setPropertyError(::std::string_view propertyName) const;

    MCAPI ::Actor* _tryGetOwner() const;

    MCAPI ::Mob* _tryGetOwnerAsMob() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> getEntity() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorComponent> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorComponent> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::WeakEntityRef const& entity, ::Scripting::WeakLifetimeScope const& context, ::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
