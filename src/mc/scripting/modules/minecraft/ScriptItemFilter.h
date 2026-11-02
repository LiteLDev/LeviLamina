#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/item/query/ItemQueryOptions.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemFilterError; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType>,
            ::std::string>>>>
                                                                                         mAllowedItemTypes;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::variant<::ItemQueryOptions, bool>>> mProcessedItemQueryOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemFilter& operator=(ScriptItemFilter const&);
    ScriptItemFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemFilter(::ScriptModuleMinecraft::ScriptItemFilter const&);

    MCNAPI ::nonstd::expected<::ItemQueryOptions, ::std::vector<::ScriptModuleMinecraft::ScriptItemFilterError>>
    getItemQueryOptions(::Scripting::WeakLifetimeScope const& scope) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptItemFilter& operator=(::ScriptModuleMinecraft::ScriptItemFilter&&);

    MCNAPI void processItemQueryOptions(::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ~ScriptItemFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
