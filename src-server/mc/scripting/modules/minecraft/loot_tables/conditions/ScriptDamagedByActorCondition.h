#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDamagedByActorCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk911272;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDamagedByActorCondition& operator=(ScriptDamagedByActorCondition const&);
    ScriptDamagedByActorCondition(ScriptDamagedByActorCondition const&);
    ScriptDamagedByActorCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getEntityType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
