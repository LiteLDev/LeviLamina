#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

class PolarBear : public ::Animal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk17e879;
    ::ll::UntypedStorage<4, 4> mUnke9fe25;
    // NOLINTEND

public:
    // prevent constructor by default
    PolarBear& operator=(PolarBear const&);
    PolarBear(PolarBear const&);
    PolarBear();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 85
    virtual bool canFreeze() const /*override*/;

    // vIndex: 8
    virtual ~PolarBear() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCFOLD bool $canFreeze() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
