#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

struct ChunkPerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkPerformanceData inner types declare
    // clang-format off
    class AtomicMemoryAccumulator;
    // clang-format on

    // ChunkPerformanceData inner types define
    class AtomicMemoryAccumulator {
    public:
        // prevent constructor by default
        AtomicMemoryAccumulator& operator=(AtomicMemoryAccumulator const&);
        AtomicMemoryAccumulator(AtomicMemoryAccumulator const&);

    public:
        // NOLINTBEGIN
        MCAPI AtomicMemoryAccumulator();

        MCAPI uint64 getMemoryAverage() const;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ChunkPerformanceData& operator=(ChunkPerformanceData const&);
    ChunkPerformanceData(ChunkPerformanceData const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkPerformanceData() = default;

    MCAPI ChunkPerformanceData();

    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void resetAll();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onChunkLoaded(class ChunkSource&, class LevelChunk& levelChunk, int);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
