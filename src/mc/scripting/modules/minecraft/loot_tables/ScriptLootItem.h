#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class LootItem;
class LootPoolEntry;
namespace ScriptModuleMinecraft { class ScriptLootItemCondition; }
namespace ScriptModuleMinecraft { class ScriptLootItemFunction; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootItem : public ::ScriptModuleMinecraft::ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootItem const&> mLootItem;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootItemCondition>>>>
        mConditions;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootItemFunction>>>>
        mFunctions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootItem& operator=(ScriptLootItem const&);
    ScriptLootItem(ScriptLootItem const&);
    ScriptLootItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootPoolEntry const& _getEntry() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
