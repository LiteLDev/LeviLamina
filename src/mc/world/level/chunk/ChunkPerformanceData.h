#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class AtomicTimeAccumulator;
class ChunkPos;
class ChunkSource;
class ILevelChunkEventManagerConnector;
class LevelChunk;
struct ChunkLoadTelemetryData;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

struct ChunkPerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkPerformanceData inner types declare
    // clang-format off
    class AtomicMemoryAccumulator;
    struct PaletteData;
    // clang-format on

    // ChunkPerformanceData inner types define
    class AtomicMemoryAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkd86ca2;
        ::ll::UntypedStorage<8, 8> mUnk482aa0;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtomicMemoryAccumulator& operator=(AtomicMemoryAccumulator const&);
        AtomicMemoryAccumulator(AtomicMemoryAccumulator const&);
        AtomicMemoryAccumulator();
    };

    struct PaletteData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka5207c;
        ::ll::UntypedStorage<8, 8> mUnk12ad51;
        ::ll::UntypedStorage<8, 8> mUnkcecb36;
        // NOLINTEND

    public:
        // prevent constructor by default
        PaletteData& operator=(PaletteData const&);
        PaletteData(PaletteData const&);
        PaletteData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ChunkPerformanceData::AtomicMemoryAccumulator> mRenderChunkMemorySizePerformanceData;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator>                         mServerLevelChunkSaveTime;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>                              mServerLevelChunkChunksSavedCount;
    ::ll::TypedStorage<4, 76, ::ChunkLoadTelemetryData>                        mChunkLoadTelemetryData;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                            mBiomeFeaturePlaceCallsCount;
    ::ll::TypedStorage<1, 1, bool>                                             mShouldResetData;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkSharedCount;
    ::ll::TypedStorage<4, 4, uint>                                             mWeakRenderChunkSharedCount;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkSharedMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryCount;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryBaseMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryVertexCount;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryVertexBufferSize;
    ::ll::TypedStorage<4, 4, uint>                                             mRenderChunkGeometryMeshVertexBufferSize;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkGeometryFaceMetadataMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkInstancedCount;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkInstancedBaseMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkInstancedIndexMemoryUsed;
    ::ll::TypedStorage<4, 4, uint>                                 mRenderChunkInstancedDifferentGeoCount;
    ::ll::TypedStorage<8, 8, uint64>                               mClientLevelChunkMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerLevelChunkMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSynchedLevelChunkMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSynchedLevelChunkMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSubChunkLightDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSubChunkLightDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSynchedSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSynchedSubChunkBlockDataMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerBiomeData3DMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientBiomeData3DMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerSynchedBiomeData3DMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mClientSynchedBiomeData3DMemory;
    ::ll::TypedStorage<8, 24, ::ChunkPerformanceData::PaletteData> mClientSubChunkPaletteData;
    ::ll::TypedStorage<8, 24, ::ChunkPerformanceData::PaletteData> mServerSubChunkPaletteData;
    ::ll::TypedStorage<8, 24, ::ChunkPerformanceData::PaletteData> mClientBiomePaletteData;
    ::ll::TypedStorage<8, 24, ::ChunkPerformanceData::PaletteData> mServerBiomePaletteData;
    ::ll::TypedStorage<8, 8, uint64>                               mClientLevelChunkBlockTickingQueueMemory;
    ::ll::TypedStorage<8, 8, uint64>                               mServerLevelChunkBlockTickingQueueMemory;
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingRenderChunkData;
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingClientLevelChunkData;
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingServerLevelChunkData;
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingClientSynchedLevelChunkData;
    ::ll::TypedStorage<1, 1, bool>                                 mIsFetchingServerSynchedLevelChunkData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>>>
        mClientChunkSourceLookupMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::weak_ptr<::LevelChunk>>>
                                                               mServerChunkSourceLookupMap;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mServerChunksQueued;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mServerChunksSent;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mServerChunksExpired;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mSubChunkHashInitializations;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>              mSubChunkHashRecalculations;
    ::ll::TypedStorage<4, 4, uint>                             mRenderDistance;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoaded;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkPerformanceData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkPerformanceData();

    MCAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk& levelChunk, int);

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void resetAll();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
