#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/deps/scripting/script_engine/Future.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class ConnectionRequest;
class IAsyncJoinRegistrar;
class SubClientConnectionRequest;
namespace ScriptModuleServerAdmin { struct ScriptAsyncPlayerJoinBeforeEvent; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptAsyncJoinEventSignal {
public:
    // ScriptAsyncJoinEventSignal inner types declare
    // clang-format off
    struct Subscriber;
    // clang-format on

    // ScriptAsyncJoinEventSignal inner types define
    struct Subscriber {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 72>  mUnkef0809;
        ::ll::UntypedStorage<8, 248> mUnk7e080c;
        // NOLINTEND

    public:
        // prevent constructor by default
        Subscriber& operator=(Subscriber const&);
        Subscriber(Subscriber const&);
        Subscriber();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Subscriber();
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
    ::ll::UntypedStorage<8, 8>  mUnk2799a2;
    ::ll::UntypedStorage<8, 16> mUnk6aa83e;
    ::ll::UntypedStorage<8, 24> mUnk28a6f8;
    ::ll::UntypedStorage<8, 24> mUnk212ab1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncJoinEventSignal& operator=(ScriptAsyncJoinEventSignal const&);
    ScriptAsyncJoinEventSignal(ScriptAsyncJoinEventSignal const&);
    ScriptAsyncJoinEventSignal();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnAsyncJoinCallback(
        ::Scripting::Closure<::Scripting::Future<void()>(
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent>
        )>                     closure,
        ::IAsyncJoinRegistrar* asyncJoinRegistrar,
        ::std::variant<
            ::std::reference_wrapper<::ConnectionRequest const>,
            ::std::reference_wrapper<::SubClientConnectionRequest const>> const& anyReq,
        ::std::shared_ptr<::AsyncVerdictPromise>                                 promisePtr
    );

    MCNAPI ::Scripting::Closure<::Scripting::Future<
        void()>(::Scripting::StrongTypedObjectHandle<::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent>)>
    subscribe(
        ::Scripting::Closure<::Scripting::Future<void()>(
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent>
        )> closure
    );

    MCNAPI void tick();

    MCNAPI bool unsubscribe(
        ::Scripting::Closure<::Scripting::Future<void()>(
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent>
        )> const& closure
    );

    MCNAPI ~ScriptAsyncJoinEventSignal();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
