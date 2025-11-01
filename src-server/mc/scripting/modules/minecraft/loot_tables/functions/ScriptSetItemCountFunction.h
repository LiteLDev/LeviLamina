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

class ScriptSetItemCountFunction : public ::ScriptModuleMinecraft::ScriptLootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke5e47e;
    ::ll::UntypedStorage<8, 8>  mUnk7d79a4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSetItemCountFunction& operator=(ScriptSetItemCountFunction const&);
    ScriptSetItemCountFunction(ScriptSetItemCountFunction const&);
    ScriptSetItemCountFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::LootItemFunction const& _getFunction() const /*override*/;

    // vIndex: 0
    virtual ~ScriptSetItemCountFunction() /*override*/ = default;
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
