#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
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
    ::ll::TypedStorage<4, 4, ::MakeInfiniteProgressHandler::State>           mState;
    ::ll::TypedStorage<8, 8, ::LevelSummary const&>                          mEditedLevel;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                               mStorageVersion;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>>              mUnloaded;
    ::ll::TypedStorage<8, 376, ::GridArea<::std::shared_ptr<::LevelChunk>>>  mView;
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
    virtual ~MakeInfiniteProgressHandler() /*override*/;

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
    MCAPI MakeInfiniteProgressHandler(
        ::LevelSummary const&   editedLevel,
        ::StorageVersion        storageVersion,
        ::std::function<void()> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::LevelSummary const& editedLevel, ::StorageVersion storageVersion, ::std::function<void()> callback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTTSProgressMessage() const;

    MCFOLD ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
