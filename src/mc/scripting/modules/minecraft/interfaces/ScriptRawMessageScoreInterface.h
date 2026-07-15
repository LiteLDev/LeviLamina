#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawMessageScoreInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> name;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> objective;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptRawMessageScoreInterface();
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

} // namespace ScriptModuleMinecraft
