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
    MCNAPI ::Scripting::Result_deprecated<bool> addPassenger(::ScriptModuleMinecraft::ScriptActor& scriptPassenger
    ) const;

    MCNAPI ::Scripting::Result<void> ejectPassenger(::ScriptModuleMinecraft::ScriptActor& scriptPassenger) const;

    MCNAPI ::Scripting::Result<void> ejectPassengers() const;

    MCNAPI ::Scripting::Result_deprecated<int> getControllingSeat() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getCrouchingSkipInteract() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getFamilyTypes() const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getInteractText() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getPassengerCanInteract() const;

    MCNAPI ::Scripting::Result_deprecated<float> getPassengerMaxWidth() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getPullInEntities() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getRiders() const;

    MCNAPI ::Scripting::Result_deprecated<int> getSeatCount() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::SeatDescription>> getSeats() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptRideableComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
