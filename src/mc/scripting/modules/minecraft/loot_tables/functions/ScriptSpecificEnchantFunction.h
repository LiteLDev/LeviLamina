#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/loot_tables/functions/ScriptLootItemFunction.h"

// auto generated forward declare list
// clang-format off
class LootItemFunction;
namespace ScriptModuleMinecraft { class ScriptEnchantInfo; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSpecificEnchantFunction : public ::ScriptModuleMinecraft::ScriptLootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7c63b5;
    ::ll::UntypedStorage<8, 32> mUnk8706ef;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSpecificEnchantFunction& operator=(ScriptSpecificEnchantFunction const&);
    ScriptSpecificEnchantFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LootItemFunction const& _getFunction() const /*override*/;

    virtual ~ScriptSpecificEnchantFunction() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSpecificEnchantFunction(::ScriptModuleMinecraft::ScriptSpecificEnchantFunction const&);

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEnchantInfo>>
    getEnchantInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSpecificEnchantFunction const&);
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
