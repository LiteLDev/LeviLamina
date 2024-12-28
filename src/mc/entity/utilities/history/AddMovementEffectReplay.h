#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/input/IReplayableActorInput.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace History {

struct AddMovementEffectReplay : public ::IReplayableActorInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk428a44;
    // NOLINTEND

public:
    // prevent constructor by default
    AddMovementEffectReplay& operator=(AddMovementEffectReplay const&);
    AddMovementEffectReplay(AddMovementEffectReplay const&);
    AddMovementEffectReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void advanceFrame(::EntityContext& entity) const /*override*/;

    // vIndex: 0
    virtual ~AddMovementEffectReplay() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $advanceFrame(::EntityContext& entity) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
