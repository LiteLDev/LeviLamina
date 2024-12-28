#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/input/CorrectionType.h"
#include "mc/input/IMovementCorrection.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
// clang-format on

namespace History {

struct MovementEffectsReplay : public ::IMovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk586136;
    ::ll::UntypedStorage<4, 4>  mUnk5c62aa;
    ::ll::UntypedStorage<1, 1>  mUnk98116b;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementEffectsReplay& operator=(MovementEffectsReplay const&);
    MovementEffectsReplay(MovementEffectsReplay const&);
    MovementEffectsReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void advanceFrame(::EntityContext&) const /*override*/;

    // vIndex: 3
    virtual void advanceLiveFrame(::Actor&, ::std::optional<uint64>) /*override*/;

    // vIndex: 4
    virtual ::CorrectionType getCorrectionType() const /*override*/;

    // vIndex: 0
    virtual ~MovementEffectsReplay() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $advanceFrame(::EntityContext&) const;

    MCAPI void $advanceLiveFrame(::Actor&, ::std::optional<uint64>);

    MCAPI ::CorrectionType $getCorrectionType() const;
    // NOLINTEND
};

} // namespace History
