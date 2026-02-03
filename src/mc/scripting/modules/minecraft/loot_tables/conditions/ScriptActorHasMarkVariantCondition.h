#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemActorHasMarkVariantCondition;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorHasMarkVariantCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootItemActorHasMarkVariantCondition const&> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHasMarkVariantCondition& operator=(ScriptActorHasMarkVariantCondition const&);
    ScriptActorHasMarkVariantCondition(ScriptActorHasMarkVariantCondition const&);
    ScriptActorHasMarkVariantCondition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
