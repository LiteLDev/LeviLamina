#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptPotionModifierType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb9968f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionModifierType& operator=(ScriptPotionModifierType const&);
    ScriptPotionModifierType(ScriptPotionModifierType const&);
    ScriptPotionModifierType();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPotionModifierType> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
