#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::BlockUtils::Task { struct BlockUtilityPositionEntry; }
namespace Editor::BlockUtils::Task { struct BlockUtilitySubChunkBatch; }
// clang-format on

namespace Editor::BlockUtils::Task {

class BlockUtilitySubChunkPositionIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6e780e;
    ::ll::UntypedStorage<8, 8> mUnk830413;
    ::ll::UntypedStorage<8, 8> mUnka8dc77;
    ::ll::UntypedStorage<4, 4> mUnk2e8ade;
    ::ll::UntypedStorage<4, 4> mUnkaf0d6b;
    ::ll::UntypedStorage<4, 4> mUnkcc211b;
    ::ll::UntypedStorage<1, 1> mUnkc113a9;
    ::ll::UntypedStorage<1, 1> mUnke359b6;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilitySubChunkPositionIterator& operator=(BlockUtilitySubChunkPositionIterator const&);
    BlockUtilitySubChunkPositionIterator(BlockUtilitySubChunkPositionIterator const&);
    BlockUtilitySubChunkPositionIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BlockUtilitySubChunkPositionIterator(::Editor::BlockUtils::Task::BlockUtilitySubChunkBatch const* batch, bool end);

    MCNAPI void _startRange(uint64 rangeIndex);

    MCNAPI ::Editor::BlockUtils::Task::BlockUtilitySubChunkPositionIterator& operator++();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::BlockUtils::Task::BlockUtilitySubChunkBatch const* batch, bool end);
    // NOLINTEND
};

} // namespace Editor::BlockUtils::Task
