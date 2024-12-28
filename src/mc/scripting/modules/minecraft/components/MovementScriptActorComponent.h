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

class MovementScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3ce4cd;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementScriptActorComponent& operator=(MovementScriptActorComponent const&);
    MovementScriptActorComponent(MovementScriptActorComponent const&);
    MovementScriptActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MovementScriptActorComponent() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<float> getMaxTurn() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovementScriptActorComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id,
        ::Description* ActorDefinitionDescriptor::*descriptionMember
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::MovementScriptActorComponent> bind();
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
    MCAPI ::Scripting::Result_deprecated<float> $getMaxTurn() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
