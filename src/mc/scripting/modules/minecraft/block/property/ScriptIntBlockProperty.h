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

class ScriptIntBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // prevent constructor by default
    ScriptIntBlockProperty& operator=(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIntBlockProperty();

    MCAPI ScriptIntBlockProperty(class ScriptModuleMinecraft::ScriptIntBlockProperty&& rhs);

    MCAPI ScriptIntBlockProperty(
        std::string                                                                                   name,
        class BlockState const&                                                                       blockState,
        std::vector<int>                                                                              validValues,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI class Scripting::Result<int> getState() const;

    MCAPI class ScriptModuleMinecraft::ScriptIntBlockProperty&
    operator=(class ScriptModuleMinecraft::ScriptIntBlockProperty&& rhs);

    MCAPI class Scripting::Result<void> setState(int state);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptIntBlockProperty> bind();

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

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
