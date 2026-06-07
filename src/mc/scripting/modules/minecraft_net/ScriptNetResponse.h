#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb89a85;
    ::ll::UntypedStorage<8, 32> mUnk4a7c58;
    ::ll::UntypedStorage<4, 4>  mUnk225dc0;
    ::ll::UntypedStorage<8, 32> mUnkd38337;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetResponse& operator=(ScriptNetResponse const&);
    ScriptNetResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptNetResponse(::ScriptModuleMinecraftNet::ScriptNetResponse const&);

    MCNAPI ScriptNetResponse(
        ::std::vector<::ScriptModuleMinecraftNet::ScriptNetHeader> const&                         headers,
        ::std::string const&                                                                      body,
        uint                                                                                      status,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftNet::ScriptNetResponse const&);

    MCNAPI void* $ctor(
        ::std::vector<::ScriptModuleMinecraftNet::ScriptNetHeader> const&                         headers,
        ::std::string const&                                                                      body,
        uint                                                                                      status,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
