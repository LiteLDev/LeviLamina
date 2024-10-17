#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // prevent constructor by default
    ScriptItemComponent& operator=(ScriptItemComponent const&);
    ScriptItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemComponent();

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI ScriptItemComponent(class ScriptModuleMinecraft::ScriptItemComponent const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemComponent> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptItemComponent const&);

    MCAPI void dtor$();

    MCAPI bool _isValid$() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
