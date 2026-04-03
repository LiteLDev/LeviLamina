#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ProgressHandler.h"
#include "mc/client/services/download/IContentAcquisition.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct DlcId;
// clang-format on

class ResourcePackProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mDone;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mPackProgress;
    ::ll::TypedStorage<4, 4, float>                                                     mProgress;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mProgressMessage;
    ::ll::TypedStorage<4, 4, ::LoadingState>                                            mLoadingState;
    ::ll::TypedStorage<1, 1, bool>                                                      mDisconnected;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::steady_clock::time_point>> mStartTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                                      mLocalServer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                  mPackImportExistenceTracker;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition::ImportCallbackId>                   mImportCallbackId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::DlcId>>>                mFailedPackImports;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackProgressHandler() /*override*/;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const&) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourcePackProgressHandler(bool localServer);

    MCAPI void _resetCDNState(::MinecraftScreenModel& minecraftScreenModel, bool revertToServerBackend);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool localServer);
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

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
