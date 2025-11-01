#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptHotbarEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptHotbarEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2fdddc;
    ::ll::UntypedStorage<8, 32> mUnkd3f14a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHotbarEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptHotbarEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter const&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter& operator=(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter&&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter& operator=(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter const&);

    MCNAPI ~ScriptHotbarEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
