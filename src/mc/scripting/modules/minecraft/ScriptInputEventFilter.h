#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/input/ScriptingInputButton.h"
#include "mc/input/ScriptingInputButtonState.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptInputEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInputEventFilter {
public:
    // ScriptInputEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptInputEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptingInputButton>>> mInputButtons;
    ::ll::TypedStorage<4, 8, ::std::optional<::ScriptingInputButtonState>>            mInputState;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInputEventFilter(ScriptInputEventFilter const&);
    ScriptInputEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptInputEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInputEventFilter const&);

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
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
