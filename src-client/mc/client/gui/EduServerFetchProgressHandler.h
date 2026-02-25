#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class EDUServersScreenController;
class MinecraftScreenModel;
// clang-format on

class EduServerFetchProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::EDUServersScreenController>> mEduServersScreenController;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                   mEduServerFetchStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds const>                         mMinimumDisplayInterval;
    // NOLINTEND

public:
    // prevent constructor by default
    EduServerFetchProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;

    virtual ~EduServerFetchProgressHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EduServerFetchProgressHandler(
        ::Bedrock::NonOwnerPointer<::EDUServersScreenController> eduServersScreenController
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::EDUServersScreenController> eduServersScreenController);
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
