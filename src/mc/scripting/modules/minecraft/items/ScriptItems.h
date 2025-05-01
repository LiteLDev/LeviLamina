#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemRegistryRef;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItems {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk62a928;
    ::ll::UntypedStorage<8, 64> mUnk9891fa;
    ::ll::UntypedStorage<8, 64> mUnkbaa948;
    ::ll::UntypedStorage<8, 64> mUnkeeba12;
    ::ll::UntypedStorage<1, 1>  mUnk296fee;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItems& operator=(ScriptItems const&);
    ScriptItems();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItems(::ScriptModuleMinecraft::ScriptItems const&);

    MCNAPI explicit ScriptItems(::ItemRegistryRef itemRegistry);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _getItemHandleForAlias(::HashedString const& aliasName) const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _registerItemType(
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>& registry,
        ::Scripting::WeakLifetimeScope                                                      scope,
        ::std::string                                                                       itemName,
        bool                                                                                allowAirBlockItem
    );

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _registerItemTypeAlias(
        ::std::string                                                                 itemName,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> itemHandle
    );

    MCNAPI void _registerItems(::Scripting::WeakLifetimeScope& scope, bool allowAirBlockItem);

    MCNAPI void _tryRegisterItemTypeAlias(::HashedString const& aliasName);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    get(::Scripting::WeakLifetimeScope& scope, ::std::string const& itemName, bool allowAirBlockItem);

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getAll(::Scripting::WeakLifetimeScope& scope, bool allowAirBlockItem);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getOrAdd(::Scripting::WeakLifetimeScope& scope, ::std::string const& itemName, bool allowAirBlockItem);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope scope, ::std::string const& lookupName);

    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::ItemRegistryRef itemRegistry);

    MCNAPI static ::std::unordered_map<::std::string, ::std::string>
    generateItemPropertyNameToRawNameMap(::ItemRegistryRef itemRegistry, bool allowAirBlockItem);

    MCNAPI static ::std::vector<::std::string> generatetItemCooldownCategories(::ItemRegistryRef itemRegistry);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope scope, ::std::string const& identifier);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItems const&);

    MCNAPI void* $ctor(::ItemRegistryRef itemRegistry);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
