#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleDiagnostics {

struct ScriptSentryOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk321ec4;
    ::ll::UntypedStorage<1, 2>  mUnkb02b12;
    ::ll::UntypedStorage<4, 8>  mUnkf42df6;
    ::ll::UntypedStorage<1, 2>  mUnke57931;
    ::ll::UntypedStorage<4, 8>  mUnk511fab;
    ::ll::UntypedStorage<8, 16> mUnkfecabe;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentryOptions& operator=(ScriptSentryOptions const&);
    ScriptSentryOptions(ScriptSentryOptions const&);
    ScriptSentryOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
