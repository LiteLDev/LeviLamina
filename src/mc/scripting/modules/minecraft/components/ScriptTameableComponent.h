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
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTameableComponent {
public:
    // prevent constructor by default
    ScriptTameableComponent& operator=(ScriptTameableComponent const&);
    ScriptTameableComponent(ScriptTameableComponent const&);
    ScriptTameableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptTameableComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptTameableComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    MCAPI class Scripting::Result<float> getProbability() const;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>>
    getTameItems() const;

    MCAPI class Scripting::Result<std::vector<std::string>> getTameItems_010() const;

    MCAPI class Scripting::Result<bool> isTamed() const;

    MCAPI class Scripting::Result<bool> tame(class ScriptModuleMinecraft::ScriptPlayer& scriptPlayer) const;

    MCAPI class Scripting::Result<bool> tame_010() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>>>
    tamedToPlayer() const;

    MCAPI class Scripting::Result<std::optional<std::string>> tamedToPlayerId() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptTameableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
