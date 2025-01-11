#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ItemEnchants;
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypeNotCompatibleError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk63ef6b;
    ::ll::UntypedStorage<4, 4>  mUnk63728b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemEnchantmentInstance& operator=(ScriptItemEnchantmentInstance const&);
    ScriptItemEnchantmentInstance(ScriptItemEnchantmentInstance const&);
    ScriptItemEnchantmentInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::variant<
        ::EnchantmentInstance,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        ::ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError>
    tryResolveInstance(::ItemEnchants& itemEnchants) const;

    MCAPI ~ScriptItemEnchantmentInstance();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentInstance> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
