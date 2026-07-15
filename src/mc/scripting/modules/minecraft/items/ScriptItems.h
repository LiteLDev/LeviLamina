#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    _getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope scope, ::std::string const& lookupName);

    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::ItemRegistryRef itemRegistry);

    MCAPI static ::std::unordered_map<::std::string, ::std::string>
    generateItemPropertyNameToRawNameMap(::ItemRegistryRef itemRegistry, bool allowAirBlockItem);

#ifdef LL_PLAT_S
    MCAPI static ::std::vector<::std::string> generatetItemCooldownCategories(::ItemRegistryRef itemRegistry);
#endif

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>>
    getOrCreateItemTypeHandle(::Scripting::WeakLifetimeScope scope, ::std::string const& identifier);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
