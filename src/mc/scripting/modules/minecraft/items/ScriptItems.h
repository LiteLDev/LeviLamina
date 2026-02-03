#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItems {
public:
    // ScriptItems inner types define
    using ItemTypesMap = ::std::
        unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemRegistryRef const> mItemRegistry;
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>>
        mItems;
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>>
        mItemAliases;
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>>
                                   mThirdPartyItems;
    ::ll::TypedStorage<1, 1, bool> mRegisteredItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItems& operator=(ScriptItems const&);
    ScriptItems();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItems(::ScriptModuleMinecraft::ScriptItems const&);

    MCAPI explicit ScriptItems(::ItemRegistryRef itemRegistry);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _getItemHandleForAlias(::HashedString const& aliasName) const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _registerItemType(
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>& registry,
        ::Scripting::WeakLifetimeScope                                                      scope,
        ::std::string                                                                       itemName,
        bool                                                                                allowAirBlockItem
    );

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _registerItemTypeAlias(
        ::std::string                                                                 itemName,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> itemHandle
    );

    MCAPI void _registerItems(::Scripting::WeakLifetimeScope& scope, bool allowAirBlockItem);

    MCAPI void _tryRegisterItemTypeAlias(::HashedString const& aliasName);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    get(::Scripting::WeakLifetimeScope& scope, ::std::string const& itemName, bool allowAirBlockItem);

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getAll(::Scripting::WeakLifetimeScope& scope, bool allowAirBlockItem);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getOrAdd(::Scripting::WeakLifetimeScope& scope, ::std::string const& itemName, bool allowAirBlockItem);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope scope, ::std::string const& lookupName);

    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::ItemRegistryRef itemRegistry);

    MCAPI static ::std::unordered_map<::std::string, ::std::string>
    generateItemPropertyNameToRawNameMap(::ItemRegistryRef itemRegistry, bool allowAirBlockItem);

    MCAPI_S static ::std::vector<::std::string> generatetItemCooldownCategories(::ItemRegistryRef itemRegistry);

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope scope, ::std::string const& identifier);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItems const&);

    MCAPI void* $ctor(::ItemRegistryRef itemRegistry);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
