#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRandomChanceWithSpecialModifierCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd586fb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRandomChanceWithSpecialModifierCondition& operator=(ScriptRandomChanceWithSpecialModifierCondition const&);
    ScriptRandomChanceWithSpecialModifierCondition(ScriptRandomChanceWithSpecialModifierCondition const&);
    ScriptRandomChanceWithSpecialModifierCondition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
