#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RealmsConnectProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mOnTick;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mOnCancel;
    ::ll::TypedStorage<8, 32, ::std::string>           mTitleText;
    ::ll::TypedStorage<1, 1, bool>                     mConnected;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsConnectProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsConnectProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsConnectProgressHandler(
        ::std::string const&    title,
        ::std::function<bool()> tickCallback,
        ::std::function<void()> cancelCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& title, ::std::function<bool()> tickCallback, ::std::function<void()> cancelCallback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
