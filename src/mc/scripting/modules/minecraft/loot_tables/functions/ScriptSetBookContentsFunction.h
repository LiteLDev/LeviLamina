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

class ScriptSetBookContentsFunction : public ::ScriptModuleMinecraft::ScriptLootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke70c01;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSetBookContentsFunction& operator=(ScriptSetBookContentsFunction const&);
    ScriptSetBookContentsFunction(ScriptSetBookContentsFunction const&);
    ScriptSetBookContentsFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction const& _getFunction() const /*override*/;

    virtual ~ScriptSetBookContentsFunction() /*override*/ = default;
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
