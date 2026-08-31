#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/IPayload.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
namespace Scripting { class StringBasedRuntime; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class StringPayload : public ::Scripting::IPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb38c70;
    ::ll::UntypedStorage<8, 32> mUnk6d1f1e;
    // NOLINTEND

public:
    // prevent constructor by default
    StringPayload& operator=(StringPayload const&);
    StringPayload(StringPayload const&);
    StringPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StringPayload() /*override*/;

    virtual ::Scripting::ResultAny runOn(
        ::Scripting::ContextId                  contextId,
        ::Scripting::StringBasedRuntime&        runtime,
        ::std::optional<::Scripting::Privilege> privilege
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StringPayload(::std::string scriptName, ::std::string scriptData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string scriptName, ::std::string scriptData);
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
        ::Scripting::ContextId                  contextId,
        ::Scripting::StringBasedRuntime&        runtime,
        ::std::optional<::Scripting::Privilege> privilege
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
