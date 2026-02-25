#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class DeleteStorageAreaContentProgressHandler : public ::ProgressHandler {
public:
    // DeleteStorageAreaContentProgressHandler inner types declare
    // clang-format off
    struct CancelTimeInfo;
    // clang-format on

    // DeleteStorageAreaContentProgressHandler inner types define
    enum class StateBitField : uint {};

    struct CancelTimeInfo {};

    using OnCompleteCallback = ::std::function<void()> const;

    using DirectoryList = ::std::vector<::Core::PathBuffer<::std::string>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>>          mDirectoryList;
    ::ll::TypedStorage<8, 16, ::DeleteStorageAreaContentProgressHandler::CancelTimeInfo> mCancelTimeInfo;
    ::ll::TypedStorage<8, 64, ::std::function<void()> const>                             mOnCompleteCallback;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                    mStartTimestamp;
    ::ll::TypedStorage<4, 4, ::DeleteStorageAreaContentProgressHandler::StateBitField>   mStates;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mDeleteStorageAreaContentTitle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeleteStorageAreaContentProgressHandler() /*override*/;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _evaluateLoadTime(
        ::std::chrono::seconds const&                            loadTimeToEvaluate,
        ::DeleteStorageAreaContentProgressHandler::StateBitField stateToAdd
    );

    MCAPI void _onComplete(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void deleteDirectoryContentsRecursively(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& rootPath,
        ::std::string const&                                      dirToDelete
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel&);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel&);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
