#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class BreathableComponent;
class BreathableDefinition;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBreathableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::BreathableComponent, ::BreathableDefinition> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBreathableComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<short> getAirSupply() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getBreatheBlocks() const;

    MCAPI ::Scripting::Result_deprecated<bool> getBreathesAir() const;

    MCAPI ::Scripting::Result_deprecated<bool> getBreathesLava() const;

    MCAPI ::Scripting::Result_deprecated<bool> getBreathesSolids() const;

    MCAPI ::Scripting::Result_deprecated<bool> getBreathesWater() const;

    MCAPI ::Scripting::Result_deprecated<bool> getCanBreathe() const;

    MCAPI ::Scripting::Result_deprecated<bool> getGeneratesBubbles() const;

    MCAPI ::Scripting::Result_deprecated<float> getInhaleTime() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getNonBreatheBlocks() const;

    MCAPI ::Scripting::Result_deprecated<int> getSuffocateTime() const;

    MCAPI ::Scripting::Result_deprecated<int> getTotalSupply() const;

    MCAPI ::Scripting::Result_deprecated<void> setAirSupply(short value) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
