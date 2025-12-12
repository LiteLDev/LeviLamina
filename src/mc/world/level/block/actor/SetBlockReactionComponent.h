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
    // prevent constructor by default
    SetBlockReactionComponent& operator=(SetBlockReactionComponent const&);
    SetBlockReactionComponent(SetBlockReactionComponent const&);
    SetBlockReactionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetBlockReactionComponent() /*override*/ = default;

    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
