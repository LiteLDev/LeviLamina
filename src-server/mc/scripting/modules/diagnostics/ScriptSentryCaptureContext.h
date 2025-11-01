#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleDiagnostics {

struct ScriptSentryCaptureContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk36bb65;
    ::ll::UntypedStorage<8, 72> mUnk6ac4a6;
    ::ll::UntypedStorage<8, 72> mUnkfb4fba;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentryCaptureContext& operator=(ScriptSentryCaptureContext const&);
    ScriptSentryCaptureContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSentryCaptureContext(::ScriptModuleDiagnostics::ScriptSentryCaptureContext const&);

    MCNAPI ::ScriptModuleDiagnostics::ScriptSentryCaptureContext&
    operator=(::ScriptModuleDiagnostics::ScriptSentryCaptureContext&&);

    MCNAPI ~ScriptSentryCaptureContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleDiagnostics::ScriptSentryCaptureContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
