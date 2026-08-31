#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class LootItemCondition;
namespace ScriptModuleMinecraft { class ScriptLootItemCondition; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft::LootTableHelpers {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootItemCondition>>
makeScriptLootItemConditions(
    ::Scripting::WeakLifetimeScope const&                        scope,
    ::std::vector<::std::unique_ptr<::LootItemCondition>> const& conditions
);
// NOLINTEND

} // namespace ScriptModuleMinecraft::LootTableHelpers
