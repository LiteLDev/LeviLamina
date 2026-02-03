#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootItemMatchToolCondition;
namespace ScriptModuleMinecraft { class ScriptEnchantInfo; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMatchToolCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>     mScope;
    ::ll::TypedStorage<8, 8, ::LootItemMatchToolCondition const&> mCondition;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEnchantInfo>>>>
        mEnchantInfos;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMatchToolCondition& operator=(ScriptMatchToolCondition const&);
    ScriptMatchToolCondition(ScriptMatchToolCondition const&);
    ScriptMatchToolCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEnchantInfo>>
    getEnchantments();

    MCAPI ::std::vector<::std::string> const getItemTagsAll();

    MCAPI ::std::vector<::std::string> const getItemTagsAny() const;

    MCAPI ::std::vector<::std::string> const getItemTagsNone() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
