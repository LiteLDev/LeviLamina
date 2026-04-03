#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/util/CallbackToken.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Core { class Result; }
// clang-format on

class RemoteStorageProviderSyncProgressHandler : public ::ProgressHandler {
public:
    // RemoteStorageProviderSyncProgressHandler inner types declare
    // clang-format off
    struct SyncState;
    // clang-format on

    // RemoteStorageProviderSyncProgressHandler inner types define
    enum class State : int {};

    struct SyncState {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RemoteStorageProviderSyncProgressHandler::SyncState>> mSyncState;
    ::ll::TypedStorage<8, 64, ::std::function<::CallbackToken(::std::function<void(::Core::Result)>)>>  mActionCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Core::Result)>>  mOnProgressHandlerCompletion;
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
    virtual ~RemoteStorageProviderSyncProgressHandler() /*override*/;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RemoteStorageProviderSyncProgressHandler(
        ::std::function<::CallbackToken(::std::function<void(::Core::Result)>)> actionCallback,
        ::std::function<void(::Core::Result)>                                   completedCallback,
        ::std::function<void(::Core::Result)>                                   onProgressHandlerCompletion,
        ::std::string const&                                                    screenName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::CallbackToken(::std::function<void(::Core::Result)>)> actionCallback,
        ::std::function<void(::Core::Result)>                                   completedCallback,
        ::std::function<void(::Core::Result)>                                   onProgressHandlerCompletion,
        ::std::string const&                                                    screenName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
