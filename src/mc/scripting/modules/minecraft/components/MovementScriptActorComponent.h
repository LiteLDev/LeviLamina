#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class WeakEntityRef;
struct MoveControlDescription;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class MovementScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MoveControlDescription const* (*)(::ActorDefinitionDescriptor const&)>
        mDescriptionGetter;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementScriptActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MovementScriptActorComponent() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<float> getMaxTurn() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovementScriptActorComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id,
        ::MoveControlDescription const* (*descriptionGetter)(::ActorDefinitionDescriptor const&)
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id,
        ::MoveControlDescription const* (*descriptionGetter)(::ActorDefinitionDescriptor const&)
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<float> $getMaxTurn() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
