#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ItemEnchants;
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypeNotCompatibleError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemEnchantmentType>>
                                  mEnchantType;
    ::ll::TypedStorage<4, 4, int> mLevel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemEnchantmentInstance();

    MCAPI ScriptItemEnchantmentInstance(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    MCAPI ScriptItemEnchantmentInstance(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&& rhs);

    MCAPI ScriptItemEnchantmentInstance(::Scripting::WeakLifetimeScope& scope, ::EnchantmentInstance const& inst);

    MCAPI ::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&
    operator=(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&& rhs);

    MCAPI ::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&
    operator=(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance const& rhs);

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
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemEnchantmentInstance&& rhs);

    MCAPI void* $ctor(::Scripting::WeakLifetimeScope& scope, ::EnchantmentInstance const& inst);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
