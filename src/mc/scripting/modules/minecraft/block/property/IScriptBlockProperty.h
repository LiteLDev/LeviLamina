#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockProperty {
public:
    // prevent constructor by default
    IScriptBlockProperty& operator=(IScriptBlockProperty const&);
    IScriptBlockProperty(IScriptBlockProperty const&);
    IScriptBlockProperty();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptBlockProperty();

    MCAPI IScriptBlockProperty(class ScriptModuleMinecraft::IScriptBlockProperty&&);

    MCAPI IScriptBlockProperty(
        std::string                                                                                   name,
        class BlockState const&                                                                       blockState,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI class ScriptModuleMinecraft::IScriptBlockProperty&
    operator=(class ScriptModuleMinecraft::IScriptBlockProperty&&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::IScriptBlockProperty> bindV010();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class ScriptModuleMinecraft::IScriptBlockProperty&&);

    MCAPI void* ctor$(
        std::string                                                                                   name,
        class BlockState const&                                                                       blockState,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
