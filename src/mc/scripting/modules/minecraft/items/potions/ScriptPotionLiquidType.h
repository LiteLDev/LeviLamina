#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptPotionLiquidType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk80c14d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPotionLiquidType& operator=(ScriptPotionLiquidType const&);
    ScriptPotionLiquidType(ScriptPotionLiquidType const&);
    ScriptPotionLiquidType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPotionLiquidType(::ScriptModuleMinecraft::ScriptPotionLiquidType&&);

    MCAPI ::std::string getPotionLiquidTypeId() const;

    MCAPI ::ScriptModuleMinecraft::ScriptPotionLiquidType& operator=(::ScriptModuleMinecraft::ScriptPotionLiquidType&&);

    MCAPI ~ScriptPotionLiquidType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPotionLiquidType> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPotionLiquidType&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
