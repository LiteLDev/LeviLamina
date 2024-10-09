#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/Promise.h"

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
    struct RequestProcessor {
    public:
        // prevent constructor by default
        RequestProcessor& operator=(RequestProcessor const&);
        RequestProcessor(RequestProcessor const&);
        RequestProcessor();

    public:
        // NOLINTBEGIN
        MCAPI
        RequestProcessor(std::string&& taskGroupName, class Bedrock::NonOwnerPointer<class Scheduler> serverScheduler);

        MCAPI class Scripting::Promise<
            class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetResponse>,
            struct Scripting::Error,
            void>
        process(
            class Scripting::WeakLifetimeScope const&,
            class Scripting::ScriptObjectFactory& factory,
            class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest> const&
                requestHandle
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptNetHttpClient(ScriptNetHttpClient const&);
    ScriptNetHttpClient();

public:
    // NOLINTBEGIN
    MCAPI ScriptNetHttpClient(
        std::string const&                              descriptorString,
        class Bedrock::NonOwnerPointer<class Scheduler> serverScheduler
    );

    MCAPI void cancelAll(std::string const& reason);

    MCAPI class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetResponse>,
        struct Scripting::Error,
        void>
    get(class Scripting::WeakLifetimeScope const& scope,
        class Scripting::ScriptObjectFactory&     factory,
        std::string const&                        uri);

    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHttpClient&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHttpClient const&);

    MCAPI class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetResponse>,
        struct Scripting::Error,
        void>
    request(
        class Scripting::WeakLifetimeScope const&                                                          scope,
        class Scripting::ScriptObjectFactory&                                                              factory,
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle
    );

    MCAPI ~ScriptNetHttpClient();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetHttpClient> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
