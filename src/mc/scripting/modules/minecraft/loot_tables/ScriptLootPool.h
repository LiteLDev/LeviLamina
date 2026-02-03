#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class LootPool;
namespace ScriptModuleMinecraft { class ScriptLootItemCondition; }
namespace ScriptModuleMinecraft { class ScriptLootPoolEntry; }
namespace ScriptModuleMinecraft { class ScriptLootPoolTiers; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct NumberRange; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::LootPool const&>               mLootPool;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootPoolEntry>>>>
        mEntries;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootItemCondition>>>>
        mConditions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootPool& operator=(ScriptLootPool const&);
    ScriptLootPool();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptLootPool(::ScriptModuleMinecraft::ScriptLootPool const&);

    MCAPI ::Scripting::StrongTypedObjectHandle<::Scripting::NumberRange> const getBonusRolls() const;

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootItemCondition>>
    getConditions();

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootPoolEntry>>
    getEntries();

    MCAPI ::Scripting::StrongTypedObjectHandle<::Scripting::NumberRange> const getRolls() const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootPoolTiers>> const
    getTiers() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptLootPool const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
