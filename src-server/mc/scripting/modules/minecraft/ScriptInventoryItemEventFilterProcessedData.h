#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilterProcessedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb4c2ec;
    ::ll::UntypedStorage<8, 64> mUnk855a48;
    ::ll::UntypedStorage<8, 24> mUnkb9b0b9;
    ::ll::UntypedStorage<8, 64> mUnk1a133c;
    ::ll::UntypedStorage<8, 24> mUnka43b72;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInventoryItemEventFilterProcessedData& operator=(ScriptInventoryItemEventFilterProcessedData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInventoryItemEventFilterProcessedData();

    MCNAPI ScriptInventoryItemEventFilterProcessedData(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData& operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData&&);

    MCNAPI ~ScriptInventoryItemEventFilterProcessedData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
