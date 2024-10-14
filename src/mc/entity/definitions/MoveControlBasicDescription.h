#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/MoveControlDescription.h"

class MoveControlBasicDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlBasicDescription& operator=(MoveControlBasicDescription const&);
    MoveControlBasicDescription(MoveControlBasicDescription const&);
    MoveControlBasicDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~MoveControlBasicDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
