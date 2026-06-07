#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraftNet { class ScriptInternalWebSocketError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptNativeWebSocketFactory; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketClient; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketConnectionFailedError; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketLimitExceededError; }
namespace ScriptModuleMinecraftNet { struct ScriptNetModuleConfig; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketFactory
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptWebSocketFactory> {
public:
    // ScriptWebSocketFactory inner types declare
    // clang-format off
    class ScriptWebSocketDeferredEventListener;
    // clang-format on

    // ScriptWebSocketFactory inner types define
    class ScriptWebSocketDeferredEventListener : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
                                                     ::ScriptModuleMinecraftNet::ScriptWebSocketFactory> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk631ce6;
    ::ll::UntypedStorage<8, 24>  mUnk5f7385;
    ::ll::UntypedStorage<8, 16>  mUnk5b0a43;
    ::ll::UntypedStorage<8, 8>   mUnk1b6b60;
    ::ll::UntypedStorage<8, 128> mUnk6215be;
    ::ll::UntypedStorage<8, 16>  mUnka214d6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketFactory& operator=(ScriptWebSocketFactory const&);
    ScriptWebSocketFactory(ScriptWebSocketFactory const&);
    ScriptWebSocketFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWebSocketFactory(
        ::std::string const&                                                        descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                                     scheduler,
        ::Scripting::WeakLifetimeScope&                                             scope,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                           config,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory> nativeFactory
    );

    MCNAPI ::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptWebSocketClient>,
        ::ScriptModuleMinecraftNet::ScriptWebSocketConnectionFailedError,
        ::ScriptModuleMinecraftNet::ScriptInternalWebSocketError,
        ::ScriptModuleMinecraftNet::ScriptWebSocketLimitExceededError,
        ::ScriptModuleMinecraftNet::ScriptMalformedUriError,
        ::ScriptModuleMinecraftNet::ScriptTLSOnlyError,
        ::ScriptModuleMinecraftNet::ScriptUriNotAllowedError>
    connect(::Scripting::ScriptObjectFactory& factory, ::std::string const& uri, ::Scripting::WeakLifetimeScope& scope);

    MCNAPI void flushDeferredEvents(::ScriptDeferredFlushTracker& tracker);

    MCNAPI void initEvents();

    MCNAPI void postFlush();

    MCNAPI ~ScriptWebSocketFactory();
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
        ::std::string const&                                                        descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                                     scheduler,
        ::Scripting::WeakLifetimeScope&                                             scope,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                           config,
        ::std::shared_ptr<::ScriptModuleMinecraftNet::ScriptNativeWebSocketFactory> nativeFactory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
