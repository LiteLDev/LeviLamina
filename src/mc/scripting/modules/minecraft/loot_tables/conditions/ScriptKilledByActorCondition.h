#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemKilledByActorCondition;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptKilledByActorCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootItemKilledByActorCondition const&> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptKilledByActorCondition& operator=(ScriptKilledByActorCondition const&);
    ScriptKilledByActorCondition(ScriptKilledByActorCondition const&);
    ScriptKilledByActorCondition();

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
