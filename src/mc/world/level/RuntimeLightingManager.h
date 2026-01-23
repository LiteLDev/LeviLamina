#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class SubChunkPos;
struct Brightness;
struct SubChunkLightUpdate;
// clang-format on

class RuntimeLightingManager {
public:
    // RuntimeLightingManager inner types declare
    // clang-format off
    struct RelightingChunkElement;
    struct RuntimeLightingSubchunkList;
    // clang-format on

    // RuntimeLightingManager inner types define
    struct RelightingChunkElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                 mDist;
        ::ll::TypedStorage<8, 8, ::ChunkPos>                            mChunkPos;
        ::ll::TypedStorage<8, 8, uint64>                                mSubChunkIndex;
        ::ll::TypedStorage<8, 8, ::std::vector<::SubChunkLightUpdate>*> mAlteredBlockList;
        // NOLINTEND
    };

    struct RuntimeLightingSubchunkList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::SubChunkLightUpdate>>> mAlteredSubchunkBlockList;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~RuntimeLightingSubchunkList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::RuntimeLightingManager::RuntimeLightingSubchunkList>>
                                                                                               mLevelChunksToLight;
    ::ll::TypedStorage<8, 24, ::std::vector<::RuntimeLightingManager::RelightingChunkElement>> mListOfChunksToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPos>>                                    mProcessedSubchunks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                                       mBrightnessChangedList;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                     mDimension;
    ::ll::TypedStorage<1, 1, bool>                                                             mWorkerScheduled;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                                       mLightingTimeboxTime;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeLightingManager& operator=(RuntimeLightingManager const&);
    RuntimeLightingManager(RuntimeLightingManager const&);
    RuntimeLightingManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RuntimeLightingManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _getListOfChunksWithPlayerDistance();

    MCAPI void _relightChunks(::std::chrono::nanoseconds timeLimit);

    MCAPI void _removeProcessedSubchunks();

    MCAPI void updateBlockLight(
        ::BlockPos const& blockPos,
        ::Brightness      oldBrightness,
        ::Brightness      newBrightness,
        ::Brightness      oldAbsorption,
        ::Brightness      newAbsorption,
        bool              isSkyLight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
