#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct IReplayableActorInput {
public:
    // prevent constructor by default
    IReplayableActorInput& operator=(IReplayableActorInput const&);
    IReplayableActorInput(IReplayableActorInput const&);
    IReplayableActorInput();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IReplayableActorInput() = default;

    // vIndex: 1
    virtual void advanceFrame(::EntityContext&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
