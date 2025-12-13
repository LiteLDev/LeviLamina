#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class LootPoolEntry;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk33c303;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootPoolEntry& operator=(ScriptLootPoolEntry const&);
    ScriptLootPoolEntry(ScriptLootPoolEntry const&);
    ScriptLootPoolEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptLootPoolEntry() = default;

    virtual ::LootPoolEntry const& _getEntry() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootPoolEntry>>
    getSubTable() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
