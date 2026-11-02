#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/world/item/ItemContext.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptContainerSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::ItemContext> mItemContext;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper>>>
                                                              mScriptContainerHandle;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainerSlot& operator=(ScriptContainerSlot const&);
    ScriptContainerSlot();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptContainerSlot(::ScriptModuleMinecraft::ScriptContainerSlot&&);

    MCNAPI ScriptContainerSlot(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCNAPI ScriptContainerSlot(::ItemContext itemContext, ::Scripting::WeakLifetimeScope scope);

    MCNAPI ScriptContainerSlot(
        ::ItemContext                                                                         itemContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper> scriptContainerHandle,
        ::Scripting::WeakLifetimeScope                                                        scope
    );

    MCNAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getAmount() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanDestroy() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanPlaceOn() const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getKeepOnDeath() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLore() const;

    MCNAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getMaxAmount() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTags() const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> hasItem() const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> isStackable() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptContainerSlot& operator=(::ScriptModuleMinecraft::ScriptContainerSlot&&);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::UnsupportedAPIError>
    setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCNAPI ~ScriptContainerSlot();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainerSlot&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCNAPI void* $ctor(::ItemContext itemContext, ::Scripting::WeakLifetimeScope scope);

    MCNAPI void* $ctor(
        ::ItemContext                                                                         itemContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper> scriptContainerHandle,
        ::Scripting::WeakLifetimeScope                                                        scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
