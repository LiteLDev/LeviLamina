#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { class ScriptHttpRequestLimitExceededError; }
namespace ScriptModuleMinecraftNet { class ScriptInternalHttpRequestError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptRequestBodyTooLargeError; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptNetResponse; }
namespace Scripting { struct Error; }
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
        ::ll::UntypedStorage<8, 80> mUnk8292dc;
        ::ll::UntypedStorage<8, 32> mUnk6af6af;
        // NOLINTEND

    public:
        // prevent constructor by default
        InProgressRequest& operator=(InProgressRequest const&);
        InProgressRequest(InProgressRequest const&);
        InProgressRequest();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk77e70b;
    ::ll::UntypedStorage<8, 64> mUnke5d2b6;
    ::ll::UntypedStorage<8, 24> mUnk50e0b3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetPromiseTracker& operator=(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker(ScriptNetPromiseTracker const&);
    ScriptNetPromiseTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint track(
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>,
            ::Scripting::Error,
            ::ScriptModuleMinecraftNet::ScriptRequestBodyTooLargeError,
            ::ScriptModuleMinecraftNet::ScriptInternalHttpRequestError,
            ::ScriptModuleMinecraftNet::ScriptHttpRequestLimitExceededError,
            ::ScriptModuleMinecraftNet::ScriptTLSOnlyError,
            ::ScriptModuleMinecraftNet::ScriptMalformedUriError,
            ::ScriptModuleMinecraftNet::ScriptUriNotAllowedError> const&                          promise,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
