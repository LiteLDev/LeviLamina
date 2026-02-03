#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilterProcessedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>           mProcessedAllowedSlots;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mProcessedExcludeItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>       mProcessedExcludeTags;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mProcessedIncludeItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>       mProcessedIncludeTags;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInventoryItemEventFilterProcessedData& operator=(ScriptInventoryItemEventFilterProcessedData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptInventoryItemEventFilterProcessedData();

    MCAPI ScriptInventoryItemEventFilterProcessedData(
        ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&
    );

    MCAPI ~ScriptInventoryItemEventFilterProcessedData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
