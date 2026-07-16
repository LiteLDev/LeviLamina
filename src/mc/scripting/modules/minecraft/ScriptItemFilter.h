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
    MCAPI ScriptItemFilter(::ScriptModuleMinecraft::ScriptItemFilter const&);

    MCAPI ::nonstd::expected<::ItemQueryOptions, ::std::vector<::ScriptModuleMinecraft::ScriptItemFilterError>>
    getItemQueryOptions(::Scripting::WeakLifetimeScope const& scope) const;

    MCAPI ::ScriptModuleMinecraft::ScriptItemFilter& operator=(::ScriptModuleMinecraft::ScriptItemFilter&&);

    MCAPI void processItemQueryOptions(::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemFilter const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
