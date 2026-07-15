#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/util/CallbackToken.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RemoteStorageProviderSyncProgressHandler : public ::ProgressHandler {
public:
    // RemoteStorageProviderSyncProgressHandler inner types declare
    // clang-format off
    class SyncState;
    // clang-format on

    // RemoteStorageProviderSyncProgressHandler inner types define
    enum class State : int {
        Idle              = 0,
        WaitingForRequest = 1,
        Error             = 2,
        Complete          = 3,
    };

    class SyncState : public ::std::enable_shared_from_this<::RemoteStorageProviderSyncProgressHandler::SyncState> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::RemoteStorageProviderSyncProgressHandler::State>                  mState;
        ::ll::TypedStorage<8, 72, ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>> mSyncSuccess;
        ::ll::TypedStorage<
            8,
            64,
            ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>
                                                      mCompletedCallback;
        ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mCompletedCallbackCalled;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RemoteStorageProviderSyncProgressHandler::SyncState>> mSyncState;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            ::CallbackToken(::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>)>>
        mActionCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>>
                                                                      mOnProgressHandlerCompletion;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTimestamp;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                        mSyncToken;
    ::ll::TypedStorage<8, 32, ::std::string>                          mScreenName;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteStorageProviderSyncProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemoteStorageProviderSyncProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel&) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RemoteStorageProviderSyncProgressHandler(
        ::std::function<
            ::CallbackToken(::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>)>
                                                                                                 actionCallback,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)> completedCallback,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>
                             onProgressHandlerCompletion,
        ::std::string const& screenName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<
            ::CallbackToken(::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>)>
                                                                                                 actionCallback,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)> completedCallback,
        ::std::function<void(::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>>)>
                             onProgressHandlerCompletion,
        ::std::string const& screenName
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
