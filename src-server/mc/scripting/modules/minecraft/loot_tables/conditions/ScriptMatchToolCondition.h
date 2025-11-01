#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/loot_tables/conditions/ScriptLootItemCondition.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptEnchantInfo; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMatchToolCondition : public ::ScriptModuleMinecraft::ScriptLootItemCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk227ce4;
    ::ll::UntypedStorage<8, 8> mUnk63f893;
    ::ll::UntypedStorage<8, 32> mUnk79d519;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMatchToolCondition& operator=(ScriptMatchToolCondition const&);
    ScriptMatchToolCondition(ScriptMatchToolCondition const&);
    ScriptMatchToolCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEnchantInfo>> getEnchantments();

    MCNAPI ::std::vector<::std::string> const getItemTagsAll();

    MCNAPI ::std::vector<::std::string> const getItemTagsAny() const;

    MCNAPI ::std::vector<::std::string> const getItemTagsNone() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
