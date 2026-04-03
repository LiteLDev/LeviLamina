#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace ScriptModuleMinecraftNet { class INativeHttpDelegate; }
namespace ScriptModuleMinecraftNet { class ScriptHttpRequestBodyTooLargeError; }
namespace ScriptModuleMinecraftNet { class ScriptHttpRequestNotAllowedError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedHttpRequestError; }
namespace ScriptModuleMinecraftNet { struct ScriptNetModuleConfig; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptNetResponse; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Util::Url { struct ComponentsView; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetHttpClient {
public:
    // ScriptNetHttpClient inner types declare
    // clang-format off
    struct RequestProcessor;
    // clang-format on

    // ScriptNetHttpClient inner types define
    struct RequestProcessor
    : public ::std::enable_shared_from_this<::ScriptModuleMinecraftNet::ScriptNetHttpClient::RequestProcessor> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80>  mUnk6ca84e;
        ::ll::UntypedStorage<8, 8>   mUnk824904;
        ::ll::UntypedStorage<8, 8>   mUnk3ae71d;
        ::ll::UntypedStorage<8, 128> mUnk701c9f;
        ::ll::UntypedStorage<8, 8>   mUnk6b00db;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestProcessor& operator=(RequestProcessor const&);
        RequestProcessor(RequestProcessor const&);
        RequestProcessor();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RequestProcessor(
            ::std::string&&                                                    taskGroupName,
            ::Bedrock::NonOwnerPointer<::Scheduler>                            serverScheduler,
            ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                  config,
            ::std::unique_ptr<::ScriptModuleMinecraftNet::INativeHttpDelegate> delegate
        );

        MCNAPI bool _uriAllowed(::std::string const& uri, ::Util::Url::ComponentsView const& requestComponents) const;

        MCNAPI ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>,
            ::Scripting::Error,
            ::ScriptModuleMinecraftNet::ScriptHttpRequestBodyTooLargeError,
            ::ScriptModuleMinecraftNet::ScriptHttpRequestNotAllowedError,
            ::ScriptModuleMinecraftNet::ScriptMalformedHttpRequestError>
        process(
            ::Scripting::WeakLifetimeScope const&,
            ::Scripting::ScriptObjectFactory&                                                         factory,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle
        );

        MCNAPI ~RequestProcessor();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::std::string&&                                                    taskGroupName,
            ::Bedrock::NonOwnerPointer<::Scheduler>                            serverScheduler,
            ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                  config,
            ::std::unique_ptr<::ScriptModuleMinecraftNet::INativeHttpDelegate> delegate
        );
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
    ::ll::UntypedStorage<8, 16> mUnk5f1385;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetHttpClient(ScriptNetHttpClient const&);
    ScriptNetHttpClient();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptNetHttpClient(
        ::std::string const&                                               descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                            serverScheduler,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                  config,
        ::std::unique_ptr<::ScriptModuleMinecraftNet::INativeHttpDelegate> delegate
    );

    MCNAPI ::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>,
        ::Scripting::Error,
        ::ScriptModuleMinecraftNet::ScriptHttpRequestBodyTooLargeError,
        ::ScriptModuleMinecraftNet::ScriptHttpRequestNotAllowedError,
        ::ScriptModuleMinecraftNet::ScriptMalformedHttpRequestError>
    get(::Scripting::WeakLifetimeScope const& scope,
        ::Scripting::ScriptObjectFactory&     factory,
        ::std::string const&                  uri);

    MCNAPI ::ScriptModuleMinecraftNet::ScriptNetHttpClient&
    operator=(::ScriptModuleMinecraftNet::ScriptNetHttpClient const&);

    MCNAPI ::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>,
        ::Scripting::Error,
        ::ScriptModuleMinecraftNet::ScriptHttpRequestBodyTooLargeError,
        ::ScriptModuleMinecraftNet::ScriptHttpRequestNotAllowedError,
        ::ScriptModuleMinecraftNet::ScriptMalformedHttpRequestError>
    request(
        ::Scripting::WeakLifetimeScope const&                                                     scope,
        ::Scripting::ScriptObjectFactory&                                                         factory,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle
    );

    MCNAPI ~ScriptNetHttpClient();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&                                               descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                            serverScheduler,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                  config,
        ::std::unique_ptr<::ScriptModuleMinecraftNet::INativeHttpDelegate> delegate
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
