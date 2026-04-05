#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ScriptItemFilter& operator=(ScriptItemFilter const&);
    ScriptItemFilter(ScriptItemFilter const&);
    ScriptItemFilter();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScriptItemFilter();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemFilter(::ScriptModuleMinecraft::ScriptItemFilter&&);

#ifdef LL_PLAT_C
    MCAPI ScriptItemFilter(::ScriptModuleMinecraft::ScriptItemFilter const&);
#endif

    MCAPI ::nonstd::expected<::ItemQueryOptions, ::std::vector<::ScriptModuleMinecraft::ScriptItemFilterError>>
    getItemQueryOptions(::Scripting::WeakLifetimeScope const& scope) const;

#ifdef LL_PLAT_C
    MCAPI ::ScriptModuleMinecraft::ScriptItemFilter& operator=(::ScriptModuleMinecraft::ScriptItemFilter const&);
#endif

    MCAPI void processItemQueryOptions(::Scripting::WeakLifetimeScope const& scope);

    MCAPI ~ScriptItemFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemFilter&&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemFilter const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
