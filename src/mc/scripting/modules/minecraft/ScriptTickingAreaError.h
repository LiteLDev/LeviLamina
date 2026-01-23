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

struct ScriptTickingAreaError : public ::Scripting::BaseError {
public:
    // ScriptTickingAreaError inner types define
    enum class Reason : int {
        OverChunkLimit          = 0,
        UnknownIdentifier       = 1,
        SideLengthExceeded      = 2,
        IdentifierAlreadyExists = 3,
        Invalid                 = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk80d740;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickingAreaError& operator=(ScriptTickingAreaError const&);
    ScriptTickingAreaError(ScriptTickingAreaError const&);
    ScriptTickingAreaError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptTickingAreaError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindReasonEnum();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
