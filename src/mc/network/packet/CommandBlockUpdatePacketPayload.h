#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class BaseCommandBlock;
class BlockSource;
class CommandBlockActor;
// clang-format on

struct CommandBlockUpdatePacketPayload {
public:
    // CommandBlockUpdatePacketPayload inner types declare
    // clang-format off
    struct BlockCommandData;
    struct EntityCommandTarget;
    // clang-format on

    // CommandBlockUpdatePacketPayload inner types define
    struct BlockCommandData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>        mBlockPos;
        ::ll::TypedStorage<2, 2, ::CommandBlockMode> mMode;
        ::ll::TypedStorage<1, 1, bool>               mRedstoneMode;
        ::ll::TypedStorage<1, 1, bool>               mIsConditional;
        // NOLINTEND
    };

    struct EntityCommandTarget {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mEntityId;
        // NOLINTEND
    };

    using TargetVariant = ::std::variant<
        ::CommandBlockUpdatePacketPayload::EntityCommandTarget,
        ::CommandBlockUpdatePacketPayload::BlockCommandData>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::CommandBlockUpdatePacketPayload::EntityCommandTarget,
            ::CommandBlockUpdatePacketPayload::BlockCommandData>>
                                                                   mTarget;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCommand;
    ::ll::TypedStorage<8, 32, ::std::string>                       mLastOutput;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<1, 1, bool>                                 mTrackOutput;
    ::ll::TypedStorage<4, 4, int>                                  mTickDelay;
    ::ll::TypedStorage<1, 1, bool>                                 mExecuteOnFirstTick;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockUpdatePacketPayload& operator=(CommandBlockUpdatePacketPayload const&);
    CommandBlockUpdatePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockUpdatePacketPayload(::CommandBlockUpdatePacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI CommandBlockUpdatePacketPayload(::ActorRuntimeID entityId, ::BaseCommandBlock const& baseCmdBlock);

    MCAPI CommandBlockUpdatePacketPayload(::BlockSource& region, ::CommandBlockActor const& cmdBlock);
#endif

    MCAPI ~CommandBlockUpdatePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandBlockUpdatePacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ActorRuntimeID entityId, ::BaseCommandBlock const& baseCmdBlock);

    MCAPI void* $ctor(::BlockSource& region, ::CommandBlockActor const& cmdBlock);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
