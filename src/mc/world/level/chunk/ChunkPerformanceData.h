#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

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
        // symbol: ??0AtomicMemoryAccumulator@ChunkPerformanceData@@QEAA@XZ
        MCAPI AtomicMemoryAccumulator();

        // symbol: ?getMemoryAverage@AtomicMemoryAccumulator@ChunkPerformanceData@@QEBA_KXZ
        MCAPI uint64 getMemoryAverage() const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ChunkPerformanceData& operator=(ChunkPerformanceData const&);
    ChunkPerformanceData(ChunkPerformanceData const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChunkPerformanceData@@UEAA@XZ
    virtual ~ChunkPerformanceData() = default;

    // symbol: ??0ChunkPerformanceData@@QEAA@XZ
    MCAPI ChunkPerformanceData();

    // symbol: ?recordLoadedChunk@ChunkPerformanceData@@QEAAXAEBVLevelChunk@@@Z
    MCAPI void recordLoadedChunk(class LevelChunk const& chunk);

    // symbol: ?resetAll@ChunkPerformanceData@@QEAAXXZ
    MCAPI void resetAll();

    // NOLINTEND
};
