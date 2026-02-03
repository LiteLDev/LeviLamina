#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/item/ItemContext.h"
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
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
    ScriptContainerSlot();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptContainerSlot(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCAPI ScriptContainerSlot(
        ::ItemContext                                                                         itemContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper> scriptContainerHandle,
        ::Scripting::WeakLifetimeScope                                                        scope
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    clearDynamicProperties(::Scripting::ContextConfig const& contextConfig);

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getAmount() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanDestroy() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanPlaceOn() const;

    MCAPI ::Scripting::Result<
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicProperty(::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicPropertyIds(::Scripting::ContextConfig const& contextConfig);

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicPropertyTotalByteCount(::Scripting::ContextConfig const& contextConfig);

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getItem() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getKeepOnDeath() const;

    MCAPI ::Scripting::Result<::ItemLockMode, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLockMode() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLore() const;

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getMaxAmount() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getNameTag() const;

    MCAPI ::Scripting::Result<
        ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getRawLore() const;

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTags() const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::EngineError>
    getType() const;

    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTypeId() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> hasItem() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    hasTag(::std::string const& tag) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> isStackable() const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    isStackableWith(::ScriptModuleMinecraft::ScriptItemStack const& other) const;

    MCAPI ::ScriptModuleMinecraft::ScriptContainerSlot& operator=(::ScriptModuleMinecraft::ScriptContainerSlot&&);

    MCAPI ::ScriptModuleMinecraft::ScriptContainerSlot& operator=(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::ArgumentOutOfBoundsError>
        setAmount(int amount);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::UnsupportedAPIError>
    setDynamicProperties(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::unordered_map<
            ::std::string,
            ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>> const& values
    );

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

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setItem(::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setKeepOnDeath(bool value);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setLockMode(::ItemLockMode lockMode);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::Error>
    setLore(
        ::std::optional<
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            loreVariantList
    );

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::ArgumentOutOfBoundsError>
        setNameTag(::std::optional<::std::string> nameTag);

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

    MCAPI void* $ctor(
        ::ItemContext                                                                         itemContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper> scriptContainerHandle,
        ::Scripting::WeakLifetimeScope                                                        scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
