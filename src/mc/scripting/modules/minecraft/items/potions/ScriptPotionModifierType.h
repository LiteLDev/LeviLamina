#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

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
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
