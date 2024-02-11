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
        // symbol:
        // ?process@RequestProcessor@ScriptNetHttpClient@ScriptModuleMinecraftNet@@QEAA?AV?$Promise@V?$StrongTypedObjectHandle@UScriptNetResponse@ScriptModuleMinecraftNet@@@Scripting@@UError@2@X@Scripting@@AEBVWeakLifetimeScope@5@AEAVScriptObjectFactory@5@AEBV?$StrongTypedObjectHandle@UScriptNetRequest@ScriptModuleMinecraftNet@@@5@@Z
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
    // symbol:
    // ??0ScriptNetHttpClient@ScriptModuleMinecraftNet@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$NonOwnerPointer@VScheduler@@@Bedrock@@@Z
    MCAPI ScriptNetHttpClient(std::string const&, class Bedrock::NonOwnerPointer<class Scheduler>);

    // symbol:
    // ?cancelAll@ScriptNetHttpClient@ScriptModuleMinecraftNet@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void cancelAll(std::string const& reason);

    // symbol:
    // ?get@ScriptNetHttpClient@ScriptModuleMinecraftNet@@QEAA?AV?$Promise@V?$StrongTypedObjectHandle@UScriptNetResponse@ScriptModuleMinecraftNet@@@Scripting@@UError@2@X@Scripting@@AEBVWeakLifetimeScope@4@AEAVScriptObjectFactory@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetResponse>,
        struct Scripting::Error,
        void>
    get(class Scripting::WeakLifetimeScope const& scope,
        class Scripting::ScriptObjectFactory&     factory,
        std::string const&                        uri);

    // symbol: ??4ScriptNetHttpClient@ScriptModuleMinecraftNet@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHttpClient&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHttpClient const&);

    // symbol:
    // ?request@ScriptNetHttpClient@ScriptModuleMinecraftNet@@QEAA?AV?$Promise@V?$StrongTypedObjectHandle@UScriptNetResponse@ScriptModuleMinecraftNet@@@Scripting@@UError@2@X@Scripting@@AEBVWeakLifetimeScope@4@AEAVScriptObjectFactory@4@AEBV?$StrongTypedObjectHandle@UScriptNetRequest@ScriptModuleMinecraftNet@@@4@@Z
    MCAPI class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetResponse>,
        struct Scripting::Error,
        void>
    request(class Scripting::WeakLifetimeScope const& scope, class Scripting::ScriptObjectFactory& factory, class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraftNet::ScriptNetRequest> const&);

    // symbol: ??1ScriptNetHttpClient@ScriptModuleMinecraftNet@@QEAA@XZ
    MCAPI ~ScriptNetHttpClient();

    // symbol:
    // ?bind@ScriptNetHttpClient@ScriptModuleMinecraftNet@@SA?AV?$ClassBindingBuilder@UScriptNetHttpClient@ScriptModuleMinecraftNet@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetHttpClient> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
