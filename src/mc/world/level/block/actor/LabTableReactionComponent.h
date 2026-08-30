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
    virtual ~LabTableReactionComponent() = default;

    virtual void _onStart(::LabTableReaction&, ::BlockSource&);

    virtual void _onTick(::LabTableReaction&, ::BlockSource&);

    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $_onStart(::LabTableReaction&, ::BlockSource&);

    MCFOLD void $_onTick(::LabTableReaction&, ::BlockSource&);


    // NOLINTEND
};
