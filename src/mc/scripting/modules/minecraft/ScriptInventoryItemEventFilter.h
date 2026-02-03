#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptInventoryItemEventFilterProcessedData.h"
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptInventoryItemEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilter {
public:
    // ScriptInventoryItemEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData>
                                                                                                  mProcessedData;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<int>>>                                mAllowedSlots;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                      mExcludeItems;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                      mExcludeTags;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                      mIncludeItems;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                      mIncludeTags;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                               mIgnoreQuantityChange;
    ::ll::TypedStorage<4, 8, ::std::optional<::ScriptModuleMinecraft::ScriptPlayerInventoryType>> mPlayerInventoryType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInventoryItemEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptInventoryItemEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&&);

    MCAPI ScriptInventoryItemEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);

    MCAPI void process();

    MCAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterData const& data) const;

    MCAPI ~ScriptInventoryItemEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
