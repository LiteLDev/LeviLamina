#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class EmptyLootItem;
class LootPoolEntry;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEmptyLootItem : public ::ScriptModuleMinecraft::ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EmptyLootItem const&> mEmptyLootItem;
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
