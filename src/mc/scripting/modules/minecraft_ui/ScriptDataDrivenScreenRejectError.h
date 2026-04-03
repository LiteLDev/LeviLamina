#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/scripting/DataDrivenScreenRejectReason.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUIPrivateBindings {

class ScriptDataDrivenScreenRejectError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8a6adf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenScreenRejectError& operator=(ScriptDataDrivenScreenRejectError const&);
    ScriptDataDrivenScreenRejectError(ScriptDataDrivenScreenRejectError const&);
    ScriptDataDrivenScreenRejectError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptDataDrivenScreenRejectError(::DataDrivenScreenRejectReason reason);

    MCNAPI ~ScriptDataDrivenScreenRejectError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DataDrivenScreenRejectReason reason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUIPrivateBindings
