#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class MinecraftScreenModel;
class TaskGroup;
// clang-format on

class WorldCopyProgressHandler : public ::ProgressHandler {
public:
    // WorldCopyProgressHandler inner types define
    enum class Result : int {
        Success   = 0,
        Error     = 1,
        Cancelled = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mLevelID;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mNewWorldId;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<::WorldCopyProgressHandler::Result>> mCopyTaskHandle;
    ::ll::TypedStorage<8, 64, ::std::function<void(::LevelData&)>>                             mSetDataCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::WorldCopyProgressHandler::Result)>>       mOnCompleteCallback;
    ::ll::TypedStorage<4, 4, ::std::atomic<float>>                                             mProgress;
    ::ll::TypedStorage<4, 4, float>                                                            mShownProgress;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                          mStartTimestamp;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                          mLastTickTimestamp;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                   mIOTaskGroup;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mBaseProgressMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mTTSProgressMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mTitleText;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCopyProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldCopyProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel&) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTTSProgressMessage() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldCopyProgressHandler(
        ::std::string const&                                      levelID,
        bool                                                      isEditorModeEnabled,
        ::std::function<void(::LevelData&)>                       setDataCallback,
        ::std::function<void(::WorldCopyProgressHandler::Result)> onCompleteCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                      levelID,
        bool                                                      isEditorModeEnabled,
        ::std::function<void(::LevelData&)>                       setDataCallback,
        ::std::function<void(::WorldCopyProgressHandler::Result)> onCompleteCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
