#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockFilterData; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdbbb16;
    ::ll::UntypedStorage<8, 32> mUnk9cfae1;
    ::ll::UntypedStorage<8, 24> mUnkc9c956;
    ::ll::UntypedStorage<8, 24> mUnked0089;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

    MCAPI void process();

    MCAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptBlockFilterData const& data);

    MCAPI ~ScriptBlockEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
