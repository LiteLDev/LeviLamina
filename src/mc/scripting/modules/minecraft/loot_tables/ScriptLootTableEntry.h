#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class LootPoolEntry;
namespace ScriptModuleMinecraft { class ScriptLootTable; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootTableEntry : public ::ScriptModuleMinecraft::ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkab24c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootTableEntry& operator=(ScriptLootTableEntry const&);
    ScriptLootTableEntry(ScriptLootTableEntry const&);
    ScriptLootTableEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::LootPoolEntry const& _getEntry() const /*override*/;

    // vIndex: 0
    virtual ~ScriptLootTableEntry() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootTable> const getTable() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LootPoolEntry const& $_getEntry() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
