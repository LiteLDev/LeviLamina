#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/block/property/IScriptBlockProperty.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBoolBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // prevent constructor by default
    ScriptBoolBlockProperty& operator=(ScriptBoolBlockProperty const&);
    ScriptBoolBlockProperty(ScriptBoolBlockProperty const&);
    ScriptBoolBlockProperty();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBoolBlockProperty();

    MCAPI ScriptBoolBlockProperty(class ScriptModuleMinecraft::ScriptBoolBlockProperty&& rhs);

    MCAPI ScriptBoolBlockProperty(
        std::string                                                                                   name,
        class BlockState const&                                                                       blockState,
        std::vector<bool>                                                                             validValues,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI class Scripting::Result<bool> getState() const;

    MCAPI class ScriptModuleMinecraft::ScriptBoolBlockProperty&
    operator=(class ScriptModuleMinecraft::ScriptBoolBlockProperty&& rhs);

    MCAPI class Scripting::Result<void> setState(bool state);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBoolBlockProperty> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::string                                                                                   name,
        class BlockState const&                                                                       blockState,
        std::vector<bool>                                                                             validValues,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptBoolBlockProperty&& rhs);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
