#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemActorKilledCondition;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorKilledCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootItemActorKilledCondition const&> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorKilledCondition& operator=(ScriptActorKilledCondition const&);
    ScriptActorKilledCondition(ScriptActorKilledCondition const&);
    ScriptActorKilledCondition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
