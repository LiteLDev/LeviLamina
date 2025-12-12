#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class LootItemFunction;
namespace ScriptModuleMinecraft { class ScriptLootItemCondition; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkba58a7;
    ::ll::UntypedStorage<8, 32> mUnkf678f6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootItemFunction(ScriptLootItemFunction const&);
    ScriptLootItemFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptLootItemFunction() = 0;

    // vIndex: 1
    virtual ::LootItemFunction const& _getFunction() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootItemCondition>>
    getConditions();

    MCNAPI ::ScriptModuleMinecraft::ScriptLootItemFunction&
    operator=(::ScriptModuleMinecraft::ScriptLootItemFunction const&);
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
