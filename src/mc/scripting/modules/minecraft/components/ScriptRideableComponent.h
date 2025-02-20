#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class RideableDefinition;
struct SeatDescription;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRideableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::RideableComponent, ::RideableDefinition> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptRideableComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<bool> addPassenger(::ScriptModuleMinecraft::ScriptActor& scriptPassenger
    ) const;

    MCAPI ::Scripting::Result<void> ejectPassenger(::ScriptModuleMinecraft::ScriptActor& scriptPassenger) const;

    MCAPI ::Scripting::Result<void> ejectPassengers() const;

    MCAPI ::Scripting::Result_deprecated<int> getControllingSeat() const;

    MCAPI ::Scripting::Result_deprecated<bool> getCrouchingSkipInteract() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getFamilyTypes() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getInteractText() const;

    MCAPI ::Scripting::Result_deprecated<bool> getPassengerCanInteract() const;

    MCAPI ::Scripting::Result_deprecated<float> getPassengerMaxWidth() const;

    MCAPI ::Scripting::Result_deprecated<bool> getPullInEntities() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getRiders() const;

    MCAPI ::Scripting::Result_deprecated<int> getSeatCount() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::SeatDescription>> getSeats() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptRideableComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
