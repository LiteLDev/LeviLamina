#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class ILocalPlayerEntityGetter;
class MinecraftScreenModel;
// clang-format on

class NavigateToGameScreenProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoadingState> state;
    ::ll::TypedStorage<1, 1, bool>           hasWaitedToUnloadAssets;
    ::ll::TypedStorage<1, 1, bool>           mHasNavigated;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILocalPlayerEntityGetter const>> const>
        mLocalPlayerEntityGetter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NavigateToGameScreenProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& model) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

    MCNAPI void $onExit(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCNAPI ::std::string $getProgressMessage(::MinecraftScreenModel& model) const;

    MCNAPI ::std::string $getTitleText() const;

    MCNAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
