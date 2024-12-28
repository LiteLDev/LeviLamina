#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentAlreadyRegisteredError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptItemCustomComponentAlreadyRegisteredError& operator=(ScriptItemCustomComponentAlreadyRegisteredError const&);
    ScriptItemCustomComponentAlreadyRegisteredError(ScriptItemCustomComponentAlreadyRegisteredError const&);
    ScriptItemCustomComponentAlreadyRegisteredError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptItemCustomComponentAlreadyRegisteredError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
