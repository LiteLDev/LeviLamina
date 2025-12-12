#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class LabTableReaction;
// clang-format on

class LabTableReactionComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LabTableReactionComponent();

    virtual void _onStart(::LabTableReaction& owner, ::BlockSource& region);

    virtual void _onTick(::LabTableReaction& owner, ::BlockSource& region);

    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onStart(::LabTableReaction& owner, ::BlockSource& region);

    MCNAPI void $_onTick(::LabTableReaction& owner, ::BlockSource& region);

    MCNAPI void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
