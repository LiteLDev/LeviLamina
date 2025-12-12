#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class ItemContext;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidContainerSlotError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { class WeakLifetimeScope; }
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
    ::ll::UntypedStorage<8, 232> mUnk4cf7c5;
    ::ll::UntypedStorage<8, 40>  mUnk6df2de;
    ::ll::UntypedStorage<8, 16>  mUnk4ff339;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContainerSlot();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptContainerSlot(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCNAPI ScriptContainerSlot(
        ::ItemContext                                                                         itemContext,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptContainerWrapper> scriptContainerHandle,
        ::Scripting::WeakLifetimeScope                                                        scope
    );

    MCNAPI bool _isValid() const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    clearDynamicProperties(::Scripting::ContextConfig const& contextConfig);

    MCNAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getAmount() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanDestroy() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getCanPlaceOn() const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicProperty(::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicPropertyIds(::Scripting::ContextConfig const& contextConfig);

    MCNAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getDynamicPropertyTotalByteCount(::Scripting::ContextConfig const& contextConfig);

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getItem() const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getKeepOnDeath() const;

    MCNAPI ::Scripting::Result<::ItemLockMode, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLockMode() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getLore() const;

    MCNAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> getMaxAmount() const;

    MCNAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getNameTag() const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getRawLore() const;

    MCNAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTags() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::EngineError>
    getType() const;

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    getTypeId() const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> hasItem() const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    hasTag(::std::string const& tag) const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError> isStackable() const;

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    isStackableWith(::ScriptModuleMinecraft::ScriptItemStack const& other) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptContainerSlot& operator=(::ScriptModuleMinecraft::ScriptContainerSlot const&);

    MCNAPI ::ScriptModuleMinecraft::ScriptContainerSlot& operator=(::ScriptModuleMinecraft::ScriptContainerSlot&&);

    MCNAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::ArgumentOutOfBoundsError>
        setAmount(int amount);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::Error>
    setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCNAPI ::Scripting::Result<
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

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptContainerRulesError,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setItem(::std::optional<::ScriptModuleMinecraft::ScriptItemStack> const& scriptItemStack);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setKeepOnDeath(bool value);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    setLockMode(::ItemLockMode lockMode);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::Error>
    setLore(
        ::std::optional<
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            loreVariantList
    );

    MCNAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidContainerSlotError, ::Scripting::ArgumentOutOfBoundsError>
        setNameTag(::std::optional<::std::string> nameTag);

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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptContainerSlot const&);

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
