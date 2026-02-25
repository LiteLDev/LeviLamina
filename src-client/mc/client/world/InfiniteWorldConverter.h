#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/util/GridArea.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class IContentKeyProvider;
class ILevelListCache;
class LevelChunk;
class LevelDbEnv;
class LevelStorage;
class TaskGroup;
// clang-format on

namespace World {

class InfiniteWorldConverter {
public:
    // InfiniteWorldConverter inner types define
    enum class State : int {
        Idle    = 0,
        Loading = 1,
        Done    = 2,
    };

    enum class Result : int {
        Ok           = 0,
        InvalidLevel = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                  mTaskGroup;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                              mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>>     mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                    mLevelDbEnv;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LevelStorage>>                  mLevelStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkSource>>                                mLegacySource;
    ::ll::TypedStorage<4, 4, ::World::InfiniteWorldConverter::State>                          mState;
    ::ll::TypedStorage<8, 376, ::GridArea<::std::shared_ptr<::LevelChunk>>>                   mView;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>>                               mUnloaded;
    ::ll::TypedStorage<4, 4, float>                                                           mProgress;
    ::ll::TypedStorage<8, 32, ::World::WorldID>                                               mWorldId;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                        mOnCompleteCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::World::InfiniteWorldConverter::Result)>> mOnErrorCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    InfiniteWorldConverter& operator=(InfiniteWorldConverter const&);
    InfiniteWorldConverter(InfiniteWorldConverter const&);
    InfiniteWorldConverter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InfiniteWorldConverter(
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv
    );

    MCAPI void _makeBackupOfLevel(::World::WorldID const& id);

    MCAPI void _resetState();

    MCAPI void _tick();

    MCAPI void makeWorldInfinite(
        ::World::WorldID const&                                        id,
        ::std::function<void()>                                        onCompleteCallback,
        ::std::function<void(::World::InfiniteWorldConverter::Result)> onErrorCallback
    );

    MCAPI ~InfiniteWorldConverter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
