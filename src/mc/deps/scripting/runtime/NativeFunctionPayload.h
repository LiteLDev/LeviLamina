#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/reflection/Privilege.h"
#include "mc/deps/scripting/runtime/IPayload.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class NativeRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class NativeFunctionPayload : public ::Scripting::IPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk79f943;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeFunctionPayload& operator=(NativeFunctionPayload const&);
    NativeFunctionPayload(NativeFunctionPayload const&);
    NativeFunctionPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeFunctionPayload() /*override*/;

    // vIndex: 2
    virtual ::Scripting::ResultAny runOn(
        ::Scripting::ContextId      contextId,
        ::Scripting::NativeRuntime& runtime,
        ::std::optional<::Scripting::Privilege>
    ) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::ResultAny $runOn(
        ::Scripting::ContextId      contextId,
        ::Scripting::NativeRuntime& runtime,
        ::std::optional<::Scripting::Privilege>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
