#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRandomDifficultyChanceCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk604027;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRandomDifficultyChanceCondition& operator=(ScriptRandomDifficultyChanceCondition const&);
    ScriptRandomDifficultyChanceCondition(ScriptRandomDifficultyChanceCondition const&);
    ScriptRandomDifficultyChanceCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<float> getChances() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
