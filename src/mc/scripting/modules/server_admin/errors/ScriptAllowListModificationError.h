#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAllowListModificationError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptAllowListModificationError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptAllowListModificationError(::std::string const& msg);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& msg);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
