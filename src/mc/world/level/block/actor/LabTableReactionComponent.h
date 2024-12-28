#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class LabTableReaction;
// clang-format on

class LabTableReactionComponent {
public:
    // prevent constructor by default
    LabTableReactionComponent& operator=(LabTableReactionComponent const&);
    LabTableReactionComponent(LabTableReactionComponent const&);
    LabTableReactionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LabTableReactionComponent();

    // vIndex: 1
    virtual void _onStart(::LabTableReaction& owner, ::BlockSource& region);

    // vIndex: 2
    virtual void _onTick(::LabTableReaction& owner, ::BlockSource& region);

    // vIndex: 3
    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_onStart(::LabTableReaction& owner, ::BlockSource& region);

    MCAPI void $_onTick(::LabTableReaction& owner, ::BlockSource& region);

    MCAPI void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
