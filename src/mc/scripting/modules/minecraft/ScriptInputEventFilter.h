#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptInputEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInputEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnked4dfa;
    ::ll::UntypedStorage<4, 8>  mUnke8f7ae;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInputEventFilter& operator=(ScriptInputEventFilter const&);
    ScriptInputEventFilter(ScriptInputEventFilter const&);
    ScriptInputEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void process();

    MCAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptInputEventFilterData const& data) const;

    MCAPI ~ScriptInputEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
