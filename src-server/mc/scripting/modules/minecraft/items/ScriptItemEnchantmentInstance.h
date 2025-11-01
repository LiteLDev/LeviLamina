#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ItemEnchants;
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypeNotCompatibleError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk63ef6b;
    ::ll::UntypedStorage<4, 4> mUnk63728b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemEnchantmentInstance& operator=(ScriptItemEnchantmentInstance const&);
    ScriptItemEnchantmentInstance(ScriptItemEnchantmentInstance const&);
    ScriptItemEnchantmentInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::variant<::EnchantmentInstance, ::ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError, ::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError, ::ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError> tryResolveInstance(::ItemEnchants& itemEnchants) const;

    MCNAPI ~ScriptItemEnchantmentInstance();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
