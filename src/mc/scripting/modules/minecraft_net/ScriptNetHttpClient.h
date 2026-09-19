#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft_net/ScriptNetContentEncoding.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace ScriptModuleMinecraftNet { class INativeHttpDelegate; }
namespace ScriptModuleMinecraftNet { class IScriptNetContentEncoder; }
namespace ScriptModuleMinecraftNet { class ScriptHttpRequestLimitExceededError; }
namespace ScriptModuleMinecraftNet { class ScriptInternalHttpRequestError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptNetSerializationRegistry; }
namespace ScriptModuleMinecraftNet { class ScriptRequestBodyTooLargeError; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace ScriptModuleMinecraftNet { struct ScriptNetModuleConfig; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptNetResponse; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
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
        // RequestProcessor inner types declare
        // clang-format off
        struct PreparedRequest;
        // clang-format on

        // RequestProcessor inner types define
        struct PreparedRequest {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk7040dc;
            ::ll::UntypedStorage<8, 24> mUnk39c507;
            ::ll::UntypedStorage<4, 4>  mUnk52f0cd;
            ::ll::UntypedStorage<1, 2>  mUnkb48fb5;
            // NOLINTEND

        public:
            // prevent constructor by default
            PreparedRequest& operator=(PreparedRequest const&);
            PreparedRequest(PreparedRequest const&);
            PreparedRequest();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80>  mUnk81b151;
        ::ll::UntypedStorage<8, 8>   mUnk824904;
        ::ll::UntypedStorage<8, 8>   mUnk3ae71d;
        ::ll::UntypedStorage<8, 136> mUnk701c9f;
        ::ll::UntypedStorage<8, 8>   mUnk6b00db;
        ::ll::UntypedStorage<8, 24>  mUnkb286a1;
        ::ll::UntypedStorage<8, 8>   mUnk48495f;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestProcessor& operator=(RequestProcessor const&);
        RequestProcessor(RequestProcessor const&);
        RequestProcessor();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _encodeAndSendRequest(
            uint                                                                               requestId,
            ::ScriptModuleMinecraftNet::ScriptNetHttpClient::RequestProcessor::PreparedRequest request,
            ::std::string                                                                      serializedBody,
            ::std::string                                                                      serializableContentType,
            ::std::optional<::ScriptModuleMinecraftNet::ScriptNetContentEncoding>              contentEncoding
        );

        MCNAPI void _sendRequest(
            uint                                                                               requestId,
            ::ScriptModuleMinecraftNet::ScriptNetHttpClient::RequestProcessor::PreparedRequest request,
            ::std::string                                                                      serializedBody,
            ::std::string                                                                      serializableContentType,
            ::std::optional<::ScriptModuleMinecraftNet::ScriptNetContentEncoding>              contentEncoding
        );

        MCNAPI void cleanUp();

        MCNAPI ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>,
            ::Scripting::Error,
            ::ScriptModuleMinecraftNet::ScriptRequestBodyTooLargeError,
            ::ScriptModuleMinecraftNet::ScriptInternalHttpRequestError,
            ::ScriptModuleMinecraftNet::ScriptHttpRequestLimitExceededError,
            ::ScriptModuleMinecraftNet::ScriptTLSOnlyError,
            ::ScriptModuleMinecraftNet::ScriptMalformedUriError,
            ::ScriptModuleMinecraftNet::ScriptUriNotAllowedError>
        process(
            ::Scripting::WeakLifetimeScope const&,
            ::Scripting::ScriptObjectFactory&                                                         factory,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5f1385;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetHttpClient& operator=(ScriptNetHttpClient const&);
    ScriptNetHttpClient(ScriptNetHttpClient const&);
    ScriptNetHttpClient();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptNetHttpClient(
        ::std::string const&                                                                   descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                                                serverScheduler,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                                      config,
        ::std::unique_ptr<::ScriptModuleMinecraftNet::INativeHttpDelegate>                     delegate,
        ::Bedrock::NonOwnerPointer<::ScriptModuleMinecraftNet::ScriptNetSerializationRegistry> serializationRegistry,
        ::std::unique_ptr<::ScriptModuleMinecraftNet::IScriptNetContentEncoder>                contentEncoder
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
    MCNAPI void* $ctor(
        ::std::string const&                                                                   descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                                                serverScheduler,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                                      config,
        ::std::unique_ptr<::ScriptModuleMinecraftNet::INativeHttpDelegate>                     delegate,
        ::Bedrock::NonOwnerPointer<::ScriptModuleMinecraftNet::ScriptNetSerializationRegistry> serializationRegistry,
        ::std::unique_ptr<::ScriptModuleMinecraftNet::IScriptNetContentEncoder>                contentEncoder
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
