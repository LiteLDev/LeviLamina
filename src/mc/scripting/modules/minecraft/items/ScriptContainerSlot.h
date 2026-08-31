#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/world/item/ItemContext.h"
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
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
    MCAPI ScriptContainerSlot(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCAPI ScriptContainerSlot(::ItemContext itemContext, ::Scripting::WeakLifetimeScope scope);

    MCAPI ScriptContainerSlot(
        ::ItemContext                                                                         itemContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper> scriptContainerHandle,
        ::Scripting::WeakLifetimeScope                                                        scope
    );

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getAmount() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanDestroy() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanPlaceOn() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getKeepOnDeath() const;

    MCAPI ::Scripting::Result<::ItemLockMode, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLockMode() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLore() const;

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getMaxAmount() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getNameTag() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTags() const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::EngineError>
    getType() const;

    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTypeId() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> isStackable() const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::UnsupportedAPIError>
    setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCAPI ~ScriptContainerSlot();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCAPI void* $ctor(::ItemContext itemContext, ::Scripting::WeakLifetimeScope scope);

    MCAPI void* $ctor(
        ::ItemContext                                                                         itemContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper> scriptContainerHandle,
        ::Scripting::WeakLifetimeScope                                                        scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
