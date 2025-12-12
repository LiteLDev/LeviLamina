#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/loot_tables/functions/ScriptLootItemFunction.h"

// auto generated forward declare list
// clang-format off
class LootItemFunction;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSetItemDataFunction : public ::ScriptModuleMinecraft::ScriptLootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk804e92;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSetItemDataFunction& operator=(ScriptSetItemDataFunction const&);
    ScriptSetItemDataFunction(ScriptSetItemDataFunction const&);
    ScriptSetItemDataFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction const& _getFunction() const /*override*/;

    virtual ~ScriptSetItemDataFunction() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LootItemFunction const& $_getFunction() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
