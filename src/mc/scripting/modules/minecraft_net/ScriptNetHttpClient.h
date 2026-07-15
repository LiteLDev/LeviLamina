#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace ScriptModuleMinecraftNet { class INativeHttpDelegate; }
namespace ScriptModuleMinecraftNet { class ScriptNetSerializationRegistry; }
namespace ScriptModuleMinecraftNet { struct ScriptNetModuleConfig; }
namespace Scripting { struct ClassBinding; }
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
        ::ll::UntypedStorage<8, 136> mUnk701c9f;
        ::ll::UntypedStorage<8, 8>   mUnk6b00db;
        ::ll::UntypedStorage<8, 24>  mUnkb286a1;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestProcessor& operator=(RequestProcessor const&);
        RequestProcessor(RequestProcessor const&);
        RequestProcessor();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void cleanUp();
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
        ::Bedrock::NonOwnerPointer<::ScriptModuleMinecraftNet::ScriptNetSerializationRegistry> serializationRegistry
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
        ::Bedrock::NonOwnerPointer<::ScriptModuleMinecraftNet::ScriptNetSerializationRegistry> serializationRegistry
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
