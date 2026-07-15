#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/WorldVerificationResult.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PackAccessStrategy;
class TaskGroup;
// clang-format on

class WorldVerificationProgressHandler : public ::EmptyProgressHandler {
public:
    // WorldVerificationProgressHandler inner types define
    using Callback = ::std::function<void(::WorldVerificationResult)>;

    using CreateAccess = ::std::function<::std::unique_ptr<::PackAccessStrategy>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoadingState>                                              mState;
    ::ll::TypedStorage<8, 64, ::std::function<void(::WorldVerificationResult)>>           mCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>                     mLevelAccess;
    ::ll::TypedStorage<8, 64, ::std::function<::std::unique_ptr<::PackAccessStrategy>()>> mCreateLevelAccess;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                              mIOTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldVerificationProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldVerificationProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldVerificationProgressHandler(
        ::std::function<::std::unique_ptr<::PackAccessStrategy>()> createAccess,
        ::std::function<void(::WorldVerificationResult)>           callback
    );

    MCAPI WorldVerificationProgressHandler(
        ::std::function<::std::unique_ptr<::PackAccessStrategy>()> createAccess,
        ::std::unique_ptr<::PackAccessStrategy>                    levelAccess,
        ::std::function<void(::WorldVerificationResult)>           callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::std::unique_ptr<::PackAccessStrategy>()> createAccess,
        ::std::function<void(::WorldVerificationResult)>           callback
    );

    MCAPI void* $ctor(
        ::std::function<::std::unique_ptr<::PackAccessStrategy>()> createAccess,
        ::std::unique_ptr<::PackAccessStrategy>                    levelAccess,
        ::std::function<void(::WorldVerificationResult)>           callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
