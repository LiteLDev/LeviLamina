#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockStateType {
public:
    // prevent constructor by default
    ScriptBlockStateType& operator=(ScriptBlockStateType const&);
    ScriptBlockStateType(ScriptBlockStateType const&);
    ScriptBlockStateType();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockStateType> bind();

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockStateType>
    getOrCreateHandle(class Scripting::WeakLifetimeScope const& scope, class BlockState const& blockState);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _fillValidValues();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
