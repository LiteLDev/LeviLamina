#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBookError : public ::Scripting::BaseError {
public:
    // ScriptBookError inner types define
    enum class Reason : uchar {
        ExceedsMaxPageLength = 0,
        ExceedsMaxPages      = 1,
        ExceedsTitleLength   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2ac532;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBookError& operator=(ScriptBookError const&);
    ScriptBookError(ScriptBookError const&);
    ScriptBookError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBookError(::std::string_view name, ::ScriptModuleMinecraft::ScriptBookError::Reason reason);

    MCNAPI ~ScriptBookError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindReasonEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view name, ::ScriptModuleMinecraft::ScriptBookError::Reason reason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
