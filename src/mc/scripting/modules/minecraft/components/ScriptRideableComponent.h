#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
struct SeatDescription;
namespace Scripting { struct ClassBinding; }
namespace SharedTypes::v1_26_60 { struct RideableComponentDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRideableComponent
: public ::ScriptModuleMinecraft::
      ECSScriptActorComponent<::RideableComponent, ::SharedTypes::v1_26_60::RideableComponentDefinition> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> getControllingSeat() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getCrouchingSkipInteract() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getFamilyTypes() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getPassengerCanInteract() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getPullInEntities() const;

    MCNAPI ::Scripting::Result_deprecated<int> getSeatCount() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::SeatDescription>> getSeats() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
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
