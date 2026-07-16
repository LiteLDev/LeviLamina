#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
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
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk631ce6;
    ::ll::UntypedStorage<8, 24>  mUnk5f7385;
    ::ll::UntypedStorage<8, 16>  mUnk5b0a43;
    ::ll::UntypedStorage<8, 8>   mUnk1b6b60;
    ::ll::UntypedStorage<8, 136> mUnk6215be;
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

    MCNAPI void initEvents();

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
