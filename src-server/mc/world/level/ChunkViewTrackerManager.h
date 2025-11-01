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
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const> mDimensionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::ChunkViewSource>>> mChunkViewTrackers;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewTrackerManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkViewTrackerManager(::Bedrock::NotNullNonOwnerPtr<::DimensionManager> dimensionManager, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);

    MCNAPI void addChunkViewTracker(::std::weak_ptr<::ChunkViewSource> chunkViewSource);

    MCNAPI void onChunkReload(::Bounds const& bound);

    MCNAPI ~ChunkViewTrackerManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::DimensionManager> dimensionManager, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
