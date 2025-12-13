#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/loot_tables/ScriptLootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class LootPoolEntry;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptLootItemFunction; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootItem : public ::ScriptModuleMinecraft::ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1c74a4;
    ::ll::UntypedStorage<8, 32> mUnk746251;
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

    virtual ~ScriptLootItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootItemFunction>>
    getFunctions();

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getName() const;
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
