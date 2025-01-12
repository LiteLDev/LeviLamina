#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptPotionEffectType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke17d2a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionEffectType& operator=(ScriptPotionEffectType const&);
    ScriptPotionEffectType(ScriptPotionEffectType const&);
    ScriptPotionEffectType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPotionEffectType(::ScriptModuleMinecraft::ScriptPotionEffectType&&);

    MCAPI ::std::string getPotionEffectTypeId() const;

    MCFOLD ::ScriptModuleMinecraft::ScriptPotionEffectType&
    operator=(::ScriptModuleMinecraft::ScriptPotionEffectType&&);

    MCAPI ~ScriptPotionEffectType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPotionEffectType> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptPotionEffectType&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
