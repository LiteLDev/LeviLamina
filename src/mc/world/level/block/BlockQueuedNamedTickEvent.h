#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkBlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class CompoundTag;
// clang-format on

class BlockQueuedNamedTickEvent {
public:
    // BlockQueuedNamedTickEvent inner types define
    enum class ValidationResult : int {
        Success                     = 0,
        TriggerTimeNotAfterCreation = 1,
        EmptyOrTooLongEventName     = 2,
        InvalidBlockType            = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 4, ::ChunkBlockPos>                               mChunkBlockPos;
    ::ll::TypedStorage<4, 4, uint>                                          mNamespaceHash;
    ::ll::TypedStorage<8, 8, ::BlockType const&>                            mBlockType;
    ::ll::TypedStorage<1, 32, ::std::array<char, 32>>                       mEventName;
    ::ll::TypedStorage<8, 8, ::Tick>                                        mCreationTime;
    ::ll::TypedStorage<8, 8, ::Tick>                                        mTriggerTime;
    ::ll::TypedStorage<4, 4, ::BlockQueuedNamedTickEvent::ValidationResult> mValidationResult;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockQueuedNamedTickEvent& operator=(BlockQueuedNamedTickEvent const&);
    BlockQueuedNamedTickEvent(BlockQueuedNamedTickEvent const&);
    BlockQueuedNamedTickEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CompoundTag serialize() const;
    // NOLINTEND
};
