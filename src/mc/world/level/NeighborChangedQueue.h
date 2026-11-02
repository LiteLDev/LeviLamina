#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class ChunkBlockPos;
class CompoundTag;
struct NeighborChange;
struct Tick;
// clang-format on

class NeighborChangedQueue {
public:
    // NeighborChangedQueue inner types declare
    // clang-format off
    struct Record;
    // clang-format on

    // NeighborChangedQueue inner types define
    struct Record {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 4>  mUnk752355;
        ::ll::UntypedStorage<8, 8>  mUnkbb00cf;
        ::ll::UntypedStorage<8, 40> mUnk6e52b2;
        // NOLINTEND

    public:
        // prevent constructor by default
        Record& operator=(Record const&);
        Record(Record const&);
        Record();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk3eeb66;
    ::ll::UntypedStorage<8, 64> mUnk5e63bc;
    ::ll::UntypedStorage<8, 16> mUnk1a779f;
    ::ll::UntypedStorage<8, 8>  mUnke165f1;
    // NOLINTEND

public:
    // prevent constructor by default
    NeighborChangedQueue& operator=(NeighborChangedQueue const&);
    NeighborChangedQueue(NeighborChangedQueue const&);
    NeighborChangedQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool appendRestoredRecord(::NeighborChangedQueue::Record record);

    MCNAPI void load(::CompoundTag const& tag);

    MCNAPI ::std::optional<::NeighborChangedQueue::Record>
    loadRecordPayload(::CompoundTag const& tag, ::ChunkBlockPos const& notifiedPos) const;

    MCNAPI ::NeighborChangedQueue& operator=(::NeighborChangedQueue&& other);

    MCNAPI void recordChange(
        ::Tick const&           currentTick,
        ::ChunkBlockPos const&  notifiedPos,
        ::Block const&          listenerPermutation,
        ::NeighborChange const& change
    );

    MCNAPI void save(::CompoundTag& tag) const;

    MCNAPI ::std::unique_ptr<::CompoundTag> saveRecordPayload(::NeighborChangedQueue::Record const& record) const;

    MCNAPI void sendEvents(::BlockSource& region);

    MCNAPI ::std::vector<::NeighborChangedQueue::Record> takeFront(uint64 maxCount);
    // NOLINTEND
};
