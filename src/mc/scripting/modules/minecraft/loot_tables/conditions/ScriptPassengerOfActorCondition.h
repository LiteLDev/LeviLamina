#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemPassengerOfActorCondition;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPassengerOfActorCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootItemPassengerOfActorCondition const&> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPassengerOfActorCondition& operator=(ScriptPassengerOfActorCondition const&);
    ScriptPassengerOfActorCondition(ScriptPassengerOfActorCondition const&);
    ScriptPassengerOfActorCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::string getEntityType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
