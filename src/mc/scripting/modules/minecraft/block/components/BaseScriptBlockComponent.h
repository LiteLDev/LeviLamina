#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // prevent constructor by default
    BaseScriptBlockComponent& operator=(BaseScriptBlockComponent const&);
    BaseScriptBlockComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseScriptBlockComponent();

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI BaseScriptBlockComponent(class ScriptModuleMinecraft::BaseScriptBlockComponent const&);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock> getBlock() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::BaseScriptBlockComponent> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI bool _isValid$() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
