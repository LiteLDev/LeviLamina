#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class TaskGroup;
// clang-format on

class AsyncTaskProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mTitle;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::function<void()>>> mAsyncTaskWorkCallbackSharedPtr;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>              mAsyncTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncTaskProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncTaskProgressHandler() /*override*/ = default;

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
    MCAPI AsyncTaskProgressHandler(::std::string const& title, ::std::function<void()> asyncTaskWorkCallback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& title, ::std::function<void()> asyncTaskWorkCallback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

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
