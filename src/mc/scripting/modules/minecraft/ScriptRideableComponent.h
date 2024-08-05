#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
struct SeatDescription;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRideableComponent {
public:
    // prevent constructor by default
    ScriptRideableComponent& operator=(ScriptRideableComponent const&);
    ScriptRideableComponent(ScriptRideableComponent const&);
    ScriptRideableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptRideableComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptRideableComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    MCAPI class Scripting::Result<bool> addPassenger(class ScriptModuleMinecraft::ScriptActor&) const;

    MCAPI class Scripting::Result<void> ejectPassenger(class ScriptModuleMinecraft::ScriptActor&) const;

    MCAPI class Scripting::Result<void> ejectPassengers() const;

    MCAPI class Scripting::Result<int> getControllingSeat() const;

    MCAPI class Scripting::Result<bool> getCrouchingSkipInteract() const;

    MCAPI class Scripting::Result<std::vector<std::string>> getFamilyTypes() const;

    MCAPI class Scripting::Result<std::string> getInteractText() const;

    MCAPI class Scripting::Result<bool> getPassengerCanInteract() const;

    MCAPI class Scripting::Result<float> getPassengerMaxWidth() const;

    MCAPI class Scripting::Result<bool> getPullInEntities() const;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getRiders() const;

    MCAPI class Scripting::Result<int> getSeatCount() const;

    MCAPI class Scripting::Result<std::vector<struct SeatDescription>> getSeats() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptRideableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
