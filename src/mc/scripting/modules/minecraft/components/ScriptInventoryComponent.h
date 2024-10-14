#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptInventoryComponentContainer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInventoryComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    ScriptInventoryComponent& operator=(ScriptInventoryComponent const&);
    ScriptInventoryComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptInventoryComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptInventoryComponent(class ScriptModuleMinecraft::ScriptInventoryComponent const&);

    MCAPI class Scripting::Result<int> getAdditionalSlotsPerStrength() const;

    MCAPI class Scripting::Result<bool> getCanBeSiphonedFrom() const;

    MCAPI class Scripting::Result<std::string> getContainerType() const;

    MCAPI class Scripting::Result<int> getInventorySize() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerWrapper>>>
    getOrCreateContainer();

    MCAPI class Scripting::Result<
        class Scripting::WeakTypedObjectHandle<class ScriptModuleMinecraft::ScriptInventoryComponentContainer>>
    getOrCreateContainerV010();

    MCAPI class Scripting::Result<bool> getPrivate() const;

    MCAPI class Scripting::Result<bool> getRestrictToOwner() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptInventoryComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _isValid$() const;

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
