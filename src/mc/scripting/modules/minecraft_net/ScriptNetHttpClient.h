#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptNetResponse; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnk6ca84e;
        ::ll::UntypedStorage<8, 8>  mUnk459b0a;
        ::ll::UntypedStorage<8, 8>  mUnk88f6c5;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestProcessor& operator=(RequestProcessor const&);
        RequestProcessor(RequestProcessor const&);
        RequestProcessor();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RequestProcessor(::std::string&& taskGroupName, ::Bedrock::NonOwnerPointer<::Scheduler> serverScheduler);

        MCAPI ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>,
            ::Scripting::Error,
            void>
        process(::Scripting::WeakLifetimeScope const& factory, ::Scripting::ScriptObjectFactory& requestHandle, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::string&& taskGroupName, ::Bedrock::NonOwnerPointer<::Scheduler> serverScheduler);
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
    MCAPI
    ScriptNetHttpClient(::std::string const& descriptorString, ::Bedrock::NonOwnerPointer<::Scheduler> serverScheduler);

    MCAPI ::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>,
        ::Scripting::Error,
        void>
    get(::Scripting::WeakLifetimeScope const& scope, ::Scripting::ScriptObjectFactory& factory, ::std::string const& uri
    );

    MCFOLD ::ScriptModuleMinecraftNet::ScriptNetHttpClient&
    operator=(::ScriptModuleMinecraftNet::ScriptNetHttpClient const&);

    MCAPI ::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>,
        ::Scripting::Error,
        void>
    request(
        ::Scripting::WeakLifetimeScope const&                                                     scope,
        ::Scripting::ScriptObjectFactory&                                                         factory,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle
    );

    MCAPI ~ScriptNetHttpClient();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftNet::ScriptNetHttpClient> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& descriptorString, ::Bedrock::NonOwnerPointer<::Scheduler> serverScheduler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
