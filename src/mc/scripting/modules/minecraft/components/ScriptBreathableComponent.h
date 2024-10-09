#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBreathableComponent {
public:
    // prevent constructor by default
    ScriptBreathableComponent& operator=(ScriptBreathableComponent const&);
    ScriptBreathableComponent(ScriptBreathableComponent const&);
    ScriptBreathableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBreathableComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptBreathableComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getBreatheBlocks() const;

    MCAPI class Scripting::Result<bool> getBreathesAir() const;

    MCAPI class Scripting::Result<bool> getBreathesLava() const;

    MCAPI class Scripting::Result<bool> getBreathesSolids() const;

    MCAPI class Scripting::Result<bool> getBreathesWater() const;

    MCAPI class Scripting::Result<bool> getGeneratesBubbles() const;

    MCAPI class Scripting::Result<float> getInhaleTime() const;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getNonBreatheBlocks() const;

    MCAPI class Scripting::Result<int> getSuffocateTime() const;

    MCAPI class Scripting::Result<int> getTotalSupply() const;

    MCAPI class Scripting::Result<void> setAirSupply(short value) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBreathableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
