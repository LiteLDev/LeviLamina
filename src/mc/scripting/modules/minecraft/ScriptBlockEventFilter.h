#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

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
    MCNAPI ScriptBlockEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter&&);

    MCNAPI void process();

    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptBlockFilterData const& data);

    MCNAPI ~ScriptBlockEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptBlockEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
