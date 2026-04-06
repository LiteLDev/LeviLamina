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

class ContentLogFileDeleteProgressHandler : public ::ProgressHandler {
public:
    // ContentLogFileDeleteProgressHandler inner types define
    enum class FileDeleteTarget : int {
        ContentLogs                    = 0,
        DiagnosticsAndProfilerCaptures = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContentLogFileDeleteProgressHandler::FileDeleteTarget> mTarget;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                          mIOTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentLogFileDeleteProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel&) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $tick(::MinecraftScreenModel&);

    MCFOLD void $onCancel(::MinecraftScreenModel&);

    MCFOLD void $onExit(::MinecraftScreenModel&);

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
