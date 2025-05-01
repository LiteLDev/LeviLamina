#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/reflection/Privilege.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPayload; }
namespace Scripting { class ResultAny; }
// clang-format on

namespace Scripting {

class ScriptContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk673a09;
    ::ll::UntypedStorage<1, 1>  mUnkac9107;
    ::ll::UntypedStorage<8, 8>  mUnk374a26;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContext& operator=(ScriptContext const&);
    ScriptContext(ScriptContext const&);
    ScriptContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptContext(::Scripting::ScriptContext&& rhs);

    MCNAPI void _destroy();

    MCNAPI ::Scripting::ScriptContext& operator=(::Scripting::ScriptContext&& rhs);

    MCNAPI ::Scripting::ResultAny
    run(::Scripting::IPayload& payload, ::std::optional<::Scripting::Privilege> privilege);

    MCNAPI ~ScriptContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ScriptContext&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
