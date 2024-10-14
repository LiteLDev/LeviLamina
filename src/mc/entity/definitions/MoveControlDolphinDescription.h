#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/MoveControlDescription.h"

class MoveControlDolphinDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlDolphinDescription& operator=(MoveControlDolphinDescription const&);
    MoveControlDolphinDescription(MoveControlDolphinDescription const&);
    MoveControlDolphinDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~MoveControlDolphinDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
