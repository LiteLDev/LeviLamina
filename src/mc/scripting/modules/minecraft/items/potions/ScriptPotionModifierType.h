#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

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
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptPotionModifierType&
    operator=(::ScriptModuleMinecraft::ScriptPotionModifierType&&);

    MCAPI ~ScriptPotionModifierType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPotionModifierType> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
