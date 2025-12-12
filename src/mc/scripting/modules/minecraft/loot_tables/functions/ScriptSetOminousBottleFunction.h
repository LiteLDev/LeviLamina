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

class ScriptSetOminousBottleFunction : public ::ScriptModuleMinecraft::ScriptLootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk79b586;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSetOminousBottleFunction& operator=(ScriptSetOminousBottleFunction const&);
    ScriptSetOminousBottleFunction(ScriptSetOminousBottleFunction const&);
    ScriptSetOminousBottleFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction const& _getFunction() const /*override*/;

    virtual ~ScriptSetOminousBottleFunction() /*override*/ = default;
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
