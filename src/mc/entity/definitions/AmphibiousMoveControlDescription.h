#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/MoveControlDescription.h"

struct AmphibiousMoveControlDescription : public ::MoveControlDescription {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual ~AmphibiousMoveControlDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
