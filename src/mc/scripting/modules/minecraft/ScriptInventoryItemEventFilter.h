#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptInventoryItemEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mUnk3a8dd7;
    ::ll::UntypedStorage<8, 32>  mUnk3e75be;
    ::ll::UntypedStorage<8, 32>  mUnk7ec6fd;
    ::ll::UntypedStorage<8, 32>  mUnk74df93;
    ::ll::UntypedStorage<8, 32>  mUnke48467;
    ::ll::UntypedStorage<8, 32>  mUnk767280;
    ::ll::UntypedStorage<1, 2>   mUnk7bb883;
    ::ll::UntypedStorage<4, 8>   mUnkd6f414;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInventoryItemEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInventoryItemEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);

    MCNAPI ScriptInventoryItemEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);

    MCNAPI void process();

    MCNAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterData const& data) const;

    MCNAPI ~ScriptInventoryItemEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
