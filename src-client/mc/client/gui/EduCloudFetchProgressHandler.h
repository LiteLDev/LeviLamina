#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PlayScreenModel;
// clang-format on

class EduCloudFetchProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>   mPlayScreenModel;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mEduCloudFetchStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds const>       mDisplayInterval;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;

    virtual ~EduCloudFetchProgressHandler() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
