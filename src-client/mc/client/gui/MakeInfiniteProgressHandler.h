#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/util/GridArea.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
class LevelStorage;
class MinecraftScreenModel;
class TaskGroup;
struct LevelSummary;
// clang-format on

class MakeInfiniteProgressHandler : public ::ProgressHandler {
public:
    // MakeInfiniteProgressHandler inner types define
    enum class State : int {
        Backup  = 0,
        Loading = 1,
        Saving  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MakeInfiniteProgressHandler::State> mState;
    ::ll::TypedStorage<8, 8, ::LevelSummary const&>                mEditedLevel;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                     mStorageVersion;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>>    mUnloaded;
    ::ll::TypedStorage<8, 304, ::GridArea<::std::shared_ptr<::LevelChunk>, ::Bedrock::Threading::SharedLockbox>> mView;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>>               mLegacySource;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LevelStorage>> mLevelStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                 mIOTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                           mDone;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                       mCallback;
    ::ll::TypedStorage<4, 4, float>                                          mProgress;
    ::ll::TypedStorage<8, 96, ::std::string[3]>                              mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    MakeInfiniteProgressHandler& operator=(MakeInfiniteProgressHandler const&);
    MakeInfiniteProgressHandler(MakeInfiniteProgressHandler const&);
    MakeInfiniteProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MakeInfiniteProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTTSProgressMessage() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MakeInfiniteProgressHandler(
        ::LevelSummary const&   editedLevel,
        ::StorageVersion        storageVersion,
        ::std::function<void()> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::LevelSummary const& editedLevel, ::StorageVersion storageVersion, ::std::function<void()> callback);
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

    MCNAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCNAPI ::std::string $getTTSProgressMessage() const;

    MCNAPI ::std::string $getTitleText() const;

    MCNAPI ::std::string $getName() const;
    // NOLINTEND
};
