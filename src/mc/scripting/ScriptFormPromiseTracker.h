#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/Promise.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class Player;
class PlayerEventListener;
struct PlayerFormCloseEvent;
struct PlayerFormResponseEvent;
namespace Json { class Value; }
namespace ScriptModuleMinecraftServerUI { class ScriptActionFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormResponse; }
// clang-format on

class ScriptFormPromiseTracker : public ::Bedrock::EnableNonOwnerReferences,
                                 public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // ScriptFormPromiseTracker inner types declare
    // clang-format off
    struct FromRequest;
    // clang-format on

    // ScriptFormPromiseTracker inner types define
    struct FromRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            88,
            ::std::variant<
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponse>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
                    void>,
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponse>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
                    void>,
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormResponse>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
                    void>>>
                                                        mPromise;
        ::ll::TypedStorage<8, 160, ::NetworkIdentifier> mClientNetworkIdentifier;
        // NOLINTEND

    public:
        // prevent constructor by default
        FromRequest& operator=(FromRequest const&);
        FromRequest(FromRequest const&);
        FromRequest();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FromRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                                 mLastRequestId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::ScriptFormPromiseTracker::FromRequest>> mFormRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFormPromiseTracker& operator=(ScriptFormPromiseTracker const&);
    ScriptFormPromiseTracker(ScriptFormPromiseTracker const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 60
    virtual ::EventResult onEvent(::PlayerFormResponseEvent const& formResponseEvent) /*override*/;

    // vIndex: 61
    virtual ::EventResult onEvent(::PlayerFormCloseEvent const& formCloseEvent) /*override*/;

    // vIndex: 0
    virtual ~ScriptFormPromiseTracker() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptFormPromiseTracker();

    MCAPI void handleFormClose(::PlayerFormCloseEvent const& formResponse);

    MCAPI void handleFormResponse(uint formId, ::Json::Value const& formResponse);

    MCAPI void handlePlayerQuit(::NetworkIdentifier const& playerId);

    MCAPI void rejectAllForShutdown();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NetworkIdentifier _getPlayerNetworkId(::Player const& player);

    MCAPI static void _sendToClient(::Player const& player, ::Json::Value formJson, uint formId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::PlayerFormResponseEvent const& formResponseEvent);

    MCAPI ::EventResult $onEvent(::PlayerFormCloseEvent const& formCloseEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForEventListenerDispatcher();
    // NOLINTEND
};
