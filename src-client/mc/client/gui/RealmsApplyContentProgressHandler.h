#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RealmsApplyContentProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mOnTick;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mOnCancel;
    ::ll::TypedStorage<8, 32, ::std::string>           mTitleText;
    ::ll::TypedStorage<1, 1, bool>                     mDone;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsApplyContentProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsApplyContentProgressHandler() /*override*/ = default;

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
    MCNAPI RealmsApplyContentProgressHandler(
        ::std::string const&    title,
        ::std::function<bool()> tickCallback,
        ::std::function<void()> cancelCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string const& title, ::std::function<bool()> tickCallback, ::std::function<void()> cancelCallback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCNAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCNAPI ::std::string $getTitleText() const;

    MCNAPI ::std::string $getName() const;
    // NOLINTEND
};
