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
    ::ll::UntypedStorage<8, 72> mUnkf18815;
    ::ll::UntypedStorage<8, 72> mUnk639425;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentryCaptureContext& operator=(ScriptSentryCaptureContext const&);
    ScriptSentryCaptureContext(ScriptSentryCaptureContext const&);
    ScriptSentryCaptureContext();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
