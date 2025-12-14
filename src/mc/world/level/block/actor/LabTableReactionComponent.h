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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $_onStart(::LabTableReaction& owner, ::BlockSource& region);

    MCFOLD void $_onTick(::LabTableReaction& owner, ::BlockSource& region);

    MCFOLD void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
