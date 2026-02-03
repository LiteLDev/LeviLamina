#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ItemStackBase;
class Vec3;
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemComponents; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct UnsupportedAPIError; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemStack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance>                mItemInstance;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
        mScriptStack;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>> mItemType;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>>
        mAttachedComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStack();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemStack(::ScriptModuleMinecraft::ScriptItemStack&&);

    MCAPI ScriptItemStack(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCAPI ScriptItemStack(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::ItemStackBase const&                                                               item,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle
    );

    MCAPI ScriptItemStack(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle,
        int                                                                                  amount,
        int                                                                                  data
    );

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError>
    _validateDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value
    ) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>
    clone(::Scripting::WeakLifetimeScope scope) const;

    MCAPI ::std::vector<::std::string> getCanDestroy() const;

    MCAPI ::std::vector<::std::string> getCanPlaceOn() const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>
    getComponent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components,
        ::std::string_view                                               id,
        bool                                                             includeCustom
    );

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent>>
    getComponents(::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components, bool includeCustom);

    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCAPI ::std::vector<::std::string> getDynamicPropertyIds(::Scripting::ContextConfig const& contextConfig);

    MCAPI int getDynamicPropertyTotalByteCount(::Scripting::ContextConfig const& contextConfig);

    MCAPI ::Scripting::Result<::std::string, ::Scripting::EngineError> getLocalizationKey() const;

    MCAPI ::std::vector<::std::string> getLore() const;

    MCAPI ::std::optional<::std::string> getNameTag() const;

    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface> getRawLore() const;

    MCAPI ::std::vector<::std::string> getTags() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> getType() const;

    MCAPI ::std::string getTypeId() const;

    MCAPI bool hasComponent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptItemComponents> components,
        ::std::string_view                                               id,
        bool                                                             includeCustom
    );

    MCAPI bool hasTag(::std::string const& tag) const;

    MCAPI bool matches(
        ::std::string                                                                                  itemName,
        ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> properties
    ) const;

    MCAPI ::ScriptModuleMinecraft::ScriptItemStack& operator=(::ScriptModuleMinecraft::ScriptItemStack&&);

    MCAPI ::ScriptModuleMinecraft::ScriptItemStack& operator=(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> setAmount(int amount);

    MCAPI ::Scripting::Result_deprecated<void>
    setCanDestroy(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCAPI ::Scripting::Result_deprecated<void>
    setCanPlaceOn(::std::optional<::std::vector<::std::string>> const& blockIdentifiers);

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError>
    setDynamicProperties(
        ::Scripting::ContextConfig const& contextConfig,
        ::std::unordered_map<
            ::std::string,
            ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>> const& values
    );

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::UnsupportedAPIError>
    setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError, ::Scripting::Error> setLore(
        ::std::optional<
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            loreVariantList
    );

    MCAPI ::Scripting::Result_deprecated<void> setNameTag(::std::optional<::std::string> nameTag);

    MCAPI void setNameTagV010(::std::optional<::std::string> nameTag);

    MCAPI ~ScriptItemStack();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind(
        ::BaseGameVersion const&                                                   baseGameVersion,
        ::Scripting::Version const&                                                version,
        ::WeakRef<::ScriptModuleMinecraft::IScriptItemCustomComponentReader const> itemCustomComponentRegistry
    );

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>
    createHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>
    createOptionalHandle(::Scripting::WeakLifetimeScope scope, ::ItemStackBase const& item);

    MCAPI static ::std::vector<::ScriptModuleMinecraft::ScriptRawMessageInterface>
    createRawLoreVector(::std::vector<::std::string> lore);

    MCAPI static ::std::optional<::std::vector<::std::string>> tryCreateLoreVector(
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> const&
                       loreVariantList,
        ::std::string& errorMessage
    );

    MCAPI static ::std::optional<::Scripting::ArgumentOutOfBoundsError>
    validateLoreLength(::std::vector<::std::string> const& loreList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStack&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStack const&);

    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::ItemStackBase const&                                                               item,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle
    );

    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope&                                                      scope,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeHandle,
        int                                                                                  amount,
        int                                                                                  data
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
