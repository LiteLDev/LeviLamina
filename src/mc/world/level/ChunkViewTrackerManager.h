#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ChunkViewSource;
class DimensionManager;
class GameplayUserManager;
struct Bounds;
// clang-format on

class ChunkViewTrackerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>    mDimensionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::ChunkViewSource>>>          mChunkViewTrackers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkViewTrackerManager(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager
    );

    MCAPI void addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource);

    MCAPI void onChunkReload(::Bounds const& bound);

    MCAPI ~ChunkViewTrackerManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
