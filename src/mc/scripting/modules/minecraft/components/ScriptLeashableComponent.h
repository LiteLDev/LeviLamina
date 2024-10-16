#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLeashableComponent {
public:
    // prevent constructor by default
    ScriptLeashableComponent& operator=(ScriptLeashableComponent const&);
    ScriptLeashableComponent(ScriptLeashableComponent const&);
    ScriptLeashableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptLeashableComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptLeashableComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    MCAPI class Scripting::Result<float> getSoftDistance() const;

    MCAPI class Scripting::Result<void> leash(class ScriptModuleMinecraft::ScriptActor& scriptLeashHolder) const;

    MCAPI class Scripting::Result<void> unleash() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptLeashableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void*
    ctor$(class WeakEntityRef const& entity, class Scripting::WeakLifetimeScope const& scope, std::string const& id);

    MCAPI bool _isValid$() const;

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
