#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class BreathableComponent;
class BreathableDefinition;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBreathableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::BreathableComponent, ::BreathableDefinition> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getBreatheBlocks() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getBreathesAir() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getBreathesLava() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getBreathesSolids() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getBreathesWater() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getCanBreathe() const;

    MCNAPI ::Scripting::Result_deprecated<bool> getGeneratesBubbles() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getNonBreatheBlocks() const;

    MCNAPI ::Scripting::Result_deprecated<int> getSuffocateTime() const;

    MCNAPI ::Scripting::Result_deprecated<int> getTotalSupply() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
