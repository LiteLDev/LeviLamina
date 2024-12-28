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
    ::ll::UntypedStorage<8, 24> mUnk7c81e8;
    ::ll::UntypedStorage<8, 24> mUnke385cf;
    ::ll::UntypedStorage<8, 24> mUnkcc42e4;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkViewTrackerManager& operator=(ChunkViewTrackerManager const&);
    ChunkViewTrackerManager(ChunkViewTrackerManager const&);
    ChunkViewTrackerManager();

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
