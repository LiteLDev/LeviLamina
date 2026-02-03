#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemDamagedByActorCondition;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDamagedByActorCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootItemDamagedByActorCondition const&> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDamagedByActorCondition& operator=(ScriptDamagedByActorCondition const&);
    ScriptDamagedByActorCondition(ScriptDamagedByActorCondition const&);
    ScriptDamagedByActorCondition();

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
