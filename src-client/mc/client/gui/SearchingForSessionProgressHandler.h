#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class SearchingForSessionProgressHandler : public ::ProgressHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SearchingForSessionProgressHandler() /*override*/ = default;

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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
