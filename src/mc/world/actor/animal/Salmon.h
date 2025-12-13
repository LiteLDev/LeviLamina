#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Fish.h"

class Salmon : public ::Fish {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool createAIGoals() /*override*/;

    virtual ~Salmon() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $createAIGoals();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
