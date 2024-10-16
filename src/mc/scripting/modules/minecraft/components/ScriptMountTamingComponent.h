#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMountTamingComponent {
public:
    // prevent constructor by default
    ScriptMountTamingComponent& operator=(ScriptMountTamingComponent const&);
    ScriptMountTamingComponent(ScriptMountTamingComponent const&);
    ScriptMountTamingComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMountTamingComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptMountTamingComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    MCAPI class Scripting::Result<bool> isTamed() const;

    MCAPI class Scripting::Result<bool> isTamedToPlayer() const;

    MCAPI class Scripting::Result<void> setTamed(bool showParticles) const;

    MCAPI class Scripting::Result<bool>
    setTamedToPlayer(bool showParticles, class ScriptModuleMinecraft::ScriptPlayer& scriptPlayer) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    tamedToPlayer() const;

    MCAPI class Scripting::Result<std::optional<std::string>> tamedToPlayerId() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMountTamingComponent>
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
