#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class LootPoolEntry;
class LootTableEntry;
namespace ScriptModuleMinecraft { class ScriptLootTable; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootTableEntry : public ::ScriptModuleMinecraft::ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LootTableEntry const&> mLootTableEntry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootTableEntry& operator=(ScriptLootTableEntry const&);
    ScriptLootTableEntry(ScriptLootTableEntry const&);
    ScriptLootTableEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootPoolEntry const& _getEntry() const /*override*/;

    virtual ~ScriptLootTableEntry() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootTable> const getTable() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::LootPoolEntry const& $_getEntry() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
