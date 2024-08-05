#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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
        MCAPI RequestProcessor(std::string&&, class Bedrock::NonOwnerPointer<class Scheduler>);

        MCAPI class Scripting::Promise<
            class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetResponse>,
            struct Scripting::Error,
            void>
        process(class Scripting::WeakLifetimeScope const&, class Scripting::ScriptObjectFactory& factory, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest> const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptNetHttpClient(ScriptNetHttpClient const&);
    ScriptNetHttpClient();

public:
    // NOLINTBEGIN
    MCAPI ScriptNetHttpClient(std::string const&, class Bedrock::NonOwnerPointer<class Scheduler>);

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
    request(class Scripting::WeakLifetimeScope const& scope, class Scripting::ScriptObjectFactory& factory, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest> const&);

    MCAPI ~ScriptNetHttpClient();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetHttpClient> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
