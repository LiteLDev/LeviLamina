#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockChangeContext;
class BlockSource;
class CompoundTag;
class Dimension;
class IUnknownBlockTypeRegistry;
class ServerLevel;
// clang-format on

class BlockMultiBlockDelayedPlacement : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    mFirstPartPos;
    ::ll::TypedStorage<1, 1, uchar>          mDirection;
    ::ll::TypedStorage<1, 1, uchar>          mPartCount;
    ::ll::TypedStorage<8, 8, ::Block const&> mFirstPart;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMultiBlockDelayedPlacement& operator=(BlockMultiBlockDelayedPlacement const&);
    BlockMultiBlockDelayedPlacement(BlockMultiBlockDelayedPlacement const&);
    BlockMultiBlockDelayedPlacement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::ServerLevel&, ::Dimension& dimension) /*override*/;

    virtual void serialize(::CompoundTag& tag) /*override*/;

    virtual bool operator==(::IRequestAction const& action) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidTag(::CompoundTag const& tag);

    MCAPI static ::std::unique_ptr<::BlockMultiBlockDelayedPlacement>
    load(::CompoundTag const& tag, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockTypeRegistry);

    MCAPI static bool tryQueueOrExecuteAction(
        ::BlockSource const&        region,
        ::Block const&              blockToPlace,
        ::BlockPos const&           pos,
        bool                        isClientSide,
        ::BlockChangeContext const& blockChangeContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::ServerLevel&, ::Dimension& dimension);

    MCAPI void $serialize(::CompoundTag& tag);


    // NOLINTEND
};
