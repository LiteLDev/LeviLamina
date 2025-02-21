#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class LabTableReaction;
// clang-format on

class SetBlockReactionComponent : public ::LabTableReactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPos>> mPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                mBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetBlockReactionComponent() /*override*/ = default;

    // vIndex: 3
    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
