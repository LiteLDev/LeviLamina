#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class BreathableComponent;
class BreathableDefinition;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
namespace Scripting { struct PropertyOutOfBoundsError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBreathableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::BreathableComponent, ::BreathableDefinition> {
public:
    // prevent constructor by default
    ScriptBreathableComponent& operator=(ScriptBreathableComponent const&);
    ScriptBreathableComponent(ScriptBreathableComponent const&);
    ScriptBreathableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBreathableComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBreathableComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id
    );

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

    MCAPI ::Scripting::Result<void, ::Scripting::Error, ::Scripting::PropertyOutOfBoundsError> setAirSupply(short value
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBreathableComponent>
    bind(::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::WeakEntityRef const& entity, ::Scripting::WeakLifetimeScope const& scope, ::std::string const& id);
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
