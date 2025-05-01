#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

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
    MCNAPI ::std::string getPotionLiquidTypeId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPotionLiquidType> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
