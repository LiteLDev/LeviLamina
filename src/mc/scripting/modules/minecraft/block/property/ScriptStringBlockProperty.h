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

class ScriptStringBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // prevent constructor by default
    ScriptStringBlockProperty& operator=(ScriptStringBlockProperty const&);
    ScriptStringBlockProperty(ScriptStringBlockProperty const&);
    ScriptStringBlockProperty();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptStringBlockProperty();

    MCAPI ScriptStringBlockProperty(class ScriptModuleMinecraft::ScriptStringBlockProperty&& rhs);

    MCAPI ScriptStringBlockProperty(
        std::string                                                                                   name,
        class BlockState const&                                                                       blockState,
        std::vector<std::string>                                                                      validValues,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI class Scripting::Result<std::string> getState() const;

    MCAPI class ScriptModuleMinecraft::ScriptStringBlockProperty&
    operator=(class ScriptModuleMinecraft::ScriptStringBlockProperty&& rhs);

    MCAPI class Scripting::Result<void> setState(std::string state);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStringBlockProperty> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class ScriptModuleMinecraft::ScriptStringBlockProperty&& rhs);

    MCAPI void* ctor$(
        std::string                                                                                   name,
        class BlockState const&                                                                       blockState,
        std::vector<std::string>                                                                      validValues,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
