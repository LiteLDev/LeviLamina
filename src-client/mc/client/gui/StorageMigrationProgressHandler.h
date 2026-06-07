#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class StorageMigrationProgressHandler : public ::ProgressHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageMigrationProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel&) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageMigrationProgressHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onStart(::MinecraftScreenModel&);

    MCFOLD void $tick(::MinecraftScreenModel&);

    MCFOLD void $onCancel(::MinecraftScreenModel&);

    MCFOLD void $onExit(::MinecraftScreenModel&);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
