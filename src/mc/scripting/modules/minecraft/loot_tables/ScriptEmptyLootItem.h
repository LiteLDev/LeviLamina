#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class LootPoolEntry;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEmptyLootItem : public ::ScriptModuleMinecraft::ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk795f34;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEmptyLootItem& operator=(ScriptEmptyLootItem const&);
    ScriptEmptyLootItem(ScriptEmptyLootItem const&);
    ScriptEmptyLootItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootPoolEntry const& _getEntry() const /*override*/;

    virtual ~ScriptEmptyLootItem() /*override*/ = default;
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
