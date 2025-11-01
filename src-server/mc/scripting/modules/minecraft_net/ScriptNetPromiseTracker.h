#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptNetResponse; }
namespace Scripting { struct BaseError; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetPromiseTracker {
public:
    // ScriptNetPromiseTracker inner types declare
    // clang-format off
    struct InProgressRequest;
    // clang-format on
    
    // ScriptNetPromiseTracker inner types define
    struct InProgressRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnk818803;
        ::ll::UntypedStorage<8, 32> mUnk6af6af;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        InProgressRequest& operator=(InProgressRequest const&);
        InProgressRequest(InProgressRequest const&);
        InProgressRequest();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~InProgressRequest();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk77e70b;
    ::ll::UntypedStorage<8, 64> mUnke5d2b6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetPromiseTracker& operator=(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void handleFailure(uint requestId, ::Scripting::BaseError const& error);

    MCNAPI void handleResponse(uint requestId, ::std::vector<::ScriptModuleMinecraftNet::ScriptNetHeader> const& headers, ::std::string const& body, uint status);

    MCNAPI void rejectAll(::std::string const& reason);

    MCNAPI uint track(::Scripting::Promise<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>, ::Scripting::BaseError, void> const& promise, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle);
    // NOLINTEND

};

}
